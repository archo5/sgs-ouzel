
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
using namespace gui;


// math types

template<> inline void sgs_PushVar( SGS_CTX, const Vector2& v ){ sgs_CreateVec2( C, nullptr, v.x, v.y ); }
template<> struct sgs_GetVar<Vector2> { Vector2 operator () ( SGS_CTX, sgs_StkIdx item ){
	float vtmp[3] = {0.0f}; sgs_ParseVec2( C, item, vtmp, 0 ); return Vector2( vtmp[0], vtmp[1] ); }};
template<> inline sgsString sgs_DumpData<Vector2>( SGS_CTX, const Vector2& var, int depth ){ char bfr[ 128 ] = {0};
	snprintf( bfr, 127, "Vector2(%g;%g)", var.x, var.y ); return sgsString( C, bfr ); }

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
	SGS_PROPFN( READ SOURCE difference.x ) SGS_ALIAS( float differenceX );
	SGS_PROPFN( READ SOURCE difference.y ) SGS_ALIAS( float differenceY );
	SGS_PROPFN( READ SOURCE position.x ) SGS_ALIAS( float positionX );
	SGS_PROPFN( READ SOURCE position.y ) SGS_ALIAS( float positionY );
};

struct sgsOuzelEventHandler : sgsObjectBase, EventHandler
{
	SGS_OBJECT;
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
};


// SCENE

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
	
	SGS_PROPFN( READ Item()->getOrder WRITE Item()->setOrder ) SGS_ALIAS( int32_t order );
	SGS_PROPFN( READ Item()->getWorldOrder ) SGS_ALIAS( int32_t worldOrder );
	
	SGS_PROPFN( READ Item()->getOpacity WRITE Item()->setOpacity ) SGS_ALIAS( float opacity );
	SGS_PROPFN( READ Item()->getFlipX WRITE Item()->setFlipX ) SGS_ALIAS( bool flipX );
	SGS_PROPFN( READ Item()->getFlipY WRITE Item()->setFlipY ) SGS_ALIAS( bool flipY );
	SGS_PROPFN( READ Item()->isPickable WRITE Item()->setPickable ) SGS_ALIAS( bool pickable );
	SGS_PROPFN( READ Item()->isCullDisabled WRITE Item()->setCullDisabled ) SGS_ALIAS( bool cullDisabled );
	SGS_PROPFN( READ Item()->isHidden WRITE Item()->setHidden ) SGS_ALIAS( bool hidden );
	SGS_PROPFN( READ Item()->isWorldHidden ) SGS_ALIAS( bool worldHidden );
	
	sgsOuzelNodeContainer::Handle getParent();
	SGS_PROPFN( READ getParent ) SGS_ALIAS( sgsOuzelNodeContainer::Handle parent );
	SGS_NODUMP( parent );
	
	SGS_METHOD void removeFromParent();
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
	
	SGS_METHOD void addWidget( sgsOuzelWidget::Handle widget ){ Item()->addWidget( widget->Item() ); }
	SGS_METHOD void selectWidget( sgsOuzelWidget::Handle widget ){ Item()->selectWidget( widget->Item() ); }
	SGS_METHOD void selectNextWidget(){ Item()->selectNextWidget(); }
	SGS_METHOD void selectPreviousWidget(){ Item()->selectPreviousWidget(); }
};


// RENDERING

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
	
	SGS_METHOD void addResourcePath( const std::string& path ){ sharedEngine->getFileSystem()->addResourcePath( path ); }
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
	
	SGS_STATICMETHOD void exit();
	SGS_STATICMETHOD void setAppAndDeveloperNames( const string& appName, const string& devName );
	SGS_STATICMETHOD void setScreenSaverEnabled( bool enabled );
	
	SGS_STATICMETHOD sgsOuzelEventHandler::Handle createEventHandler( int priority );
	
	SGS_STATICMETHOD sgsOuzelScene::Handle createScene();
	SGS_STATICMETHOD sgsOuzelLayer::Handle createLayer();
	SGS_STATICMETHOD sgsOuzelNode::Handle createNode();
	SGS_STATICMETHOD sgsOuzelCamera::Handle createCamera();
	
	SGS_STATICMETHOD sgsOuzelMenu::Handle createMenu();
};
