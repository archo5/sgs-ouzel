
#include "sgs_ouzel.hpp"


sgs_Context* g_sgsCtx;

string APPLICATION_NAME = "sgs-ouzel";
string DEVELOPER_NAME = "org.sgscript";


template< class T > sgsHandle<T> CreateObj()
{
	sgsVariable v;
	SGS_CREATECLASS( g_sgsCtx, &v.var, T, () );
	return v.get_handle<T>();
}


sgsOuzelEventHandler::sgsOuzelEventHandler( int priority ) : EventHandler( priority )
{
	keyboardHandler = bind( &sgsOuzelEventHandler::handleKeyboard, this, placeholders::_1, placeholders::_2 );
	mouseHandler = bind( &sgsOuzelEventHandler::handleMouse, this, placeholders::_1, placeholders::_2 );
	touchHandler = bind( &sgsOuzelEventHandler::handleTouch, this, placeholders::_1, placeholders::_2 );
	gamepadHandler = bind( &sgsOuzelEventHandler::handleGamepad, this, placeholders::_1, placeholders::_2 );
	uiHandler = bind( &sgsOuzelEventHandler::handleUI, this, placeholders::_1, placeholders::_2 );
	
	lastKeyboardEvent = CreateObj<sgsOuzelKeyboardEvent>();
	lastMouseEvent = CreateObj<sgsOuzelMouseEvent>();
	lastTouchEvent = CreateObj<sgsOuzelTouchEvent>();
	
	sharedEngine->getEventDispatcher()->addEventHandler( this );
}

int sgsOuzelEventHandler::unserialize( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelEventHandler, ( sgs_GetVar<int>()( C, 0 ) ) );
	return 1;
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
	/* TODO */
	return onGamepadEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onGamepadEvent, int(type) ) : false;
}

bool sgsOuzelEventHandler::handleUI( Event::Type type, const UIEvent& event )
{
	/* TODO */
	return onUIEvent.not_null() ? GetScriptVar().tthiscall<bool>( C, onUIEvent, int(type) ) : false;
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

sgsOuzelEventHandler::Handle sgsOuzel::createEventHandler( int priority )
{
	sgsVariable out( g_sgsCtx );
	SGS_CREATECLASS( g_sgsCtx, &out.var, sgsOuzelEventHandler, ( priority ) );
	return out.get_handle<sgsOuzelEventHandler>();
}


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


void ouzelMain( const vector<string>& args )
{
	Log( Log::Level::INFO ) << "[sgs-ouzel] Starting SGScript";
	g_sgsCtx = sgs_CreateEngine();
	
	Log( Log::Level::INFO ) << "[sgs-ouzel] Initializing bindings";
	
	sgsVariable ouzel = sgs_GetClassInterface< sgsOuzel >( g_sgsCtx );
	
	sgs_StoreIntConsts( g_sgsCtx, ouzel.var, g_ModifiersRIC, -1 );
	sgsVariable input;
	input.create_dict( g_sgsCtx );
	ouzel.setprop( "input", input );
	
	sgsVariable KeyboardKey;
	KeyboardKey.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, KeyboardKey.var, g_KeyboardKeysRIC, -1 );
	input.setprop( "KeyboardKey", KeyboardKey );
	
	sgsVariable MouseButton;
	MouseButton.create_dict( g_sgsCtx );
	sgs_StoreIntConsts( g_sgsCtx, MouseButton.var, g_MouseButtonsRIC, -1 );
	input.setprop( "MouseButton", MouseButton );
	
	sgsVariable ow( g_sgsCtx );
	SGS_CREATECLASS( g_sgsCtx, &ow.var, sgsOuzelWindow, () );
	ouzel.setprop( "window", ow );
	sgsEnv( g_sgsCtx ).setprop( "ouzel", ouzel );
	
	Log( Log::Level::INFO ) << "[sgs-ouzel] Loading 'main'";
	sgs_Include( g_sgsCtx, "main" );
}
