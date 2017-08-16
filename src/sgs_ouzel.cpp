
#include "sgs_ouzel.hpp"
#ifdef _WIN32
#include "core/windows/main.cpp"
#endif


sgs_Context* g_sgsCtx;

string APPLICATION_NAME = "sgs-ouzel";
string DEVELOPER_NAME = "org.sgscript";



sgsOuzelEventHandler::sgsOuzelEventHandler( int priority ) : EventHandler( priority )
{
	keyboardHandler = bind( &sgsOuzelEventHandler::handleKeyboard, this, placeholders::_1, placeholders::_2 );
	mouseHandler = bind( &sgsOuzelEventHandler::handleMouse, this, placeholders::_1, placeholders::_2 );
	touchHandler = bind( &sgsOuzelEventHandler::handleTouch, this, placeholders::_1, placeholders::_2 );
	gamepadHandler = bind( &sgsOuzelEventHandler::handleGamepad, this, placeholders::_1, placeholders::_2 );
	uiHandler = bind( &sgsOuzelEventHandler::handleUI, this, placeholders::_1, placeholders::_2 );
	
	sgsVariable curEv;
	SGS_CREATECLASS( g_sgsCtx, &curEv.var, sgsOuzelEvent, () );
	currentEvent = curEv.get_handle<sgsOuzelEvent>();
	
	sharedEngine->getEventDispatcher()->addEventHandler( this );
}

int sgsOuzelEventHandler::unserialize( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelEventHandler, ( sgs_GetVar<int>()( C, 0 ) ) );
	return 1;
}

bool sgsOuzelEventHandler::handleKeyboard( Event::Type type, const KeyboardEvent& event )
{
	currentEvent->type = type;
	currentEvent->keyboardEvent = event;
	return onKeyboardEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onKeyboardEvent ) : false;
}

bool sgsOuzelEventHandler::handleMouse( Event::Type type, const MouseEvent& event )
{
	currentEvent->type = type;
	currentEvent->mouseEvent = event;
	return onMouseEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onMouseEvent ) : false;
}

bool sgsOuzelEventHandler::handleTouch( Event::Type type, const TouchEvent& event )
{
	currentEvent->type = type;
	currentEvent->touchEvent = event;
	return onTouchEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onTouchEvent ) : false;
}

bool sgsOuzelEventHandler::handleGamepad( Event::Type type, const GamepadEvent& event )
{
	currentEvent->type = type;
	currentEvent->gamepadEvent = event;
	return onGamepadEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onGamepadEvent ) : false;
}

bool sgsOuzelEventHandler::handleUI( Event::Type type, const UIEvent& event )
{
	currentEvent->type = type;
	currentEvent->uiEvent = event;
	return onUIEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onUIEvent ) : false;
}


void sgsOuzel::exit()
{
	sharedEngine->exit();
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


void ouzelMain( const vector<string>& args )
{
	Log( Log::Level::INFO ) << "[sgs-ouzel] Starting SGScript";
	g_sgsCtx = sgs_CreateEngine();
	
	Log( Log::Level::INFO ) << "[sgs-ouzel] Initializing bindings";
	auto o = sgs_GetClassInterface< sgsOuzel >( g_sgsCtx );
	sgsVariable ow( g_sgsCtx );
	SGS_CREATECLASS( g_sgsCtx, &ow.var, sgsOuzelWindow, () );
	o.setprop( "window", ow );
	sgsEnv( g_sgsCtx ).setprop( "ouzel", o );
	
	Log( Log::Level::INFO ) << "[sgs-ouzel] Loading 'main'";
	sgs_Include( g_sgsCtx, "main" );
}
