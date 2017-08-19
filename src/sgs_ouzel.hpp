
#pragma once

#define SGS_CPPBC_WITH_STD_STRING 1
#define SGS_CPPBC_WITH_STD_VECTOR 1

#include "../sgscript/ext/sgs_cppbc.h"
#include "../sgscript/ext/sgsxgmath.h"
#include "ouzel.hpp"

using namespace std;
using namespace ouzel;
using namespace input;
using namespace scene;
using namespace graphics;
using namespace gui;


// math types

template<> inline void sgs_PushVar( SGS_CTX, const Vector2& v ){ sgs_CreateVec2( C, nullptr, v.x, v.y ); }
template<> struct sgs_GetVar<Vector2> { Vector2 operator () ( SGS_CTX, sgs_StkIdx item ){
	float vtmp[3] = {0.0f}; sgs_ParseVec2( C, item, vtmp, 0 ); return Vector2( vtmp[0], vtmp[1] ); }};
template<> inline sgsString sgs_DumpData<Vector2>( SGS_CTX, const Vector2& var, int depth ){ char bfr[ 128 ] = {0};
	snprintf( bfr, 127, "Vector2(%g;%g)", var.x, var.y ); return sgsString( C, bfr ); }

template<> inline void sgs_PushVar( SGS_CTX, const Size2& v ){ sgs_CreateVec2( C, nullptr, v.width, v.height ); }
template<> struct sgs_GetVar<Size2> { Size2 operator () ( SGS_CTX, sgs_StkIdx item ){
	float vtmp[3] = {0.0f}; sgs_ParseVec2( C, item, vtmp, 0 ); return Size2( vtmp[0], vtmp[1] ); }};
template<> inline sgsString sgs_DumpData<Size2>( SGS_CTX, const Size2& var, int depth ){ char bfr[ 128 ] = {0};
	snprintf( bfr, 127, "Size2(%g;%g)", var.width, var.height ); return sgsString( C, bfr ); }

template<> inline void sgs_PushVar( SGS_CTX, const Vector3& v ){ sgs_CreateVec3( C, nullptr, v.x, v.y, v.z ); }
template<> struct sgs_GetVar<Vector3> { Vector3 operator () ( SGS_CTX, sgs_StkIdx item ){
	float vtmp[3] = {0.0f}; sgs_ParseVec3( C, item, vtmp, 0 ); return Vector3( vtmp[0], vtmp[1], vtmp[2] ); }};
template<> inline sgsString sgs_DumpData<Vector3>( SGS_CTX, const Vector3& var, int depth ){ char bfr[ 128 ] = {0};
	snprintf( bfr, 127, "Vector3(%g;%g;%g)", var.x, var.y, var.z ); return sgsString( C, bfr ); }

template<> inline void sgs_PushVar( SGS_CTX, const Color& v ){ sgs_CreateColor( C, nullptr, v.normR(), v.normG(), v.normB(), v.normA() ); }
template<> struct sgs_GetVar<Color> { Color operator () ( SGS_CTX, sgs_StkIdx item ){
	float vtmp[4] = {0.0f}; sgs_ParseColor( C, item, vtmp, 0 ); return Color( Vector4( vtmp[0], vtmp[1], vtmp[2], vtmp[3] ) ); }};
template<> inline sgsString sgs_DumpData<Color>( SGS_CTX, const Color& var, int depth ){ char bfr[ 192 ] = {0};
	snprintf( bfr, 191, "Color(%u;%u;%u;%u)", var.r, var.g, var.b, var.a ); return sgsString( C, bfr ); }

template<> inline void sgs_PushVar( SGS_CTX, const Rectangle& v ){ sgs_CreateAABB2( C, nullptr, v.position.x, v.position.y, v.position.x + v.size.width, v.position.y + v.size.height ); }
template<> struct sgs_GetVar<Rectangle> { Rectangle operator () ( SGS_CTX, sgs_StkIdx item ){
	float vtmp[4] = {0.0f}; sgs_ParseAABB2( C, item, vtmp ); return Rectangle( vtmp[0], vtmp[1], vtmp[2] - vtmp[0], vtmp[3] - vtmp[1] ); }};
template<> inline sgsString sgs_DumpData<Rectangle>( SGS_CTX, const Rectangle& var, int depth ){ char bfr[ 192 ] = {0};
	snprintf( bfr, 191, "Rectangle(pos=%f;%f size=%f;%f)", var.position.x, var.position.y, var.size.width, var.size.height ); return sgsString( C, bfr ); }


// CORE

struct sgsOuzelDisposable : sgsObjectBase
{
	SGS_OBJECT;
	
	virtual ~sgsOuzelDisposable(){}
	SGS_METHOD void dispose();
};

struct sgsOuzelColor : sgsObjectBase
{
	SGS_OBJECT;
	
	SGS_IFUNC( call ) int call( sgs_Context* callerCtx, sgs_VarObj* obj );
	
	SGS_PROPFN( READ SOURCE Color(Color::BLACK)   ) SGS_ALIAS( Color BLACK   );
	SGS_PROPFN( READ SOURCE Color(Color::RED)     ) SGS_ALIAS( Color RED     );
	SGS_PROPFN( READ SOURCE Color(Color::MAGENTA) ) SGS_ALIAS( Color MAGENTA );
	SGS_PROPFN( READ SOURCE Color(Color::GREEN)   ) SGS_ALIAS( Color GREEN   );
	SGS_PROPFN( READ SOURCE Color(Color::CYAN)    ) SGS_ALIAS( Color CYAN    );
	SGS_PROPFN( READ SOURCE Color(Color::BLUE)    ) SGS_ALIAS( Color BLUE    );
	SGS_PROPFN( READ SOURCE Color(Color::YELLOW)  ) SGS_ALIAS( Color YELLOW  );
	SGS_PROPFN( READ SOURCE Color(Color::WHITE)   ) SGS_ALIAS( Color WHITE   );
	SGS_PROPFN( READ SOURCE Color(Color::GRAY)    ) SGS_ALIAS( Color GRAY    );
};


// INPUT

struct sgsOuzelKeyboardEvent : sgsObjectBase, KeyboardEvent
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelKeyboardEvent > Handle;
	
	SGS_PROPFN( READ ) SGS_ALIAS( uint32_t modifiers );
	int getKey() const { return (int) key; }
	SGS_PROPFN( READ getKey ) SGS_ALIAS( int key );
};

struct sgsOuzelMouseEvent : sgsObjectBase, MouseEvent
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelMouseEvent > Handle;
	
	SGS_PROPFN( READ ) SGS_ALIAS( uint32_t modifiers );
	int getButton() const { return (int) button; }
	SGS_PROPFN( READ getButton ) SGS_ALIAS( int button );
	SGS_PROPFN( READ SOURCE difference ) SGS_ALIAS( Vector2 difference );
	SGS_PROPFN( READ SOURCE difference.x ) SGS_ALIAS( float differenceX );
	SGS_PROPFN( READ SOURCE difference.y ) SGS_ALIAS( float differenceY );
	SGS_PROPFN( READ SOURCE position ) SGS_ALIAS( Vector2 position );
	SGS_PROPFN( READ SOURCE position.x ) SGS_ALIAS( float positionX );
	SGS_PROPFN( READ SOURCE position.y ) SGS_ALIAS( float positionY );
	SGS_PROPFN( READ SOURCE scroll ) SGS_ALIAS( Vector2 scroll );
	SGS_PROPFN( READ SOURCE scroll.x ) SGS_ALIAS( float scrollX );
	SGS_PROPFN( READ SOURCE scroll.y ) SGS_ALIAS( float scrollY );
};

struct sgsOuzelTouchEvent : sgsObjectBase, TouchEvent
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelTouchEvent > Handle;
	
	SGS_PROPFN( READ ) SGS_ALIAS( uint64_t touchId );
	SGS_PROPFN( READ SOURCE difference ) SGS_ALIAS( Vector2 difference );
	SGS_PROPFN( READ SOURCE difference.x ) SGS_ALIAS( float differenceX );
	SGS_PROPFN( READ SOURCE difference.y ) SGS_ALIAS( float differenceY );
	SGS_PROPFN( READ SOURCE position ) SGS_ALIAS( Vector2 position );
	SGS_PROPFN( READ SOURCE position.x ) SGS_ALIAS( float positionX );
	SGS_PROPFN( READ SOURCE position.y ) SGS_ALIAS( float positionY );
};

struct sgsOuzelGamepadEvent : sgsObjectBase, GamepadEvent
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelGamepadEvent > Handle;
	
	// TODO gamepad
	int getButton() const { return (int) button; }
	SGS_PROPFN( READ getButton ) SGS_ALIAS( int button );
	SGS_PROPFN( READ SOURCE pressed ) SGS_ALIAS( bool pressed );
	SGS_PROPFN( READ SOURCE previousPressed ) SGS_ALIAS( bool previousPressed );
	SGS_PROPFN( READ SOURCE value ) SGS_ALIAS( float value );
	SGS_PROPFN( READ SOURCE previousValue ) SGS_ALIAS( float previousValue );
};

struct sgsOuzelUIEvent : sgsObjectBase, UIEvent
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelUIEvent > Handle;
	
	sgsHandle< struct sgsOuzelNode > getNode();
	SGS_PROPFN( READ getNode ) SGS_ALIAS( sgsHandle< struct sgsOuzelNode > node );
	SGS_PROPFN( READ ) SGS_ALIAS( uint64_t touchId );
	SGS_PROPFN( READ SOURCE difference ) SGS_ALIAS( Vector2 difference );
	SGS_PROPFN( READ SOURCE difference.x ) SGS_ALIAS( float differenceX );
	SGS_PROPFN( READ SOURCE difference.y ) SGS_ALIAS( float differenceY );
	SGS_PROPFN( READ SOURCE position ) SGS_ALIAS( Vector2 position );
	SGS_PROPFN( READ SOURCE position.x ) SGS_ALIAS( float positionX );
	SGS_PROPFN( READ SOURCE position.y ) SGS_ALIAS( float positionY );
	SGS_PROPFN( READ SOURCE localPosition ) SGS_ALIAS( Vector2 localPosition );
	SGS_PROPFN( READ SOURCE localPosition.x ) SGS_ALIAS( float localPositionX );
	SGS_PROPFN( READ SOURCE localPosition.y ) SGS_ALIAS( float localPositionY );
};

struct sgsOuzelEventHandler : sgsOuzelDisposable, EventHandler
{
	SGS_OBJECT_INHERIT( sgsOuzelDisposable );
	SGS_UNSERIALIZE_FUNC( unserialize );
	
	typedef sgsHandle< sgsOuzelEventHandler > Handle;
	Handle GetScriptHandle(){ return Handle( this ); }
	sgsVariable GetScriptVar(){ return GetScriptHandle().get_variable(); }
	
	sgsOuzelEventHandler( int priority );
	static int unserialize( SGS_CTX );
	bool handleKeyboard( Event::Type type, const KeyboardEvent& event );
	bool handleMouse( Event::Type type, const MouseEvent& event );
	bool handleTouch( Event::Type type, const TouchEvent& event );
	bool handleGamepad( Event::Type type, const GamepadEvent& event );
	bool handleUI( Event::Type type, const UIEvent& event );
	
	SGS_PROPERTY sgsVariable onKeyboardEvent;
	SGS_PROPERTY sgsVariable onMouseEvent;
	SGS_PROPERTY sgsVariable onTouchEvent;
	SGS_PROPERTY sgsVariable onGamepadEvent;
	SGS_PROPERTY sgsVariable onUIEvent;
	
	SGS_PROPFN( READ ) sgsOuzelKeyboardEvent::Handle lastKeyboardEvent;
	SGS_PROPFN( READ ) sgsOuzelMouseEvent::Handle lastMouseEvent;
	SGS_PROPFN( READ ) sgsOuzelTouchEvent::Handle lastTouchEvent;
	SGS_PROPFN( READ ) sgsOuzelGamepadEvent::Handle lastGamepadEvent;
	SGS_PROPFN( READ ) sgsOuzelUIEvent::Handle lastUIEvent;
};

struct sgsOuzelCursor : sgsObjectBase, Cursor
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelCursor > Handle;
	
	// TODO -- SGS_METHOD bool initSystemCursor( SystemCursor systemCursor );
	SGS_METHOD_NAMED( initFromFile ) SGS_ALIAS( bool init( const std::string& filename, const Vector2& hotSpot ) );
	// TODO initFromBytes
};

struct sgsOuzelInput : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelInput > Handle;
	
	SGS_METHOD void setCursor( sgsOuzelCursor::Handle cursor ){ sharedEngine->getInput()->setCursor( cursor ); }
	SGS_PROPFN(
		READ sharedEngine->getInput()->isCursorVisible
		WRITE sharedEngine->getInput()->setCursorVisible )
	SGS_ALIAS( bool cursorVisible );
	SGS_PROPFN(
		READ sharedEngine->getInput()->isCursorLocked
		WRITE sharedEngine->getInput()->setCursorLocked )
	SGS_ALIAS( bool cursorLocked );
	SGS_PROPFN(
		READ sharedEngine->getInput()->getCursorPosition
		WRITE sharedEngine->getInput()->setCursorPosition )
	SGS_ALIAS( Vector2 cursorPosition );
	
	SGS_METHOD void startGamepadDiscovery(){ sharedEngine->getInput()->startGamepadDiscovery(); }
	SGS_METHOD void stopGamepadDiscovery(){ sharedEngine->getInput()->stopGamepadDiscovery(); }
	
	SGS_METHOD bool isKeyboardKeyDown( int key ){ return sharedEngine->getInput()->isKeyboardKeyDown( KeyboardKey(key) ); }
	SGS_METHOD bool isMouseButtonDown( int btn ){ return sharedEngine->getInput()->isMouseButtonDown( MouseButton(btn) ); }
	
	// TODO ***
	
	SGS_METHOD bool showVirtualKeyboard(){ return sharedEngine->getInput()->showVirtualKeyboard(); }
	SGS_METHOD bool hideVirtualKeyboard(){ return sharedEngine->getInput()->hideVirtualKeyboard(); }
};


// SCENE

struct sgsOuzelComponent : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelComponent > Handle;
	Component* obj = nullptr;
	Component* Item(){ return obj; }
	
	~sgsOuzelComponent();
	SGS_PROPFN( READ Item()->getType ) SGS_ALIAS( uint32_t type );
	// TODO boundingBox
	SGS_METHOD bool pointOn( const Vector2& pos ){ return Item()->pointOn( pos ); }
	// TODO shapeOverlaps
	SGS_PROPFN( READ Item()->isHidden WRITE Item()->setHidden ) SGS_ALIAS( bool hidden );
	sgsHandle< struct sgsOuzelNode > getNode();
	SGS_PROPFN( READ getNode ) SGS_ALIAS( sgsHandle< struct sgsOuzelNode > node );
	SGS_METHOD void removeFromNode(){ Item()->removeFromNode(); }
};

struct sgsOuzelSprite : sgsOuzelComponent
{
	SGS_OBJECT_INHERIT( sgsOuzelComponent );
	
	typedef sgsHandle< sgsOuzelSprite > Handle;
	Sprite* Item(){ return static_cast<Sprite*>( obj ); }
	
	SGS_METHOD bool initFromFile( const string& filename, bool mipmaps /* = true */,
		uint32_t spritesX /* = 1 */, uint32_t spritesY /* = 1 */,
		const Vector2& pivot /* = Vector2(0.5f, 0.5f) */ );
	SGS_METHOD bool initFromTexture( sgsHandle< struct sgsOuzelTexture > newTexture,
		uint32_t spritesX /* = 1 */, uint32_t spritesY /* = 1 */,
		const Vector2& pivot /* = Vector2(0.5f, 0.5f) */ );
	
	SGS_PROPFN( READ Item()->getSize ) SGS_ALIAS( Size2 size );
	SGS_PROPFN( READ Item()->getOffset WRITE Item()->setOffset ) SGS_ALIAS( Vector2 offset );
	
	SGS_METHOD void play( bool repeat /* = true */, float newFrameInterval /* = 0.1f */ );
	SGS_METHOD void stop( bool resetAnimation /* = true */ );
	SGS_METHOD void reset(){ Item()->reset(); }
	SGS_PROPFN( READ Item()->isPlaying ) SGS_ALIAS( bool playing );
	
	// TODO getFrames
	SGS_PROPFN( WRITE Item()->setCurrentFrame ) SGS_ALIAS( uint32_t currentFrame );
};

struct sgsOuzelShapeRenderer : sgsOuzelComponent
{
	SGS_OBJECT_INHERIT( sgsOuzelComponent );
	
	typedef sgsHandle< sgsOuzelShapeRenderer > Handle;
	ShapeRenderer* Item(){ return static_cast<ShapeRenderer*>( obj ); }
	
	SGS_METHOD void clear(){ Item()->clear(); }
	SGS_METHOD bool line( const Vector2& start,
		const Vector2& finish,
		const Color& color,
		float thickness /* = 0.0f */ ){ return Item()->line( start, finish, color, thickness ); }
	SGS_METHOD bool circle( const Vector2& position,
		float radius,
		const Color& color,
		bool fill /* = false */,
		uint32_t segments /* = 16 */,
		float thickness /* = 0.0f */ );
	SGS_METHOD bool rectangle( const Rectangle& rectangle,
		const Color& color,
		bool fill /* = false */,
		float thickness /* = 0.0f */ ){ return Item()->rectangle( rectangle, color, fill, thickness ); }
	// TODO
	//SGS_METHOD bool polygon( const std::vector<Vector2>& edges,
	//	const Color& color,
	//	bool fill /* = false */,
	//	float thickness /* = 0.0f */ ){ return Item()->polygon( edges, color, fill, thickness ); }
	//SGS_METHOD bool curve( const std::vector<Vector2>& controlPoints,
	//	const Color& color,
	//	uint32_t segments /* = 16 */,
	//	float thickness /* = 0.0f */ );
};

struct sgsOuzelParticleSystem : sgsOuzelComponent
{
	SGS_OBJECT_INHERIT( sgsOuzelComponent );
	
	typedef sgsHandle< sgsOuzelParticleSystem > Handle;
	ParticleSystem* Item(){ return static_cast<ParticleSystem*>( obj ); }
	
	SGS_METHOD bool initFromFile( const string& filename ){ return Item()->init( filename ); }
	SGS_METHOD void resume(){ Item()->resume(); }
	SGS_METHOD void stop(){ Item()->stop(); }
	SGS_METHOD void reset(){ Item()->reset(); }
	
	SGS_PROPFN( READ Item()->isRunning ) SGS_ALIAS( bool running );
	SGS_PROPFN( READ Item()->isActive ) SGS_ALIAS( bool active );
	// TODO positionType
};

struct sgsOuzelAnimator : sgsOuzelComponent
{
	SGS_OBJECT_INHERIT( sgsOuzelComponent );
	
	typedef sgsHandle< sgsOuzelAnimator > Handle;
	Animator* Item(){ return static_cast<Animator*>( obj ); }
	
	SGS_METHOD void update( float delta ){ Item()->update( delta ); }
	SGS_METHOD void start(){ Item()->start(); }
	SGS_METHOD void play(){ Item()->play(); }
	SGS_METHOD void resume(){ Item()->resume(); }
	SGS_METHOD void stop( bool resetAnimation /* = false */ ){ Item()->stop( resetAnimation ); }
	SGS_METHOD void reset(){ Item()->reset(); }
	
	SGS_PROPFN( READ Item()->isRunning ) SGS_ALIAS( bool running );
	SGS_PROPFN( READ Item()->isDone ) SGS_ALIAS( bool done );
	SGS_PROPFN( READ Item()->getLength ) SGS_ALIAS( float length );
	SGS_PROPFN( READ Item()->getCurrentTime ) SGS_ALIAS( float currentTime );
	SGS_PROPFN( READ Item()->getProgress ) SGS_ALIAS( float progress );
	
	sgsHandle< struct sgsOuzelNode > getTargetNode();
	SGS_PROPFN( READ getTargetNode ) SGS_ALIAS( sgsHandle< struct sgsOuzelNode > targetNode );
	SGS_METHOD void addAnimator( sgsOuzelAnimator::Handle animator );
	SGS_METHOD void removeAnimator( sgsOuzelAnimator::Handle animator );
	SGS_METHOD void removeAllAnimators(){ Item()->removeAllAnimators(); }
	sgsOuzelAnimator::Handle getParent();
	SGS_PROPFN( READ getParent ) SGS_ALIAS( sgsOuzelAnimator::Handle parent );
	SGS_METHOD void removeFromParent(){ Item()->removeFromParent(); }
};

struct sgsOuzelMove : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelMove > Handle;
};

struct sgsOuzelRotate : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelRotate > Handle;
};

struct sgsOuzelScale : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelScale > Handle;
};

struct sgsOuzelShake : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelShake > Handle;
};

struct sgsOuzelFade : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelFade > Handle;
};

struct sgsOuzelEase : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelEase > Handle;
};

struct sgsOuzelRepeat : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelRepeat > Handle;
};

struct sgsOuzelParallel : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelParallel > Handle;
};

struct sgsOuzelSequence : sgsOuzelAnimator
{
	SGS_OBJECT_INHERIT( sgsOuzelAnimator );
	typedef sgsHandle< sgsOuzelSequence > Handle;
};

struct sgsOuzelNodeContainer : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelNodeContainer > Handle;
	NodeContainer* obj = nullptr;
	
	~sgsOuzelNodeContainer();
	SGS_METHOD void addChild( sgsHandle< struct sgsOuzelNode > node );
	SGS_METHOD bool removeChild( sgsHandle< struct sgsOuzelNode > node );
	SGS_METHOD bool moveChildToBack( sgsHandle< struct sgsOuzelNode > node );
	SGS_METHOD bool moveChildToFront( sgsHandle< struct sgsOuzelNode > node );
	SGS_METHOD void removeAllChildren();
	SGS_METHOD bool hasChild( sgsHandle< struct sgsOuzelNode > node, bool recursive /* = false */ );
	SGS_METHOD sgsVariable getChildren();
	
	SGS_METHOD sgsHandle< struct sgsOuzelLayer > getLayer();
	SGS_PROPFN( READ getLayer ) SGS_ALIAS( sgsHandle< struct sgsOuzelLayer > layer );
	SGS_NODUMP( layer );
};

struct sgsOuzelNode : sgsOuzelNodeContainer
{
	SGS_OBJECT_INHERIT( sgsOuzelNodeContainer );
	
	typedef sgsHandle< sgsOuzelNode > Handle;
	Node* Item(){ return static_cast<Node*>( obj ); }
	
	SGS_PROPFN( READ Item()->getPosition WRITE Item()->setPosition ) SGS_ALIAS( Vector3 position );
	SGS_PROPFN( READ Item()->getWorldPosition ) SGS_ALIAS( Vector3 worldPosition );
	
	SGS_PROPFN( READ Item()->getOrder WRITE Item()->setOrder ) SGS_ALIAS( int32_t order );
	SGS_PROPFN( READ Item()->getWorldOrder ) SGS_ALIAS( int32_t worldOrder );
	
	SGS_PROPFN( READ Item()->getScale WRITE Item()->setScale ) SGS_ALIAS( Vector3 scale );
	
	SGS_PROPFN( READ Item()->getOpacity WRITE Item()->setOpacity ) SGS_ALIAS( float opacity );
	SGS_PROPFN( READ Item()->getFlipX WRITE Item()->setFlipX ) SGS_ALIAS( bool flipX );
	SGS_PROPFN( READ Item()->getFlipY WRITE Item()->setFlipY ) SGS_ALIAS( bool flipY );
	SGS_PROPFN( READ Item()->isPickable WRITE Item()->setPickable ) SGS_ALIAS( bool pickable );
	SGS_PROPFN( READ Item()->isCullDisabled WRITE Item()->setCullDisabled ) SGS_ALIAS( bool cullDisabled );
	SGS_PROPFN( READ Item()->isHidden WRITE Item()->setHidden ) SGS_ALIAS( bool hidden );
	SGS_PROPFN( READ Item()->isWorldHidden ) SGS_ALIAS( bool worldHidden );
	
	SGS_METHOD bool pointOn( const Vector2& pos ){ return Item()->pointOn( pos ); }
	// TODO shapeOverlaps
	
	sgsOuzelNodeContainer::Handle getParent();
	SGS_PROPFN( READ getParent ) SGS_ALIAS( sgsOuzelNodeContainer::Handle parent );
	SGS_NODUMP( parent );
	SGS_METHOD void removeFromParent();
	
	SGS_METHOD void addComponent( sgsOuzelComponent::Handle component );
	SGS_METHOD void removeComponent( sgsOuzelComponent::Handle component );
	SGS_METHOD void removeAllComponents();
	SGS_METHOD sgsVariable getComponents( uint32_t type /* = <none> */ );
};

struct sgsOuzelLayer : sgsOuzelNodeContainer
{
	SGS_OBJECT_INHERIT( sgsOuzelNodeContainer );
	
	typedef sgsHandle< sgsOuzelLayer > Handle;
	Layer* Item(){ return static_cast<Layer*>( obj ); }
	
	SGS_METHOD sgsVariable getCameras();
	
	SGS_PROPFN( READ Item()->getOrder WRITE Item()->setOrder ) SGS_ALIAS( int32_t order );
	SGS_METHOD sgsHandle< struct sgsOuzelScene > getScene();
	SGS_PROPFN( READ getScene ) SGS_ALIAS( sgsHandle< struct sgsOuzelScene > scene );
	SGS_METHOD void removeFromScene(){ Item()->removeFromScene(); }
};

struct sgsOuzelCamera : sgsOuzelNode
{
	SGS_OBJECT_INHERIT( sgsOuzelNode );
	
	typedef sgsHandle< sgsOuzelCamera > Handle;
	Camera* Item(){ return static_cast<Camera*>( obj ); }
	
	int getType(){ return int(Item()->getType()); }
	void setType( int type ){ Item()->setType( Camera::Type(type) ); }
	SGS_PROPFN( READ getType WRITE setType ) SGS_ALIAS( int type );
	SGS_PROPFN( READ Item()->getFOV WRITE Item()->setFOV ) SGS_ALIAS( float FOV );
	SGS_PROPFN( READ Item()->getNearPlane WRITE Item()->setNearPlane ) SGS_ALIAS( float nearPlane );
	SGS_PROPFN( READ Item()->getFarPlane WRITE Item()->setFarPlane ) SGS_ALIAS( float farPlane );
	
	// TODO getProjection
	SGS_METHOD void recalculateProjection(){ Item()->recalculateProjection(); }
	// TODO get*Projection
	
	SGS_METHOD Vector3 convertNormalizedToWorld( const Vector2& np ){ return Item()->convertNormalizedToWorld( np ); }
	SGS_METHOD Vector2 convertWorldToNormalized( const Vector3& wp ){ return Item()->convertWorldToNormalized( wp ); }
	
	// TODO checkVisibility
	
	SGS_PROPFN( READ Item()->getViewport WRITE Item()->setViewport ) SGS_ALIAS( Rectangle viewport );
	SGS_PROPFN( READ Item()->getRenderViewport ) SGS_ALIAS( Rectangle renderViewport );
	
	int getScaleMode(){ return int(Item()->getScaleMode()); }
	void setScaleMode( int scaleMode ){ Item()->setScaleMode( Camera::ScaleMode(scaleMode) ); }
	SGS_PROPFN( READ getScaleMode WRITE setScaleMode ) SGS_ALIAS( int scaleMode );
	SGS_PROPFN( READ Item()->getTargetContentSize WRITE Item()->setTargetContentSize ) SGS_ALIAS( Size2 targetContentSize );
	
	SGS_PROPFN( READ Item()->getContentSize ) SGS_ALIAS( Size2 contentSize );
	SGS_PROPFN( READ Item()->getContentScale ) SGS_ALIAS( Vector2 contentScale );
	SGS_PROPFN( READ Item()->getContentPosition ) SGS_ALIAS( Vector2 contentPosition );
	
	sgsHandle< struct sgsOuzelTexture > getRenderTarget();
	void setRenderTarget( sgsHandle< struct sgsOuzelTexture > rt );
	SGS_PROPFN( READ getRenderTarget WRITE setRenderTarget ) SGS_ALIAS( sgsHandle< struct sgsOuzelTexture > renderTarget );
	
	SGS_PROPFN( READ Item()->getDepthWrite WRITE Item()->setDepthWrite ) SGS_ALIAS( bool depthWrite );
	SGS_PROPFN( READ Item()->getDepthTest WRITE Item()->setDepthTest ) SGS_ALIAS( bool depthTest );
	SGS_PROPFN( READ Item()->getWireframe WRITE Item()->setWireframe ) SGS_ALIAS( bool wireframe );
};

struct sgsOuzelScene : sgsObjectBase, Scene
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelScene > Handle;
	
	SGS_METHOD void addLayer( sgsOuzelLayer::Handle layer );
	SGS_METHOD void removeLayer( sgsOuzelLayer::Handle layer );
	SGS_METHOD SGS_ALIAS( void removeAllLayers() );
};

struct sgsOuzelSceneManager : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelSceneManager > Handle;
	
	SGS_METHOD sgsOuzelScene::Handle getScene(){ return sgsOuzelScene::Handle( static_cast<sgsOuzelScene*>( sharedEngine->getSceneManager()->getScene() ) ); }
	SGS_METHOD void setScene( sgsOuzelScene::Handle scene ){ sharedEngine->getSceneManager()->setScene( scene ); }
	SGS_METHOD void removeScene( sgsOuzelScene::Handle scene ){ sharedEngine->getSceneManager()->removeScene( scene ); }
	
	void setOrRemoveScene( sgsOuzelScene::Handle scene );
	SGS_PROPFN( READ getScene WRITE setOrRemoveScene ) SGS_ALIAS( sgsOuzelScene::Handle scene );
};


// [scene] GUI

struct sgsOuzelWidget : sgsOuzelNode
{
	SGS_OBJECT_INHERIT( sgsOuzelNode );
	
	typedef sgsHandle< sgsOuzelWidget > Handle;
	Widget* Item(){ return static_cast<Widget*>( obj ); }
	
	sgsHandle< struct sgsOuzelMenu > getMenu();
	SGS_PROPFN( READ getMenu ) SGS_ALIAS( sgsHandle< struct sgsOuzelMenu > menu );
	SGS_PROPFN( READ Item()->isEnabled WRITE Item()->setEnabled ) SGS_ALIAS( bool enabled );
	SGS_PROPFN( READ Item()->isSelected ) SGS_ALIAS( bool selected );
};

struct sgsOuzelMenu : sgsOuzelWidget
{
	SGS_OBJECT_INHERIT( sgsOuzelWidget );
	
	typedef sgsHandle< sgsOuzelMenu > Handle;
	Menu* Item(){ return static_cast<Menu*>( obj ); }
	
	SGS_METHOD void addWidget( sgsOuzelWidget::Handle widget );
	SGS_METHOD void selectWidget( sgsOuzelWidget::Handle widget );
	SGS_METHOD void selectNextWidget(){ Item()->selectNextWidget(); }
	SGS_METHOD void selectPreviousWidget(){ Item()->selectPreviousWidget(); }
};

struct sgsOuzelLabel : sgsOuzelWidget
{
	SGS_OBJECT_INHERIT( sgsOuzelWidget );
	
	typedef sgsHandle< sgsOuzelLabel > Handle;
	Label* Item(){ return static_cast<Label*>( obj ); }
	
	SGS_PROPFN( READ Item()->getText WRITE Item()->setText ) SGS_ALIAS( string text );
	// TODO getLabelDrawable
	SGS_PROPFN( READ Item()->getLabelDrawable()->getColor WRITE Item()->getLabelDrawable()->setColor ) SGS_ALIAS( Color color );
};

struct sgsOuzelButton : sgsOuzelWidget
{
	SGS_OBJECT_INHERIT( sgsOuzelWidget );
	
	typedef sgsHandle< sgsOuzelButton > Handle;
	Button* Item(){ return static_cast<Button*>( obj ); }
};

struct sgsOuzelCheckBox : sgsOuzelWidget
{
	SGS_OBJECT_INHERIT( sgsOuzelWidget );
	
	typedef sgsHandle< sgsOuzelCheckBox > Handle;
	CheckBox* Item(){ return static_cast<CheckBox*>( obj ); }
	
	SGS_PROPFN( READ Item()->isChecked WRITE Item()->setChecked ) SGS_ALIAS( bool checked );
};


// RENDERING

extern const char* PixelFormatNames[];
extern const int PixelFormatCount;

template<> inline void sgs_PushVar( SGS_CTX, const PixelFormat& v ){ sgs_PushInt( C, sgs_Int(v) ); }
template<> struct sgs_GetVar<PixelFormat> { PixelFormat operator () ( SGS_CTX, sgs_StkIdx item )
{
	if( sgs_ItemType( C, item ) == SGS_VT_INT )
		return PixelFormat( sgs_GetInt( C, item ) );
	if( sgs_ItemType( C, item ) == SGS_VT_STRING )
	{
		const char* str = sgs_GetStringPtr( C, item );
		const char** pfn = PixelFormatNames;
		while( *pfn )
		{
			if( strcmp( str, *pfn ) == 0 )
				return PixelFormat( int( pfn - PixelFormatNames ) );
			pfn++;
		}
	}
	return PixelFormat::DEFAULT;
}};
template<> inline sgsString sgs_DumpData<PixelFormat>( SGS_CTX, const PixelFormat& var, int depth )
{
	int i = int( var );
	char bfr[ 128 ] = {0};
	snprintf( bfr, 127, "PixelFormat(%s)", i >= 0 && i < PixelFormatCount ? PixelFormatNames[ i ] : "invalid" );
	return sgsString( C, bfr );
}

struct sgsOuzelTexture : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelTexture > Handle;
	
	std::shared_ptr<Texture> texture;
	Texture* Item(){ return texture.get(); }
	
	~sgsOuzelTexture();
	SGS_METHOD bool initWithSize( const Size2& newSize,
		uint32_t newFlags /* = 0 */,
		uint32_t newMipmaps /* = 0 */,
		uint32_t newSampleCount /* = 1 */,
		PixelFormat newPixelFormat /* = PixelFormat::RGBA8_UNORM */ );
	SGS_METHOD bool initFromFile( const string& newFilename,
		uint32_t newFlags /* = 0 */,
		uint32_t newMipmaps /* = 0 */,
		PixelFormat newPixelFormat /* = PixelFormat::RGBA8_UNORM */ );
	
	// TODO getResource
	SGS_PROPFN( READ Item()->getFilename ) SGS_ALIAS( string filename );
	SGS_PROPFN( READ Item()->getSize WRITE Item()->setSize ) SGS_ALIAS( Size2 size );
	// TODO setData
	SGS_PROPFN( READ Item()->getFlags ) SGS_ALIAS( uint32_t flags );
	SGS_PROPFN( READ Item()->getMipmaps ) SGS_ALIAS( uint32_t mipmaps );
	// TODO filter
	// TODO addressX
	// TODO addressY
	SGS_PROPFN( READ Item()->getMaxAnisotropy WRITE Item()->setMaxAnisotropy ) SGS_ALIAS( uint32_t maxAnisotropy );
	SGS_PROPFN( READ Item()->getSampleCount ) SGS_ALIAS( uint32_t sampleCount );
//	SGS_PROPFN( READ Item()->getDepth ) SGS_ALIAS( bool depth ); // TODO linker error
	SGS_PROPFN( READ Item()->getPixelFormat ) SGS_ALIAS( PixelFormat pixelFormat );
	SGS_PROPFN( READ Item()->getClearColorBuffer WRITE Item()->setClearColorBuffer ) SGS_ALIAS( bool clearColorBuffer );
	SGS_PROPFN( READ Item()->getClearDepthBuffer WRITE Item()->setClearDepthBuffer ) SGS_ALIAS( bool clearDepthBuffer );
	SGS_PROPFN( READ Item()->getClearColor WRITE Item()->setClearColor ) SGS_ALIAS( Color clearColor );
//	SGS_PROPFN( READ Item()->getClearDepth WRITE Item()->setClearDepth ) SGS_ALIAS( float clearDepth ); // TODO linker error
};

struct sgsOuzelRenderer : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelRenderer > Handle;
	
	static bool getClearColorBuffer(){ return sharedEngine->getRenderer()->getClearColorBuffer(); }
	static void setClearColorBuffer( bool v ){ sharedEngine->getRenderer()->setClearColorBuffer( v ); }
	SGS_PROPFN( READ getClearColorBuffer WRITE setClearColorBuffer ) SGS_ALIAS( bool clearColorBuffer );
	
	static bool getClearDepthBuffer(){ return sharedEngine->getRenderer()->getClearDepthBuffer(); }
	static void setClearDepthBuffer( bool v ){ sharedEngine->getRenderer()->setClearDepthBuffer( v ); }
	SGS_PROPFN( READ getClearDepthBuffer WRITE setClearDepthBuffer ) SGS_ALIAS( bool clearDepthBuffer );
	
	static Color getClearColor(){ return sharedEngine->getRenderer()->getClearColor(); }
	static void setClearColor( Color v ){ sharedEngine->getRenderer()->setClearColor( v ); }
	SGS_PROPFN( READ getClearColor WRITE setClearColor ) SGS_ALIAS( Color clearColor );
	
	static float getClearDepth(){ return sharedEngine->getRenderer()->getClearDepth(); }
	static void setClearDepth( float v ){ sharedEngine->getRenderer()->setClearDepth( v ); }
	SGS_PROPFN( READ getClearDepth WRITE setClearDepth ) SGS_ALIAS( float clearDepth );
};


// ENGINE

struct sgsOuzelFileSystem : sgsObjectBase
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelFileSystem > Handle;
	
	SGS_METHOD void addResourcePath( const string& path ){ sharedEngine->getFileSystem()->addResourcePath( path ); }
};

struct sgsOuzelWindow : sgsObjectBase
{
	SGS_OBJECT;
	
	static bool getFullscreen(){ return sharedEngine->getWindow()->isFullscreen(); }
	static void setFullscreen( bool fs ){ sharedEngine->getWindow()->setFullscreen( fs ); }
	SGS_PROPFN( READ getFullscreen WRITE setFullscreen ) SGS_ALIAS( bool fullscreen );
	
	static string getTitle(){ return sharedEngine->getWindow()->getTitle(); }
	static void setTitle( string title ){ sharedEngine->getWindow()->setTitle( title ); }
	SGS_PROPFN( READ getTitle WRITE setTitle ) SGS_ALIAS( string title );
};

struct sgsOuzel : sgsLiteObjectBase
{
	SGS_OBJECT_LITE;
	
	SGS_STATICMETHOD void exit(){ sharedEngine->exit(); }
	SGS_STATICMETHOD void setAppAndDeveloperNames( const string& appName, const string& devName );
	SGS_STATICMETHOD void setScreenSaverEnabled( bool enabled );
	SGS_STATICMETHOD bool openURL( const string& url ){ return sharedEngine->openURL( url ); }
	
	// Localization
	SGS_STATICMETHOD void addLanguage( const string& name, const string& filename );
	SGS_STATICMETHOD void setLanguage( const string& language );
	SGS_STATICMETHOD string getString( const string& str );
	
	SGS_STATICMETHOD sgsOuzelEventHandler::Handle createEventHandler( int priority );
	SGS_STATICMETHOD sgsOuzelCursor::Handle createCursor();
	
	SGS_STATICMETHOD sgsOuzelSprite::Handle createSprite();
	SGS_STATICMETHOD sgsOuzelShapeRenderer::Handle createShapeRenderer();
	SGS_STATICMETHOD sgsOuzelParticleSystem::Handle createParticleSystem( const string& filename );
	SGS_STATICMETHOD sgsOuzelAnimator::Handle createAnimator( float aLength );
	SGS_STATICMETHOD sgsOuzelMove::Handle createMove( float aLength, const Vector3& aPosition, bool aRelative /* = false */ );
	SGS_STATICMETHOD sgsOuzelRotate::Handle createRotate( float aLength, const Vector3& aRotation, bool aRelative /* = false */ );
	SGS_STATICMETHOD sgsOuzelScale::Handle createScale( float aLength, const Vector3& aScale, bool aRelative /* = false */ );
	SGS_STATICMETHOD sgsOuzelShake::Handle createShake( float aLength, const Vector3& aDistance, float aTimeScale );
	SGS_STATICMETHOD sgsOuzelFade::Handle createFade( float aLength, float aOpacity, bool aRelative /* = false */ );
	SGS_STATICMETHOD sgsOuzelEase::Handle createEase( sgsOuzelAnimator::Handle animator, int aType, int aFunc );
	SGS_STATICMETHOD sgsOuzelRepeat::Handle createRepeat( sgsOuzelAnimator::Handle animator, uint32_t aCount /* = 0 */ );
	SGS_STATICMETHOD sgsOuzelParallel::Handle createParallel( sgsVariable animators );
	SGS_STATICMETHOD sgsOuzelSequence::Handle createSequence( sgsVariable animators );
	
	SGS_STATICMETHOD sgsOuzelScene::Handle createScene();
	SGS_STATICMETHOD sgsOuzelLayer::Handle createLayer();
	SGS_STATICMETHOD sgsOuzelNode::Handle createNode();
	SGS_STATICMETHOD sgsOuzelCamera::Handle createCamera();
	
	SGS_STATICMETHOD sgsOuzelMenu::Handle createMenu();
	SGS_STATICMETHOD sgsOuzelLabel::Handle createLabel(
		const string& aText,
		const string& fontFile,
		float fontSize /* = 1.0f */,
		Color color /* = Color::WHITE */,
		const Vector2& textAnchor /* = Vector2(0.5f, 0.5f) */,
		SGS_CTX );
	SGS_STATICMETHOD sgsOuzelButton::Handle createButton(
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
		SGS_CTX );
	SGS_STATICMETHOD sgsOuzelCheckBox::Handle createCheckBox(
		const string& normalImage,
		const string& selectedImage,
		const string& pressedImage,
		const string& disabledImage,
		const string& tickImage );
	
	SGS_STATICMETHOD sgsOuzelTexture::Handle createTexture();
};
