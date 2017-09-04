
#include <unordered_map>
#include "sgs_ouzel.hpp"


sgs_Context* g_sgsCtx;

string APPLICATION_NAME = "sgs-ouzel";
string DEVELOPER_NAME = "org.sgscript";

unordered_map< void*, sgsObjectBase* > g_PtrToSgsObj;


sgs_ObjInterface g_sgsobj_empty_handle[1] = {{ "empty_handle", NULL }};


template< class T > sgsHandle<T> CreateObj()
{
	sgsVariable v;
	SGS_CREATECLASS( g_sgsCtx, &v.var, T, () );
	return v.get_handle<T>();
}

template< class T > T* GetObj( void* ptr )
{
	auto it = g_PtrToSgsObj.find( ptr );
	if( it != g_PtrToSgsObj.end() )
		return static_cast<T*>( it->second );
	return nullptr;
}

template< class T > sgsHandle<T> GetObjHandle( void* ptr )
{
	return sgsHandle<T>( GetObj<T>( ptr ) );
}


void sgsOuzelDisposable::dispose()
{
	if( m_sgsObject )
	{
		this->~sgsOuzelDisposable();
		m_sgsObject->data = NULL;
		m_sgsObject->iface = g_sgsobj_empty_handle;
		C = NULL;
		m_sgsObject = NULL;
	}
}


int sgsOuzelColor::call( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	float v[4];
	auto ssz = sgs_StackSize( callerCtx );
	if( ssz == 1 && sgs_ParseVec4( callerCtx, 0, v, 0 ) )
	{
		sgs_CreateColorp( callerCtx, NULL, v );
		return 1;
	}
	else if( ssz == 1 && sgs_ItemType( callerCtx, 0 ) == SGS_VT_INT )
	{
		sgs_PushVar( callerCtx, Color( sgs_GetVar<uint32_t>()( callerCtx, 0 ) ) );
		return 1;
	}
	else if( ssz >= 3 && sgs_ItemType( callerCtx, 0 ) == SGS_VT_INT && sgs_ItemType( callerCtx, 1 ) == SGS_VT_INT && sgs_ItemType( callerCtx, 2 ) == SGS_VT_INT )
	{
		sgs_PushVar( callerCtx, Color(
			sgs_GetVar<uint8_t>()( callerCtx, 0 ),
			sgs_GetVar<uint8_t>()( callerCtx, 1 ),
			sgs_GetVar<uint8_t>()( callerCtx, 2 ),
			ssz == 4 ? sgs_GetVar<uint8_t>()( callerCtx, 3 ) : 0xFF
		) );
		return 1;
	}
	else if( ssz == 1 && sgs_ItemType( callerCtx, 0 ) == SGS_VT_STRING )
	{
		sgs_PushVar( callerCtx, Color( sgs_GetVar<string>()( callerCtx, 0 ) ) );
		return 1;
	}
	else
		return sgs_Msg( C, SGS_WARNING, "Unknown overload" );
}


sgsHandle< struct sgsOuzelActor > sgsOuzelUIEvent::getActor()
{
	return GetObjHandle<sgsOuzelActor>( actor );
}

sgsOuzelEventHandler::sgsOuzelEventHandler( int prio ) : EventHandler( prio ), priority( prio )
{
	keyboardHandler = bind( &sgsOuzelEventHandler::handleKeyboard, this, placeholders::_1, placeholders::_2 );
	mouseHandler = bind( &sgsOuzelEventHandler::handleMouse, this, placeholders::_1, placeholders::_2 );
	touchHandler = bind( &sgsOuzelEventHandler::handleTouch, this, placeholders::_1, placeholders::_2 );
	gamepadHandler = bind( &sgsOuzelEventHandler::handleGamepad, this, placeholders::_1, placeholders::_2 );
	uiHandler = bind( &sgsOuzelEventHandler::handleUI, this, placeholders::_1, placeholders::_2 );
	
	lastKeyboardEvent = CreateObj<sgsOuzelKeyboardEvent>();
	lastMouseEvent = CreateObj<sgsOuzelMouseEvent>();
	lastTouchEvent = CreateObj<sgsOuzelTouchEvent>();
	lastGamepadEvent = CreateObj<sgsOuzelGamepadEvent>();
	lastUIEvent = CreateObj<sgsOuzelUIEvent>();
	
	sharedEngine->getEventDispatcher()->addEventHandler( this );
}

bool sgsOuzelEventHandler::handleKeyboard( Event::Type type, const KeyboardEvent& event )
{
	*static_cast<KeyboardEvent*>(&*lastKeyboardEvent) = event;
	return onKeyboardEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onKeyboardEvent, int(type), lastKeyboardEvent ) : false;
}

bool sgsOuzelEventHandler::handleMouse( Event::Type type, const MouseEvent& event )
{
	*static_cast<MouseEvent*>(&*lastMouseEvent) = event;
	return onMouseEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onMouseEvent, int(type), lastMouseEvent ) : false;
}

bool sgsOuzelEventHandler::handleTouch( Event::Type type, const TouchEvent& event )
{
	*static_cast<TouchEvent*>(&*lastTouchEvent) = event;
	return onTouchEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onTouchEvent, int(type), lastTouchEvent ) : false;
}

bool sgsOuzelEventHandler::handleGamepad( Event::Type type, const GamepadEvent& event )
{
	*static_cast<GamepadEvent*>(&*lastGamepadEvent) = event;
	return onGamepadEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onGamepadEvent, int(type), lastGamepadEvent ) : false;
}

bool sgsOuzelEventHandler::handleUI( Event::Type type, const UIEvent& event )
{
	*static_cast<UIEvent*>(&*lastUIEvent) = event;
	return onUIEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onUIEvent, int(type), lastUIEvent ) : false;
}

sgsOuzelUpdateCallback::sgsOuzelUpdateCallback( int prio ) : UpdateCallback( prio ), priority( prio )
{
	callback = bind( &sgsOuzelUpdateCallback::update, this, placeholders::_1 );
	
	sharedEngine->scheduleUpdate( this );
}

void sgsOuzelUpdateCallback::update( float dt )
{
	if( onUpdate.not_null() )
		onUpdate.tcall<void>( C, dt );
}


sgsOuzelComponent::~sgsOuzelComponent()
{
	g_PtrToSgsObj.erase( obj );
	delete obj;
}

sgsHandle< struct sgsOuzelActor > sgsOuzelComponent::getActor()
{
	return GetObjHandle<sgsOuzelActor>( obj->getActor() );
}


bool sgsOuzelSprite::initFromFile( const string& filename, bool mipmaps /* = true */,
	uint32_t spritesX /* = 1 */, uint32_t spritesY /* = 1 */,
	const Vector2& pivot /* = Vector2(0.5f, 0.5f) */ )
{
	auto ssz = sgs_StackSize( C );
	return Item()->init(
		filename,
		ssz >= 2 ? mipmaps : true,
		ssz >= 3 ? spritesX : 1,
		ssz >= 4 ? spritesY : 1,
		ssz >= 5 ? pivot : Vector2(0.5f,0.5f)
	);
}

bool sgsOuzelSprite::initFromTexture( sgsHandle< struct sgsOuzelTexture > newTexture,
	uint32_t spritesX /* = 1 */, uint32_t spritesY /* = 1 */,
	const Vector2& pivot /* = Vector2(0.5f, 0.5f) */ )
{
	if( !newTexture )
	{
		sgs_Msg( C, SGS_WARNING, "texture not specified" );
		return false;
	}
	auto ssz = sgs_StackSize( C );
	return Item()->init(
		newTexture->texture,
		ssz >= 2 ? spritesX : 1,
		ssz >= 3 ? spritesY : 1,
		ssz >= 4 ? pivot : Vector2(0.5f,0.5f)
	);
}

void sgsOuzelSprite::play( bool repeat /* = true */, float newFrameInterval /* = 0.1f */ )
{
	auto ssz = sgs_StackSize( C );
	Item()->play( ssz >= 1 ? repeat : true, ssz >= 2 ? newFrameInterval : 0.1f );
}

void sgsOuzelSprite::stop( bool resetAnimation /* = true */ )
{
	auto ssz = sgs_StackSize( C );
	Item()->stop( ssz >= 1 ? resetAnimation : true );
}


bool sgsOuzelShapeRenderer::circle( const Vector2& position,
	float radius,
	const Color& color,
	bool fill /* = false */,
	uint32_t segments /* = 16 */,
	float thickness /* = 0.0f */ )
{
	auto ssz = sgs_StackSize( C );
	return Item()->circle( position, radius, color, fill, ssz >= 5 ? segments : 16, thickness );
}

bool sgsOuzelShapeRenderer::curve( const std::vector<Vector2>& controlPoints,
	const Color& color,
	uint32_t segments /* = 16 */,
	float thickness /* = 0.0f */ )
{
	auto ssz = sgs_StackSize( C );
	return Item()->curve( controlPoints, color, ssz >= 3 ? segments : 16, thickness );
}


sgsHandle< struct sgsOuzelActor > sgsOuzelAnimator::getTargetActor()
{
	return GetObjHandle<sgsOuzelActor>( Item()->getTargetActor() );
}

void sgsOuzelAnimator::addAnimator( sgsOuzelAnimator::Handle animator )
{
	if( animator )
		Item()->addAnimator( animator->Item() );
	else
		sgs_Msg( C, SGS_WARNING, "animator not specified" );
}

void sgsOuzelAnimator::removeAnimator( sgsOuzelAnimator::Handle animator )
{
	if( animator )
		Item()->removeAnimator( animator->Item() );
	else
		sgs_Msg( C, SGS_WARNING, "animator not specified" );
}

sgsOuzelAnimator::Handle sgsOuzelAnimator::getParent()
{
	return GetObjHandle<sgsOuzelAnimator>( Item()->getParent() );
}


sgsOuzelActorContainer::~sgsOuzelActorContainer()
{
	g_PtrToSgsObj.erase( obj );
	delete obj;
}

void sgsOuzelActorContainer::addChild( sgsHandle< struct sgsOuzelActor > actor )
{
	obj->addChild( actor ? actor->Item() : nullptr );
}

bool sgsOuzelActorContainer::removeChild( sgsHandle< struct sgsOuzelActor > actor )
{
	return obj->removeChild( actor ? actor->Item() : nullptr );
}

bool sgsOuzelActorContainer::moveChildToBack( sgsHandle< struct sgsOuzelActor > actor )
{
	return obj->moveChildToBack( actor ? actor->Item() : nullptr );
}

bool sgsOuzelActorContainer::moveChildToFront( sgsHandle< struct sgsOuzelActor > actor )
{
	return obj->moveChildToFront( actor ? actor->Item() : nullptr );
}

void sgsOuzelActorContainer::removeAllChildren()
{
	obj->removeAllChildren();
}

bool sgsOuzelActorContainer::hasChild( sgsHandle< struct sgsOuzelActor > actor, bool recursive /* = false */ )
{
	return obj->hasChild( actor ? actor->Item() : nullptr, recursive );
}

sgsVariable sgsOuzelActorContainer::getChildren()
{
	auto& children = obj->getChildren();
	for( Actor* actor : children )
	{
		sgs_PushVar( C, GetObjHandle<sgsOuzelActor>( actor ) );
	}
	sgsVariable var;
	var.create_array( C, children.size() );
	return var;
}


sgsOuzelActorContainer::Handle sgsOuzelActor::getParent()
{
	return GetObjHandle<sgsOuzelActorContainer>( Item()->getParent() );
}

void sgsOuzelActor::removeFromParent()
{
	Item()->removeFromParent();
}

void sgsOuzelActor::addComponent( sgsOuzelComponent::Handle component )
{
	if( component )
		Item()->addComponent( component->Item() );
	else
		sgs_Msg( C, SGS_WARNING, "component not specified" );
}

void sgsOuzelActor::removeComponent( sgsOuzelComponent::Handle component )
{
	if( component )
		Item()->removeComponent( component->Item() );
	else
		sgs_Msg( C, SGS_WARNING, "component not specified" );
}

void sgsOuzelActor::removeAllComponents()
{
	Item()->removeAllComponents();
}

sgsVariable sgsOuzelActor::getComponents( uint32_t type /* = <none> */ )
{
	std::vector<Component*> storedComps;
	const std::vector<Component*>* pcomps = &storedComps;
	if( sgs_StackSize( C ) >= 1 )
		storedComps = Item()->getComponents();
	else
		pcomps = &Item()->getComponents();
	for( Component* comp : *pcomps )
	{
		sgs_PushVar( C, GetObjHandle<sgsOuzelComponent>( comp ) );
	}
	sgsVariable var;
	var.create_array( C, pcomps->size() );
	return var;
}


sgsOuzelLayer::Handle sgsOuzelActorContainer::getLayer()
{
	return GetObjHandle<sgsOuzelLayer>( obj->getLayer() );
}

sgsVariable sgsOuzelLayer::getCameras()
{
	auto& cameras = Item()->getCameras();
	for( Camera* camera : cameras )
	{
		sgs_PushVar( C, GetObjHandle<sgsOuzelCamera>( camera ) );
	}
	sgsVariable var;
	var.create_array( C, cameras.size() );
	return var;
}

sgsOuzelScene::Handle sgsOuzelLayer::getScene()
{
	return sgsOuzelScene::Handle( static_cast<sgsOuzelScene*>( sharedEngine->getSceneManager()->getScene() ) );
}


sgsHandle< struct sgsOuzelTexture > sgsOuzelCamera::getRenderTarget()
{
	return GetObjHandle<sgsOuzelTexture>( Item()->getRenderTarget().get() );
}

void sgsOuzelCamera::setRenderTarget( sgsHandle< struct sgsOuzelTexture > rt )
{
	if( rt )
		Item()->setRenderTarget( rt->texture );
	else
		sgs_Msg( C, SGS_WARNING, "render target texture not specified" );
}


void sgsOuzelScene::addLayer( sgsOuzelLayer::Handle layer )
{
	Scene::addLayer( layer->Item() );
}

void sgsOuzelScene::removeLayer( sgsOuzelLayer::Handle layer )
{
	Scene::removeLayer( layer->Item() );
}


void sgsOuzelSceneManager::setOrRemoveScene( sgsOuzelScene::Handle scene )
{
	if( scene )
		setScene( scene );
	else
		sharedEngine->getSceneManager()->removeScene( sharedEngine->getSceneManager()->getScene() );
}


sgsHandle< struct sgsOuzelMenu > sgsOuzelWidget::getMenu()
{
	return GetObjHandle<sgsOuzelMenu>( Item()->getMenu() );
}

void sgsOuzelMenu::addWidget( sgsOuzelWidget::Handle widget )
{
	if( widget )
		Item()->addWidget( widget->Item() );
	else
		sgs_Msg( C, SGS_WARNING, "widget not specified" );
}

void sgsOuzelMenu::selectWidget( sgsOuzelWidget::Handle widget )
{
	if( widget )
		Item()->selectWidget( widget->Item() );
	else
		sgs_Msg( C, SGS_WARNING, "widget not specified" );
}


const char* PixelFormatNames[] =
{
	"DEFAULT",
	"A8_UNORM",
	"R8_UNORM",
	"R8_SNORM",
	"R8_UINT",
	"R8_SINT",
	"R16_UNORM",
	"R16_SNORM",
	"R16_UINT",
	"R16_SINT",
	"R16_FLOAT",
	"R32_UINT",
	"R32_SINT",
	"R32_FLOAT",
	"RG8_UNORM",
	"RG8_SNORM",
	"RG8_UINT",
	"RG8_SINT",
	"RGBA8_UNORM",
	"RGBA8_SNORM",
	"RGBA8_UINT",
	"RGBA8_SINT",
	"RGBA16_UNORM",
	"RGBA16_SNORM",
	"RGBA16_UINT",
	"RGBA16_SINT",
	"RGBA16_FLOAT",
	"RGBA32_UINT",
	"RGBA32_SINT",
	"RGBA32_FLOAT",
	NULL,
};
const int PixelFormatCount = sizeof( PixelFormatNames ) / sizeof( PixelFormatNames[0] ) - 1;

sgsOuzelTexture::~sgsOuzelTexture()
{
	g_PtrToSgsObj.erase( Item() );
	texture.reset();
}

bool sgsOuzelTexture::initWithSize( const Size2& newSize,
	uint32_t newFlags /* = 0 */,
	uint32_t newMipmaps /* = 0 */,
	uint32_t newSampleCount /* = 1 */,
	PixelFormat newPixelFormat /* = PixelFormat::RGBA8_UNORM */ )
{
	auto ssz = sgs_StackSize( C );
	return Item()->init(
		newSize,
		newFlags,
		newMipmaps,
		newSampleCount,
		ssz >= 5 ? newPixelFormat : PixelFormat::RGBA8_UNORM );
}

bool sgsOuzelTexture::initFromFile( const string& newFilename,
	uint32_t newFlags /* = 0 */,
	uint32_t newMipmaps /* = 0 */,
	PixelFormat newPixelFormat /* = PixelFormat::RGBA8_UNORM */ )
{
	auto ssz = sgs_StackSize( C );
	return Item()->init(
		newFilename,
		newFlags,
		newMipmaps,
		ssz >= 4 ? newPixelFormat : PixelFormat::RGBA8_UNORM );
}


void sgsOuzel::setAppAndDeveloperNames( const string& appName, const string& devName )
{
	APPLICATION_NAME = appName;
	DEVELOPER_NAME = devName;
}

void sgsOuzel::setScreenSaverEnabled( bool enabled )
{
	sharedEngine->setScreenSaverEnabled( enabled );
}


void sgsOuzel::addLanguage( const string& name, const string& filename )
{
	sharedEngine->getLocalization()->addLanguage( name, filename );
}

void sgsOuzel::setLanguage( const string& language )
{
	sharedEngine->getLocalization()->setLanguage( language );
}

string sgsOuzel::getString( const string& str )
{
	return sharedEngine->getLocalization()->getString( str );
}


sgsOuzelEventHandler::Handle sgsOuzel::createEventHandler( int priority )
{
	sgsVariable out( g_sgsCtx );
	SGS_CREATECLASS( g_sgsCtx, &out.var, sgsOuzelEventHandler, ( priority ) );
	return out.get_handle<sgsOuzelEventHandler>();
}

sgsOuzelUpdateCallback::Handle sgsOuzel::createUpdateCallback( int priority )
{
	sgsVariable out( g_sgsCtx );
	SGS_CREATECLASS( g_sgsCtx, &out.var, sgsOuzelUpdateCallback, ( priority ) );
	return out.get_handle<sgsOuzelUpdateCallback>();
}

sgsOuzelCursor::Handle sgsOuzel::createCursor()
{
	return CreateObj<sgsOuzelCursor>();
}


sgsOuzelSprite::Handle sgsOuzel::createSprite()
{
	auto h = CreateObj<sgsOuzelSprite>();
	h->obj = new Sprite;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelShapeRenderer::Handle sgsOuzel::createShapeRenderer()
{
	auto h = CreateObj<sgsOuzelShapeRenderer>();
	h->obj = new ShapeRenderer;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelParticleSystem::Handle sgsOuzel::createParticleSystem( const string& filename )
{
	auto h = CreateObj<sgsOuzelParticleSystem>();
	h->obj = sgs_StackSize( g_sgsCtx ) >= 1
		? new ParticleSystem( filename )
		: new ParticleSystem;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelAnimator::Handle sgsOuzel::createAnimator( float aLength )
{
	auto h = CreateObj<sgsOuzelAnimator>();
	h->obj = new Animator( aLength );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelMove::Handle sgsOuzel::createMove( float aLength, const Vector3& aPosition, bool aRelative )
{
	auto h = CreateObj<sgsOuzelMove>();
	h->obj = new Move( aLength, aPosition, aRelative );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelRotate::Handle sgsOuzel::createRotate( float aLength, const Vector3& aRotation, bool aRelative /* = false */ )
{
	auto h = CreateObj<sgsOuzelRotate>();
	h->obj = new Rotate( aLength, aRotation, aRelative );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelScale::Handle sgsOuzel::createScale( float aLength, const Vector3& aScale, bool aRelative /* = false */ )
{
	auto h = CreateObj<sgsOuzelScale>();
	h->obj = new Scale( aLength, aScale, aRelative );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelShake::Handle sgsOuzel::createShake( float aLength, const Vector3& aDistance, float aTimeScale )
{
	auto h = CreateObj<sgsOuzelShake>();
	h->obj = new Shake( aLength, aDistance, aTimeScale );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelFade::Handle sgsOuzel::createFade( float aLength, float aOpacity, bool aRelative /* = false */ )
{
	auto h = CreateObj<sgsOuzelFade>();
	h->obj = new Fade( aLength, aOpacity, aRelative );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelEase::Handle sgsOuzel::createEase( sgsOuzelAnimator::Handle animator, int aType, int aFunc )
{
	if( !animator )
	{
		sgs_Msg( g_sgsCtx, SGS_WARNING, "animator not specified" );
		return {};
	}
	
	auto h = CreateObj<sgsOuzelEase>();
	h->obj = new Ease( animator->Item(), Ease::Type(aType), Ease::Func(aFunc) );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelRepeat::Handle sgsOuzel::createRepeat( sgsOuzelAnimator::Handle animator, uint32_t aCount /* = 0 */ )
{
	if( !animator )
	{
		sgs_Msg( g_sgsCtx, SGS_WARNING, "animator not specified" );
		return {};
	}
	
	auto h = CreateObj<sgsOuzelRepeat>();
	h->obj = new Repeat( animator->Item(), aCount );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelParallel::Handle sgsOuzel::createParallel( sgsVariable animators )
{
	std::vector<Animator*> anims;
	sgsVarIterator it( animators );
	int i = 0;
	while( it.Advance() )
	{
		auto ah = it.GetValue().get_handle<sgsOuzelAnimator>();
		if( ah )
			anims.push_back( ah->Item() );
		else
		{
			sgs_Msg( g_sgsCtx, SGS_WARNING, "variable %d in iterator is not an animator", i );
			return {};
		}
		i++;
	}
	
	auto h = CreateObj<sgsOuzelParallel>();
	h->obj = new Parallel( anims );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelSequence::Handle sgsOuzel::createSequence( sgsVariable animators )
{
	std::vector<Animator*> anims;
	sgsVarIterator it( animators );
	int i = 0;
	while( it.Advance() )
	{
		auto ah = it.GetValue().get_handle<sgsOuzelAnimator>();
		if( ah )
			anims.push_back( ah->Item() );
		else
		{
			sgs_Msg( g_sgsCtx, SGS_WARNING, "variable %d in iterator is not an animator", i );
			return {};
		}
		i++;
	}
	
	auto h = CreateObj<sgsOuzelSequence>();
	h->obj = new Sequence( anims );
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}


sgsOuzelScene::Handle sgsOuzel::createScene()
{
	return CreateObj<sgsOuzelScene>();
}

sgsOuzelLayer::Handle sgsOuzel::createLayer()
{
	auto h = CreateObj<sgsOuzelLayer>();
	h->obj = new Layer;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelActor::Handle sgsOuzel::createActor()
{
	auto h = CreateObj<sgsOuzelActor>();
	h->obj = new Actor;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelCamera::Handle sgsOuzel::createCamera()
{
	auto h = CreateObj<sgsOuzelCamera>();
	h->obj = new Camera;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}


sgsOuzelMenu::Handle sgsOuzel::createMenu()
{
	auto h = CreateObj<sgsOuzelMenu>();
	h->obj = new Menu;
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelLabel::Handle sgsOuzel::createLabel(
	const string& aText,
	const string& fontFile,
	float fontSize /* = 1.0f */,
	Color color /* = Color::WHITE */,
	const Vector2& textAnchor /* = Vector2(0.5f, 0.5f) */,
	SGS_CTX )
{
	auto ssz = sgs_StackSize( C );
	auto h = CreateObj<sgsOuzelLabel>();
	h->obj = new Label(
		aText,
		fontFile,
		ssz >= 3 ? fontSize : 1.0f,
		ssz >= 4 ? color : Color::WHITE,
		ssz >= 5 ? textAnchor : Vector2(0.5f,0.5f)
	);
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelButton::Handle sgsOuzel::createButton(
	const string& normalImage,
	const string& selectedImage,
	const string& pressedImage,
	const string& disabledImage,
	const string& label /* = "" */,
	const string& font /* = "" */,
	float fontSize /* = 1.0f */,
	const Color& aLabelColor /* = Color::WHITE */,
	const Color& aLabelSelectedColor /* = Color::WHITE */,
	const Color& aLabelPressedColor /* = Color::WHITE */,
	const Color& aLabelDisabledColor /* = Color::WHITE */,
	SGS_CTX )
{
	auto ssz = sgs_StackSize( C );
	auto h = CreateObj<sgsOuzelButton>();
	h->obj = new Button(
		normalImage,
		selectedImage,
		pressedImage,
		disabledImage,
		label,
		font,
		ssz >= 7 ? fontSize : 1.0f,
		ssz >= 8 ? aLabelColor : Color::WHITE,
		ssz >= 9 ? aLabelSelectedColor : Color::WHITE,
		ssz >= 10 ? aLabelPressedColor : Color::WHITE,
		ssz >= 11 ? aLabelDisabledColor : Color::WHITE
	);
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}

sgsOuzelCheckBox::Handle sgsOuzel::createCheckBox(
	const string& normalImage,
	const string& selectedImage,
	const string& pressedImage,
	const string& disabledImage,
	const string& tickImage )
{
	auto h = CreateObj<sgsOuzelCheckBox>();
	h->obj = new CheckBox(
		normalImage,
		selectedImage,
		pressedImage,
		disabledImage,
		tickImage
	);
	g_PtrToSgsObj.insert({ h->obj, h.get() });
	return h;
}


sgsOuzelSound::Handle sgsOuzel::createSound()
{
	return CreateObj<sgsOuzelSound>();
}


sgsOuzelTexture::Handle sgsOuzel::createTexture()
{
	auto h = CreateObj<sgsOuzelTexture>();
	h->texture.reset( new Texture );
	g_PtrToSgsObj.insert({ h->Item(), h.get() });
	return h;
}


#define RICET( x ) { #x, sgs_Int(Event::Type::x) },
static sgs_RegIntConst g_EventTypesRIC[] =
{
	RICET( KEY_PRESS )
	RICET( KEY_RELEASE )
	RICET( KEY_REPEAT )
	RICET( MOUSE_PRESS )
	RICET( MOUSE_RELEASE )
	RICET( MOUSE_SCROLL )
	RICET( MOUSE_MOVE )
	RICET( TOUCH_BEGIN )
	RICET( TOUCH_MOVE )
	RICET( TOUCH_END )
	RICET( TOUCH_CANCEL )
	RICET( GAMEPAD_CONNECT )
	RICET( GAMEPAD_DISCONNECT )
	RICET( GAMEPAD_BUTTON_CHANGE )
	RICET( WINDOW_SIZE_CHANGE )
	RICET( WINDOW_TITLE_CHANGE )
	RICET( WINDOW_FULLSCREEN_CHANGE )
	RICET( WINDOW_CONTENT_SCALE_CHANGE )
	RICET( WINDOW_SCREEN_CHANGE )
	RICET( ENGINE_START )
	RICET( ENGINE_STOP )
	RICET( ENGINE_RESUME )
	RICET( ENGINE_PAUSE )
	RICET( ORIENTATION_CHANGE )
	RICET( LOW_MEMORY )
	RICET( OPEN_FILE )
	RICET( ACTOR_ENTER )
	RICET( ACTOR_LEAVE )
	RICET( ACTOR_PRESS )
	RICET( ACTOR_RELEASE )
	RICET( ACTOR_CLICK )
	RICET( ACTOR_DRAG )
	RICET( WIDGET_CHANGE )
	RICET( ANIMATION_START )
	RICET( ANIMATION_RESET )
	RICET( ANIMATION_FINISH )
	RICET( SOUND_START )
	RICET( SOUND_RESET )
	RICET( SOUND_FINISH )
	RICET( USER )
	{ NULL, 0 },
};

#define RIC( x ) { #x, x },
static sgs_RegIntConst g_ModifiersRIC[] =
{
	RIC( SHIFT_DOWN )
	RIC( ALT_DOWN )
	RIC( CONTROL_DOWN )
	RIC( SUPER_DOWN )
	RIC( FUNCTION_DOWN )
	RIC( LEFT_MOUSE_DOWN )
	RIC( RIGHT_MOUSE_DOWN )
	RIC( MIDDLE_MOUSE_DOWN )
	{ NULL, 0 },
};
#define RICKK( x ) { #x, sgs_Int(KeyboardKey::x) },
static sgs_RegIntConst g_KeyboardKeysRIC[] =
{
	RICKK( NONE )
	RICKK( CANCEL )
	RICKK( BACKSPACE )
	RICKK( TAB )
	RICKK( CLEAR )
	RICKK( RETURN )
	RICKK( PAUSE )
	RICKK( CAPITAL )
	RICKK( KANA )
	RICKK( HANGUEL )
	RICKK( HANGUL )
	RICKK( JUNJA )
	RICKK( FINAL )
	RICKK( HANJA )
	RICKK( KANJI )
	RICKK( ESCAPE )
	RICKK( CONVERT )
	RICKK( NONCONVERT )
	RICKK( ACCEPT )
	RICKK( MODECHANGE )
	RICKK( SPACE )
	RICKK( PRIOR )
	RICKK( NEXT )
	RICKK( END )
	RICKK( HOME )
	RICKK( LEFT )
	RICKK( UP )
	RICKK( RIGHT )
	RICKK( DOWN )
	RICKK( SELECT )
	RICKK( PRINT )
	RICKK( EXECUTE )
	RICKK( SNAPSHOT )
	RICKK( INSERT )
	RICKK( DEL )
	RICKK( EQUAL )
	RICKK( HELP )
	RICKK( NUM_0 )
	RICKK( NUM_1 )
	RICKK( NUM_2 )
	RICKK( NUM_3 )
	RICKK( NUM_4 )
	RICKK( NUM_5 )
	RICKK( NUM_6 )
	RICKK( NUM_7 )
	RICKK( NUM_8 )
	RICKK( NUM_9 )
	RICKK( A )
	RICKK( B )
	RICKK( C )
	RICKK( D )
	RICKK( E )
	RICKK( F )
	RICKK( G )
	RICKK( H )
	RICKK( I )
	RICKK( J )
	RICKK( K )
	RICKK( L )
	RICKK( M )
	RICKK( N )
	RICKK( O )
	RICKK( P )
	RICKK( Q )
	RICKK( R )
	RICKK( S )
	RICKK( T )
	RICKK( U )
	RICKK( V )
	RICKK( W )
	RICKK( X )
	RICKK( Y )
	RICKK( Z )
	RICKK( LEFT_SUPER )
	RICKK( RIGHT_SUPER )
	RICKK( MENU )
	RICKK( SLEEP )
	RICKK( NUMPAD_0 )
	RICKK( NUMPAD_1 )
	RICKK( NUMPAD_2 )
	RICKK( NUMPAD_3 )
	RICKK( NUMPAD_4 )
	RICKK( NUMPAD_5 )
	RICKK( NUMPAD_6 )
	RICKK( NUMPAD_7 )
	RICKK( NUMPAD_8 )
	RICKK( NUMPAD_9 )
	RICKK( MULTIPLY )
	RICKK( ADD )
	RICKK( SEPARATOR )
	RICKK( SUBTRACT )
	RICKK( DECIMAL )
	RICKK( DIVIDE )
	RICKK( F1 )
	RICKK( F2 )
	RICKK( F3 )
	RICKK( F4 )
	RICKK( F5 )
	RICKK( F6 )
	RICKK( F7 )
	RICKK( F8 )
	RICKK( F9 )
	RICKK( F10 )
	RICKK( F11 )
	RICKK( F12 )
	RICKK( F13 )
	RICKK( F14 )
	RICKK( F15 )
	RICKK( F16 )
	RICKK( F17 )
	RICKK( F18 )
	RICKK( F19 )
	RICKK( F20 )
	RICKK( F21 )
	RICKK( F22 )
	RICKK( F23 )
	RICKK( F24 )
	RICKK( NUMLOCK )
	RICKK( SCROLL )
	RICKK( LEFT_SHIFT )
	RICKK( RIGHT_SHIFT )
	RICKK( LEFT_CONTROL )
	RICKK( RIGHT_CONTROL )
	RICKK( LEFT_ALT )
	RICKK( RIGHT_ALT )
	RICKK( SEMICOLON )
	RICKK( PLUS )
	RICKK( COMMA )
	RICKK( MINUS )
	RICKK( PERIOD )
	RICKK( SLASH )
	RICKK( GRAVE )
	RICKK( LEFT_BRACKET )
	RICKK( BACKSLASH )
	RICKK( RIGHT_BRACKET )
	RICKK( QUOTE )
	RICKK( OEM_AX )
	RICKK( LESS )
	RICKK( ATTN )
	RICKK( CRSEL )
	RICKK( EXSEL )
	RICKK( EREOF )
	RICKK( PLAY )
	RICKK( ZOOM )
	RICKK( PA1 )
	RICKK( OEM_CLEAR )
	RICKK( KEY_COUNT )
	{ NULL, 0 },
};
#define RICMB( x ) { #x, sgs_Int(MouseButton::x) },
static sgs_RegIntConst g_MouseButtonsRIC[] =
{
	RICMB( NONE )
	RICMB( LEFT )
	RICMB( RIGHT )
	RICMB( MIDDLE )
	RICMB( X1 )
	RICMB( X2 )
	RICMB( BUTTON_COUNT )
	{ NULL, 0 },
};
#define RICGB( x ) { #x, sgs_Int(GamepadButton::x) },
static sgs_RegIntConst g_GamepadButtonsRIC[] =
{
	RICGB( NONE )
	RICGB( DPAD_LEFT )
	RICGB( DPAD_RIGHT )
	RICGB( DPAD_UP )
	RICGB( DPAD_DOWN )
	RICGB( FACE_BOTTOM )
	RICGB( FACE_RIGHT )
	RICGB( FACE_LEFT )
	RICGB( FACE_TOP )
	RICGB( LEFT_SHOULDER )
	RICGB( LEFT_TRIGGER )
	RICGB( RIGHT_SHOULDER )
	RICGB( RIGHT_TRIGGER )
	RICGB( LEFT_THUMB )
	RICGB( RIGHT_THUMB )
	RICGB( START )
	RICGB( BACK )
	RICGB( PAUSE )
	RICGB( LEFT_THUMB_LEFT )
	RICGB( LEFT_THUMB_RIGHT )
	RICGB( LEFT_THUMB_UP )
	RICGB( LEFT_THUMB_DOWN )
	RICGB( RIGHT_THUMB_LEFT )
	RICGB( RIGHT_THUMB_RIGHT )
	RICGB( RIGHT_THUMB_UP )
	RICGB( RIGHT_THUMB_DOWN )
	RICGB( BUTTON_COUNT )
	{ NULL, 0 },
};
#define RICCT( x ) { #x, sgs_Int(Camera::Type::x) },
static sgs_RegIntConst g_CameraTypesRIC[] =
{
	RICCT( CUSTOM )
	RICCT( ORTHOGRAPHIC )
	RICCT( PERSPECTIVE )
	{ NULL, 0 },
};
#define RICCSM( x ) { #x, sgs_Int(Camera::ScaleMode::x) },
static sgs_RegIntConst g_CameraScaleModesRIC[] =
{
	RICCSM( NONE )
	RICCSM( EXACT_FIT )
	RICCSM( NO_BORDER )
	RICCSM( SHOW_ALL )
	{ NULL, 0 },
};
#define RICEaT( x ) { #x, sgs_Int(Ease::Type::x) },
static sgs_RegIntConst g_EaseTypesRIC[] =
{
	RICEaT( IN )
	RICEaT( OUT )
	RICEaT( INOUT )
	{ NULL, 0 },
};
#define RICEaF( x ) { #x, sgs_Int(Ease::Func::x) },
static sgs_RegIntConst g_EaseFuncsRIC[] =
{
	RICEaF( SINE )
	RICEaF( QUAD )
	RICEaF( CUBIC )
	RICEaF( QUART )
	RICEaF( QUINT )
	RICEaF( EXPO )
	RICEaF( CIRC )
	RICEaF( BACK )
	RICEaF( ELASTIC )
	RICEaF( BOUNCE )
	{ NULL, 0 },
};
#define RICTF( x ) { #x, Texture::x },
static sgs_RegIntConst g_TextureFlagsRIC[] =
{
	RICTF( DYNAMIC )
	RICTF( RENDER_TARGET )
	RICTF( DEPTH_BUFFER )
	{ NULL, 0 },
};


SGSRESULT sgsOuzelFSFunc( void* userdata, SGS_CTX, int op, sgs_ScriptFSData* data )
{
	auto* fs = sharedEngine->getFileSystem();
	std::vector<uint8_t> outdata;
	switch( op )
	{
	case SGS_SFS_FILE_EXISTS:
		return fs->fileExists( data->filename ) ? SGS_SUCCESS : SGS_ENOTFND;
	case SGS_SFS_FILE_OPEN:
		if( fs->readFile( data->filename, outdata ) )
		{
			data->userhandle = new uint8_t[ outdata.size() ];
			memcpy( data->userhandle, outdata.data(), outdata.size() );
			data->size = outdata.size();
			return SGS_SUCCESS;
		}
		return SGS_ENOTFND;
	case SGS_SFS_FILE_READ:
		memcpy( data->output, data->userhandle, data->size );
		return SGS_SUCCESS;
	case SGS_SFS_FILE_CLOSE:
		delete [] (uint8_t*) data->userhandle;
		data->userhandle = nullptr;
		return SGS_SUCCESS;
	}
	return SGS_ENOTSUP;
}


void ouzelMain( const vector<string>& args )
{
	Log( Log::Level::INFO ) << "[sgs-ouzel] Starting SGScript";
	g_sgsCtx = sgs_CreateEngine();
	
#ifdef __ANDROID__
	sgs_SetScriptFSFunc( g_sgsCtx, sgsOuzelFSFunc, nullptr );
#endif
	
	Log( Log::Level::INFO ) << "[sgs-ouzel] Initializing bindings";
	sgs_LoadLib_Fmt( g_sgsCtx );
	sgs_LoadLib_IO( g_sgsCtx );
	sgs_LoadLib_Math( g_sgsCtx );
	sgs_LoadLib_OS( g_sgsCtx );
	sgs_LoadLib_RE( g_sgsCtx );
	sgs_LoadLib_String( g_sgsCtx );
	sgs_xgm_module_entry_point( g_sgsCtx );
	
	sgsVariable ouzel = sgs_GetClassInterface< sgsOuzel >( g_sgsCtx );
	sgsEnv( g_sgsCtx ).setprop( "ouzel", ouzel );
	
	ouzel.setprop( "Color", CreateObj<sgsOuzelColor>() );
	
	ouzel.setprop( "Input", CreateObj<sgsOuzelInput>() );
	
	sgs_StoreIntConsts( g_sgsCtx, ouzel.var, g_ModifiersRIC, -1 );
	sgsVariable input;
	input.create_dict( g_sgsCtx );
	ouzel.setprop( "input", input );
	
	sgsVariable EventType;
	EventType.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, EventType.var, g_EventTypesRIC, -1 );
	ouzel.setprop( "EventType", EventType );
	
	sgsVariable KeyboardKey;
	KeyboardKey.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, KeyboardKey.var, g_KeyboardKeysRIC, -1 );
	input.setprop( "KeyboardKey", KeyboardKey );
	
	sgsVariable MouseButton;
	MouseButton.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, MouseButton.var, g_MouseButtonsRIC, -1 );
	input.setprop( "MouseButton", MouseButton );
	
	sgsVariable GamepadButton;
	GamepadButton.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, GamepadButton.var, g_GamepadButtonsRIC, -1 );
	input.setprop( "GamepadButton", GamepadButton );
	
//	sgsVariable ouzel_scene;
//	ouzel_scene.create_dict( g_sgsCtx );
//	ouzel.setprop( "scene", ouzel_scene );
	
	sgsVariable CameraType;
	CameraType.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, CameraType.var, g_CameraTypesRIC, -1 );
	ouzel.setprop( "CameraType", CameraType );
	
	sgsVariable CameraScaleMode;
	CameraScaleMode.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, CameraScaleMode.var, g_CameraScaleModesRIC, -1 );
	ouzel.setprop( "CameraScaleMode", CameraScaleMode );
	
	sgsVariable EaseType;
	EaseType.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, EaseType.var, g_EaseTypesRIC, -1 );
	ouzel.setprop( "EaseType", EaseType );
	
	sgsVariable EaseFunc;
	EaseFunc.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, EaseFunc.var, g_EaseFuncsRIC, -1 );
	ouzel.setprop( "EaseFunc", EaseFunc );
	
	sgsVariable ouzel_window = CreateObj<sgsOuzelWindow>();
	ouzel.setprop( "window", ouzel_window );
	
	sgsVariable ouzel_fileSys = CreateObj<sgsOuzelFileSystem>();
	ouzel.setprop( "fileSystem", ouzel_fileSys );
	
	sgsVariable TextureFlags;
	TextureFlags.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, TextureFlags.var, g_TextureFlagsRIC, -1 );
	ouzel.setprop( "TextureFlags", TextureFlags );
	
	sgsVariable ouzel_renderer = CreateObj<sgsOuzelRenderer>();
	ouzel.setprop( "renderer", ouzel_renderer );
	
	sgsVariable ouzel_sceneMgr = CreateObj<sgsOuzelSceneManager>();
	ouzel.setprop( "sceneManager", ouzel_sceneMgr );
	
	for( const string& arg : args )
		sgs_PushVar( g_sgsCtx, arg );
	sgsVariable sgs_args;
	sgs_args.create_array( g_sgsCtx, args.size() );
	sgsEnv( g_sgsCtx ).setprop( "args", sgs_args );
	
	Log( Log::Level::INFO ) << "[sgs-ouzel] Loading 'main'";
	sgs_Include( g_sgsCtx, "main" );
}
