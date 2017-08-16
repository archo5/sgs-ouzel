// SGS/CPP-BC
// warning: do not modify this file, it may be regenerated during any build

#include "sgs_ouzel.hpp"

int sgsOuzelEvent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelEvent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelEvent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelEvent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelEvent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelEvent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelEvent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelEvent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelEvent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelEvent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelEvent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelEvent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelEvent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEvent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelEvent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelEvent();
	return SGS_SUCCESS;
}

int sgsOuzelEvent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelEvent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelEvent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelEvent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelEvent" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelEvent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelEvent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelEvent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_StringConcat( callerCtx, 0 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelEvent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelEvent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelEvent[] =
{ { "sgsUnserialize_sgsOuzelEvent", sgsUnserialize_sgsOuzelEvent } };

static sgs_RegFuncConst sgsOuzelEvent__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelEvent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelEvent__sgs_funcs,
		-1, "sgsOuzelEvent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelEvent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelEvent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelEvent__sgs_interface =
{
	"sgsOuzelEvent",
	sgsOuzelEvent::_sgslocal_destruct, sgsOuzelEvent::_sgslocal_gcmark, sgsOuzelEvent::_sgslocal_getindex, sgsOuzelEvent::_sgslocal_setindex, NULL, sgsOuzelEvent::_sgslocal_serialize, sgsOuzelEvent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelEvent::_sgs_interface(sgsOuzelEvent__sgs_interface, sgsOuzelEvent__sgs_ifn);


int sgsOuzelEventHandler::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEventHandler*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEventHandler*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEventHandler*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEventHandler*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEventHandler*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelEventHandler::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelEventHandler::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelEventHandler*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelEventHandler::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEventHandler::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelEventHandler::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelEventHandler();
	return SGS_SUCCESS;
}

int sgsOuzelEventHandler::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelEventHandler::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "onKeyboardEvent" ) ){ sgs_PushVar( callerCtx, onKeyboardEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "onMouseEvent" ) ){ sgs_PushVar( callerCtx, onMouseEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "onTouchEvent" ) ){ sgs_PushVar( callerCtx, onTouchEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "onGamepadEvent" ) ){ sgs_PushVar( callerCtx, onGamepadEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "onUIEvent" ) ){ sgs_PushVar( callerCtx, onUIEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "currentEvent" ) ){ sgs_PushVar( callerCtx, currentEvent ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelEventHandler::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "onKeyboardEvent" ) ){ onKeyboardEvent = sgs_GetVar<sgsVariable>()( callerCtx, 1 ); return SGS_SUCCESS; }
		if( !strcmp( str, "onMouseEvent" ) ){ onMouseEvent = sgs_GetVar<sgsVariable>()( callerCtx, 1 ); return SGS_SUCCESS; }
		if( !strcmp( str, "onTouchEvent" ) ){ onTouchEvent = sgs_GetVar<sgsVariable>()( callerCtx, 1 ); return SGS_SUCCESS; }
		if( !strcmp( str, "onGamepadEvent" ) ){ onGamepadEvent = sgs_GetVar<sgsVariable>()( callerCtx, 1 ); return SGS_SUCCESS; }
		if( !strcmp( str, "onUIEvent" ) ){ onUIEvent = sgs_GetVar<sgsVariable>()( callerCtx, 1 ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelEventHandler::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelEventHandler" );
	}
	sgs_InitStringLit( callerCtx, &key, "onKeyboardEvent" );
	sgs_PushVar( callerCtx, onKeyboardEvent );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "onMouseEvent" );
	sgs_PushVar( callerCtx, onMouseEvent );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "onTouchEvent" );
	sgs_PushVar( callerCtx, onTouchEvent );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "onGamepadEvent" );
	sgs_PushVar( callerCtx, onGamepadEvent );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "onUIEvent" );
	sgs_PushVar( callerCtx, onUIEvent );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	return SGS_SUCCESS;
}

int sgsOuzelEventHandler::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 84 ];
	sprintf( bfr, "sgsOuzelEventHandler (obj=%p, base=%p) %s",
		static_cast< sgsOuzelEventHandler* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nonKeyboardEvent = " ); sgs_DumpData( callerCtx, onKeyboardEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonMouseEvent = " ); sgs_DumpData( callerCtx, onMouseEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonTouchEvent = " ); sgs_DumpData( callerCtx, onTouchEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonGamepadEvent = " ); sgs_DumpData( callerCtx, onGamepadEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonUIEvent = " ); sgs_DumpData( callerCtx, onUIEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncurrentEvent = " ); sgs_DumpData( callerCtx, currentEvent, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 12 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelEventHandler( SGS_CTX )
{
	return sgsOuzelEventHandler::unserialize( C );
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelEventHandler[] =
{ { "sgsUnserialize_sgsOuzelEventHandler", sgsUnserialize_sgsOuzelEventHandler } };

static sgs_RegFuncConst sgsOuzelEventHandler__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelEventHandler__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelEventHandler__sgs_funcs,
		-1, "sgsOuzelEventHandler." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelEventHandler, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelEventHandler", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelEventHandler__sgs_interface =
{
	"sgsOuzelEventHandler",
	sgsOuzelEventHandler::_sgslocal_destruct, sgsOuzelEventHandler::_sgslocal_gcmark, sgsOuzelEventHandler::_sgslocal_getindex, sgsOuzelEventHandler::_sgslocal_setindex, NULL, sgsOuzelEventHandler::_sgslocal_serialize, sgsOuzelEventHandler::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelEventHandler::_sgs_interface(sgsOuzelEventHandler__sgs_interface, sgsOuzelEventHandler__sgs_ifn);


int sgsOuzelWindow::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelWindow::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWindow*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelWindow::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelWindow::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWindow*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelWindow::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelWindow::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWindow*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelWindow::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelWindow::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWindow*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelWindow::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelWindow::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWindow*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelWindow::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelWindow::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelWindow*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelWindow::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelWindow::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelWindow::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelWindow();
	return SGS_SUCCESS;
}

int sgsOuzelWindow::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelWindow::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "fullscreen" ) ){ sgs_PushVar( callerCtx, getFullscreen() ); return SGS_SUCCESS; }
		if( !strcmp( str, "title" ) ){ sgs_PushVar( callerCtx, getTitle() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelWindow::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "fullscreen" ) ){ setFullscreen( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "title" ) ){ setTitle( sgs_GetVar<string>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelWindow::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelWindow" );
	}
	sgs_InitStringLit( callerCtx, &key, "fullscreen" );
	sgs_PushVar( callerCtx, getFullscreen() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "title" );
	sgs_PushVar( callerCtx, getTitle() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	return SGS_SUCCESS;
}

int sgsOuzelWindow::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelWindow (obj=%p, base=%p) %s",
		static_cast< sgsOuzelWindow* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nfullscreen = " ); sgs_DumpData( callerCtx, getFullscreen(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ntitle = " ); sgs_DumpData( callerCtx, getTitle(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 4 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelWindow( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelWindow, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelWindow[] =
{ { "sgsUnserialize_sgsOuzelWindow", sgsUnserialize_sgsOuzelWindow } };

static sgs_RegFuncConst sgsOuzelWindow__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelWindow__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelWindow__sgs_funcs,
		-1, "sgsOuzelWindow." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelWindow, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelWindow", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelWindow__sgs_interface =
{
	"sgsOuzelWindow",
	sgsOuzelWindow::_sgslocal_destruct, sgsOuzelWindow::_sgslocal_gcmark, sgsOuzelWindow::_sgslocal_getindex, sgsOuzelWindow::_sgslocal_setindex, NULL, sgsOuzelWindow::_sgslocal_serialize, sgsOuzelWindow::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelWindow::_sgs_interface(sgsOuzelWindow__sgs_interface, sgsOuzelWindow__sgs_ifn);


static int _sgs_method__sgsOuzel__exit( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.exit" );
	sgsOuzel::exit(  ); return 0;
}

static int _sgs_method__sgsOuzel__setAppAndDeveloperNames( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.setAppAndDeveloperNames" );
	sgsOuzel::setAppAndDeveloperNames( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<string>()(callerCtx,1) ); return 0;
}

static int _sgs_method__sgsOuzel__setScreenSaverEnabled( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.setScreenSaverEnabled" );
	sgsOuzel::setScreenSaverEnabled( sgs_GetVar<bool>()(callerCtx,0) ); return 0;
}

int sgsOuzel::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzel::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzel::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzel::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzel::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzel::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzel::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzel::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzel::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzel::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzel::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzel::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzel::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzel::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzel::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	this->~sgsOuzel();
	return SGS_SUCCESS;
}

int sgsOuzel::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	return SGS_SUCCESS;
}

int sgsOuzel::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzel::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzel::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzel" );
	}
	return SGS_SUCCESS;
}

int sgsOuzel::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	char bfr[ 72 ];
	sprintf( bfr, "sgsOuzel (obj=%p, base=%p) %s",
		static_cast< sgsOuzel* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_StringConcat( callerCtx, 0 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzel( SGS_CTX )
{
	SGS_CREATELITECLASS( C, NULL, sgsOuzel, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzel[] =
{ { "sgsUnserialize_sgsOuzel", sgsUnserialize_sgsOuzel } };

static sgs_RegFuncConst sgsOuzel__sgs_funcs[] =
{
	{ "exit", _sgs_method__sgsOuzel__exit },
	{ "setAppAndDeveloperNames", _sgs_method__sgsOuzel__setAppAndDeveloperNames },
	{ "setScreenSaverEnabled", _sgs_method__sgsOuzel__setScreenSaverEnabled },
	{ NULL, NULL },
};

static int sgsOuzel__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzel__sgs_funcs,
		-1, "sgsOuzel." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzel, 1 );
	sgs_RegSymbol( C, "", "sgsOuzel", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzel__sgs_interface =
{
	"sgsOuzel",
	sgsOuzel::_sgslocal_destruct, sgsOuzel::_sgslocal_gcmark, sgsOuzel::_sgslocal_getindex, sgsOuzel::_sgslocal_setindex, NULL, sgsOuzel::_sgslocal_serialize, sgsOuzel::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzel::_sgs_interface(sgsOuzel__sgs_interface, sgsOuzel__sgs_ifn);

