// SGS/CPP-BC
// warning: do not modify this file, it may be regenerated during any build

#include "sgs_ouzel.hpp"

int sgsOuzelKeyboardEvent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelKeyboardEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelKeyboardEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelKeyboardEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelKeyboardEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelKeyboardEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelKeyboardEvent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelKeyboardEvent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelKeyboardEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelKeyboardEvent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelKeyboardEvent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelKeyboardEvent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelKeyboardEvent();
	return SGS_SUCCESS;
}

int sgsOuzelKeyboardEvent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelKeyboardEvent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "modifiers" ) ){ sgs_PushVar( callerCtx, modifiers ); return SGS_SUCCESS; }
		if( !strcmp( str, "key" ) ){ sgs_PushVar( callerCtx, getKey() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelKeyboardEvent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelKeyboardEvent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelKeyboardEvent" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelKeyboardEvent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 85 ];
	sprintf( bfr, "sgsOuzelKeyboardEvent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelKeyboardEvent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nmodifiers = " ); sgs_DumpData( callerCtx, modifiers, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nkey = " ); sgs_DumpData( callerCtx, getKey(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 4 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelKeyboardEvent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelKeyboardEvent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelKeyboardEvent[] =
{ { "sgsUnserialize_sgsOuzelKeyboardEvent", sgsUnserialize_sgsOuzelKeyboardEvent } };

static sgs_RegFuncConst sgsOuzelKeyboardEvent__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelKeyboardEvent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelKeyboardEvent__sgs_funcs,
		-1, "sgsOuzelKeyboardEvent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelKeyboardEvent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelKeyboardEvent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelKeyboardEvent__sgs_interface =
{
	"sgsOuzelKeyboardEvent",
	sgsOuzelKeyboardEvent::_sgslocal_destruct, sgsOuzelKeyboardEvent::_sgslocal_gcmark, sgsOuzelKeyboardEvent::_sgslocal_getindex, sgsOuzelKeyboardEvent::_sgslocal_setindex, NULL, sgsOuzelKeyboardEvent::_sgslocal_serialize, sgsOuzelKeyboardEvent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelKeyboardEvent::_sgs_interface(sgsOuzelKeyboardEvent__sgs_interface, sgsOuzelKeyboardEvent__sgs_ifn);


int sgsOuzelMouseEvent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMouseEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMouseEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMouseEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMouseEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMouseEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelMouseEvent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelMouseEvent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelMouseEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelMouseEvent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMouseEvent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelMouseEvent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelMouseEvent();
	return SGS_SUCCESS;
}

int sgsOuzelMouseEvent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelMouseEvent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "modifiers" ) ){ sgs_PushVar( callerCtx, modifiers ); return SGS_SUCCESS; }
		if( !strcmp( str, "button" ) ){ sgs_PushVar( callerCtx, getButton() ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceX" ) ){ sgs_PushVar( callerCtx, difference.v[0] ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceY" ) ){ sgs_PushVar( callerCtx, difference.v[1] ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionX" ) ){ sgs_PushVar( callerCtx, position.v[0] ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionY" ) ){ sgs_PushVar( callerCtx, position.v[1] ); return SGS_SUCCESS; }
		if( !strcmp( str, "scrollX" ) ){ sgs_PushVar( callerCtx, scroll.v[0] ); return SGS_SUCCESS; }
		if( !strcmp( str, "scrollY" ) ){ sgs_PushVar( callerCtx, scroll.v[1] ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelMouseEvent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelMouseEvent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelMouseEvent" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelMouseEvent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 82 ];
	sprintf( bfr, "sgsOuzelMouseEvent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelMouseEvent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nmodifiers = " ); sgs_DumpData( callerCtx, modifiers, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nbutton = " ); sgs_DumpData( callerCtx, getButton(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceX = " ); sgs_DumpData( callerCtx, difference.v[0], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceY = " ); sgs_DumpData( callerCtx, difference.v[1], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionX = " ); sgs_DumpData( callerCtx, position.v[0], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionY = " ); sgs_DumpData( callerCtx, position.v[1], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscrollX = " ); sgs_DumpData( callerCtx, scroll.v[0], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscrollY = " ); sgs_DumpData( callerCtx, scroll.v[1], depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 16 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelMouseEvent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelMouseEvent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelMouseEvent[] =
{ { "sgsUnserialize_sgsOuzelMouseEvent", sgsUnserialize_sgsOuzelMouseEvent } };

static sgs_RegFuncConst sgsOuzelMouseEvent__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelMouseEvent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelMouseEvent__sgs_funcs,
		-1, "sgsOuzelMouseEvent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelMouseEvent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelMouseEvent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelMouseEvent__sgs_interface =
{
	"sgsOuzelMouseEvent",
	sgsOuzelMouseEvent::_sgslocal_destruct, sgsOuzelMouseEvent::_sgslocal_gcmark, sgsOuzelMouseEvent::_sgslocal_getindex, sgsOuzelMouseEvent::_sgslocal_setindex, NULL, sgsOuzelMouseEvent::_sgslocal_serialize, sgsOuzelMouseEvent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelMouseEvent::_sgs_interface(sgsOuzelMouseEvent__sgs_interface, sgsOuzelMouseEvent__sgs_ifn);


int sgsOuzelTouchEvent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTouchEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTouchEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTouchEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTouchEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTouchEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelTouchEvent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelTouchEvent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelTouchEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelTouchEvent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelTouchEvent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelTouchEvent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelTouchEvent();
	return SGS_SUCCESS;
}

int sgsOuzelTouchEvent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelTouchEvent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "touchId" ) ){ sgs_PushVar( callerCtx, touchId ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceX" ) ){ sgs_PushVar( callerCtx, difference.v[0] ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceY" ) ){ sgs_PushVar( callerCtx, difference.v[1] ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionX" ) ){ sgs_PushVar( callerCtx, position.v[0] ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionY" ) ){ sgs_PushVar( callerCtx, position.v[1] ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelTouchEvent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelTouchEvent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelTouchEvent" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelTouchEvent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 82 ];
	sprintf( bfr, "sgsOuzelTouchEvent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelTouchEvent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\ntouchId = " ); sgs_DumpData( callerCtx, touchId, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceX = " ); sgs_DumpData( callerCtx, difference.v[0], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceY = " ); sgs_DumpData( callerCtx, difference.v[1], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionX = " ); sgs_DumpData( callerCtx, position.v[0], depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionY = " ); sgs_DumpData( callerCtx, position.v[1], depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 10 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelTouchEvent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelTouchEvent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelTouchEvent[] =
{ { "sgsUnserialize_sgsOuzelTouchEvent", sgsUnserialize_sgsOuzelTouchEvent } };

static sgs_RegFuncConst sgsOuzelTouchEvent__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelTouchEvent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelTouchEvent__sgs_funcs,
		-1, "sgsOuzelTouchEvent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelTouchEvent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelTouchEvent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelTouchEvent__sgs_interface =
{
	"sgsOuzelTouchEvent",
	sgsOuzelTouchEvent::_sgslocal_destruct, sgsOuzelTouchEvent::_sgslocal_gcmark, sgsOuzelTouchEvent::_sgslocal_getindex, sgsOuzelTouchEvent::_sgslocal_setindex, NULL, sgsOuzelTouchEvent::_sgslocal_serialize, sgsOuzelTouchEvent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelTouchEvent::_sgs_interface(sgsOuzelTouchEvent__sgs_interface, sgsOuzelTouchEvent__sgs_ifn);


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
		if( !strcmp( str, "lastKeyboardEvent" ) ){ sgs_PushVar( callerCtx, lastKeyboardEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "lastMouseEvent" ) ){ sgs_PushVar( callerCtx, lastMouseEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "lastTouchEvent" ) ){ sgs_PushVar( callerCtx, lastTouchEvent ); return SGS_SUCCESS; }
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
		{ sgs_PushStringLit( callerCtx, "\nlastKeyboardEvent = " ); sgs_DumpData( callerCtx, lastKeyboardEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastMouseEvent = " ); sgs_DumpData( callerCtx, lastMouseEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastTouchEvent = " ); sgs_DumpData( callerCtx, lastTouchEvent, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 16 );
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

static int _sgs_method__sgsOuzel__createEventHandler( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createEventHandler" );
	sgs_PushVar(callerCtx,sgsOuzel::createEventHandler( sgs_GetVar<int>()(callerCtx,0) )); return 1;
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
	{ "createEventHandler", _sgs_method__sgsOuzel__createEventHandler },
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

