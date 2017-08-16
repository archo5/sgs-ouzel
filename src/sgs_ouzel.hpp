
#define SGS_CPPBC_WITH_STD_STRING 1
#define SGS_CPPBC_WITH_STD_VECTOR 1

#include "../sgscript/ext/sgs_cppbc.h"
#include "ouzel.hpp"

using namespace std;
using namespace ouzel;
using namespace scene;

struct sgsOuzelEvent : sgsObjectBase, Event
{
	SGS_OBJECT;
	
	typedef sgsHandle< sgsOuzelEvent > Handle;
	
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
	
	SGS_PROPFN( READ ) sgsOuzelEvent::Handle currentEvent;
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
};
