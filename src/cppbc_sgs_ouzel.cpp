// SGS/CPP-BC
// warning: do not modify this file, it may be regenerated during any build

#include "sgs_ouzel.hpp"

static int _sgs_method__sgsOuzelDisposable__dispose( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelDisposable::_sgs_interface, (void**) &base, "sgsOuzelDisposable.dispose" ) ) return 0;
	sgsOuzelDisposable* data = static_cast<sgsOuzelDisposable*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->dispose(  ); return 0;
}

int sgsOuzelDisposable::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelDisposable::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelDisposable*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelDisposable::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelDisposable::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelDisposable*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelDisposable::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelDisposable::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelDisposable*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelDisposable::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelDisposable::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelDisposable*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelDisposable::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelDisposable::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelDisposable*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelDisposable::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelDisposable::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelDisposable*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelDisposable::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelDisposable::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelDisposable::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelDisposable();
	return SGS_SUCCESS;
}

int sgsOuzelDisposable::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelDisposable::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelDisposable::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelDisposable::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelDisposable" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelDisposable::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 82 ];
	sprintf( bfr, "sgsOuzelDisposable (obj=%p, base=%p) %s",
		static_cast< sgsOuzelDisposable* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
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

int sgsUnserialize_sgsOuzelDisposable( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelDisposable, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelDisposable[] =
{ { "sgsUnserialize_sgsOuzelDisposable", sgsUnserialize_sgsOuzelDisposable } };

static sgs_RegFuncConst sgsOuzelDisposable__sgs_funcs[] =
{
	{ "dispose", _sgs_method__sgsOuzelDisposable__dispose },
	{ NULL, NULL },
};

static int sgsOuzelDisposable__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelDisposable__sgs_funcs,
		-1, "sgsOuzelDisposable." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelDisposable, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelDisposable", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelDisposable__sgs_interface =
{
	"sgsOuzelDisposable",
	sgsOuzelDisposable::_sgslocal_destruct, sgsOuzelDisposable::_sgslocal_gcmark, sgsOuzelDisposable::_sgslocal_getindex, sgsOuzelDisposable::_sgslocal_setindex, NULL, sgsOuzelDisposable::_sgslocal_serialize, sgsOuzelDisposable::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelDisposable::_sgs_interface(sgsOuzelDisposable__sgs_interface, sgsOuzelDisposable__sgs_ifn);


int sgsOuzelColor::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelColor::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelColor::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelColor::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelColor::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelColor::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelColor::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelColor::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelColor::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelColor::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelColor::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelColor::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelColor::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelColor::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelColor::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelColor::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelColor::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return call( callerCtx, obj ); }
int sgsOuzelColor::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelColor*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->call( callerCtx, obj ); }
int sgsOuzelColor::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelColor::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelColor::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelColor();
	return SGS_SUCCESS;
}

int sgsOuzelColor::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelColor::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "BLACK" ) ){ sgs_PushVar( callerCtx, Color(Color::BLACK) ); return SGS_SUCCESS; }
		if( !strcmp( str, "RED" ) ){ sgs_PushVar( callerCtx, Color(Color::RED) ); return SGS_SUCCESS; }
		if( !strcmp( str, "MAGENTA" ) ){ sgs_PushVar( callerCtx, Color(Color::MAGENTA) ); return SGS_SUCCESS; }
		if( !strcmp( str, "GREEN" ) ){ sgs_PushVar( callerCtx, Color(Color::GREEN) ); return SGS_SUCCESS; }
		if( !strcmp( str, "CYAN" ) ){ sgs_PushVar( callerCtx, Color(Color::CYAN) ); return SGS_SUCCESS; }
		if( !strcmp( str, "BLUE" ) ){ sgs_PushVar( callerCtx, Color(Color::BLUE) ); return SGS_SUCCESS; }
		if( !strcmp( str, "YELLOW" ) ){ sgs_PushVar( callerCtx, Color(Color::YELLOW) ); return SGS_SUCCESS; }
		if( !strcmp( str, "WHITE" ) ){ sgs_PushVar( callerCtx, Color(Color::WHITE) ); return SGS_SUCCESS; }
		if( !strcmp( str, "GRAY" ) ){ sgs_PushVar( callerCtx, Color(Color::GRAY) ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelColor::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelColor::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelColor" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelColor::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelColor (obj=%p, base=%p) %s",
		static_cast< sgsOuzelColor* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nBLACK = " ); sgs_DumpData( callerCtx, Color(Color::BLACK), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nRED = " ); sgs_DumpData( callerCtx, Color(Color::RED), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nMAGENTA = " ); sgs_DumpData( callerCtx, Color(Color::MAGENTA), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nGREEN = " ); sgs_DumpData( callerCtx, Color(Color::GREEN), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nCYAN = " ); sgs_DumpData( callerCtx, Color(Color::CYAN), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nBLUE = " ); sgs_DumpData( callerCtx, Color(Color::BLUE), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nYELLOW = " ); sgs_DumpData( callerCtx, Color(Color::YELLOW), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nWHITE = " ); sgs_DumpData( callerCtx, Color(Color::WHITE), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nGRAY = " ); sgs_DumpData( callerCtx, Color(Color::GRAY), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 18 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelColor( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelColor, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelColor[] =
{ { "sgsUnserialize_sgsOuzelColor", sgsUnserialize_sgsOuzelColor } };

static sgs_RegFuncConst sgsOuzelColor__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelColor__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelColor__sgs_funcs,
		-1, "sgsOuzelColor." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelColor, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelColor", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelColor__sgs_interface =
{
	"sgsOuzelColor",
	sgsOuzelColor::_sgslocal_destruct, sgsOuzelColor::_sgslocal_gcmark, sgsOuzelColor::_sgslocal_getindex, sgsOuzelColor::_sgslocal_setindex, NULL, sgsOuzelColor::_sgslocal_serialize, sgsOuzelColor::_sgslocal_dump, NULL, sgsOuzelColor::_sgslocal_call, NULL, 
	NULL,
};
_sgsInterface sgsOuzelColor::_sgs_interface(sgsOuzelColor__sgs_interface, sgsOuzelColor__sgs_ifn);


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
		if( !strcmp( str, "difference" ) ){ sgs_PushVar( callerCtx, difference ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceX" ) ){ sgs_PushVar( callerCtx, difference.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceY" ) ){ sgs_PushVar( callerCtx, difference.y ); return SGS_SUCCESS; }
		if( !strcmp( str, "position" ) ){ sgs_PushVar( callerCtx, position ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionX" ) ){ sgs_PushVar( callerCtx, position.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionY" ) ){ sgs_PushVar( callerCtx, position.y ); return SGS_SUCCESS; }
		if( !strcmp( str, "scroll" ) ){ sgs_PushVar( callerCtx, scroll ); return SGS_SUCCESS; }
		if( !strcmp( str, "scrollX" ) ){ sgs_PushVar( callerCtx, scroll.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "scrollY" ) ){ sgs_PushVar( callerCtx, scroll.y ); return SGS_SUCCESS; }
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
		{ sgs_PushStringLit( callerCtx, "\ndifference = " ); sgs_DumpData( callerCtx, difference, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceX = " ); sgs_DumpData( callerCtx, difference.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceY = " ); sgs_DumpData( callerCtx, difference.y, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nposition = " ); sgs_DumpData( callerCtx, position, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionX = " ); sgs_DumpData( callerCtx, position.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionY = " ); sgs_DumpData( callerCtx, position.y, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscroll = " ); sgs_DumpData( callerCtx, scroll, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscrollX = " ); sgs_DumpData( callerCtx, scroll.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscrollY = " ); sgs_DumpData( callerCtx, scroll.y, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 22 );
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
		if( !strcmp( str, "difference" ) ){ sgs_PushVar( callerCtx, difference ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceX" ) ){ sgs_PushVar( callerCtx, difference.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceY" ) ){ sgs_PushVar( callerCtx, difference.y ); return SGS_SUCCESS; }
		if( !strcmp( str, "position" ) ){ sgs_PushVar( callerCtx, position ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionX" ) ){ sgs_PushVar( callerCtx, position.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionY" ) ){ sgs_PushVar( callerCtx, position.y ); return SGS_SUCCESS; }
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
		{ sgs_PushStringLit( callerCtx, "\ndifference = " ); sgs_DumpData( callerCtx, difference, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceX = " ); sgs_DumpData( callerCtx, difference.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceY = " ); sgs_DumpData( callerCtx, difference.y, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nposition = " ); sgs_DumpData( callerCtx, position, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionX = " ); sgs_DumpData( callerCtx, position.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionY = " ); sgs_DumpData( callerCtx, position.y, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 14 );
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


int sgsOuzelGamepadEvent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelGamepadEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelGamepadEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelGamepadEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelGamepadEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelGamepadEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelGamepadEvent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelGamepadEvent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelGamepadEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelGamepadEvent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelGamepadEvent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelGamepadEvent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelGamepadEvent();
	return SGS_SUCCESS;
}

int sgsOuzelGamepadEvent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelGamepadEvent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "button" ) ){ sgs_PushVar( callerCtx, getButton() ); return SGS_SUCCESS; }
		if( !strcmp( str, "pressed" ) ){ sgs_PushVar( callerCtx, pressed ); return SGS_SUCCESS; }
		if( !strcmp( str, "previousPressed" ) ){ sgs_PushVar( callerCtx, previousPressed ); return SGS_SUCCESS; }
		if( !strcmp( str, "value" ) ){ sgs_PushVar( callerCtx, value ); return SGS_SUCCESS; }
		if( !strcmp( str, "previousValue" ) ){ sgs_PushVar( callerCtx, previousValue ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelGamepadEvent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelGamepadEvent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelGamepadEvent" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelGamepadEvent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 84 ];
	sprintf( bfr, "sgsOuzelGamepadEvent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelGamepadEvent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nbutton = " ); sgs_DumpData( callerCtx, getButton(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npressed = " ); sgs_DumpData( callerCtx, pressed, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npreviousPressed = " ); sgs_DumpData( callerCtx, previousPressed, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nvalue = " ); sgs_DumpData( callerCtx, value, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npreviousValue = " ); sgs_DumpData( callerCtx, previousValue, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 10 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelGamepadEvent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelGamepadEvent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelGamepadEvent[] =
{ { "sgsUnserialize_sgsOuzelGamepadEvent", sgsUnserialize_sgsOuzelGamepadEvent } };

static sgs_RegFuncConst sgsOuzelGamepadEvent__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelGamepadEvent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelGamepadEvent__sgs_funcs,
		-1, "sgsOuzelGamepadEvent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelGamepadEvent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelGamepadEvent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelGamepadEvent__sgs_interface =
{
	"sgsOuzelGamepadEvent",
	sgsOuzelGamepadEvent::_sgslocal_destruct, sgsOuzelGamepadEvent::_sgslocal_gcmark, sgsOuzelGamepadEvent::_sgslocal_getindex, sgsOuzelGamepadEvent::_sgslocal_setindex, NULL, sgsOuzelGamepadEvent::_sgslocal_serialize, sgsOuzelGamepadEvent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelGamepadEvent::_sgs_interface(sgsOuzelGamepadEvent__sgs_interface, sgsOuzelGamepadEvent__sgs_ifn);


int sgsOuzelUIEvent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelUIEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelUIEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelUIEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelUIEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelUIEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelUIEvent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelUIEvent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelUIEvent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelUIEvent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelUIEvent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelUIEvent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelUIEvent();
	return SGS_SUCCESS;
}

int sgsOuzelUIEvent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelUIEvent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "node" ) ){ sgs_PushVar( callerCtx, getNode() ); return SGS_SUCCESS; }
		if( !strcmp( str, "touchId" ) ){ sgs_PushVar( callerCtx, touchId ); return SGS_SUCCESS; }
		if( !strcmp( str, "difference" ) ){ sgs_PushVar( callerCtx, difference ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceX" ) ){ sgs_PushVar( callerCtx, difference.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "differenceY" ) ){ sgs_PushVar( callerCtx, difference.y ); return SGS_SUCCESS; }
		if( !strcmp( str, "position" ) ){ sgs_PushVar( callerCtx, position ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionX" ) ){ sgs_PushVar( callerCtx, position.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "positionY" ) ){ sgs_PushVar( callerCtx, position.y ); return SGS_SUCCESS; }
		if( !strcmp( str, "localPosition" ) ){ sgs_PushVar( callerCtx, localPosition ); return SGS_SUCCESS; }
		if( !strcmp( str, "localPositionX" ) ){ sgs_PushVar( callerCtx, localPosition.x ); return SGS_SUCCESS; }
		if( !strcmp( str, "localPositionY" ) ){ sgs_PushVar( callerCtx, localPosition.y ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelUIEvent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelUIEvent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelUIEvent" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelUIEvent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 79 ];
	sprintf( bfr, "sgsOuzelUIEvent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelUIEvent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nnode = " ); sgs_DumpData( callerCtx, getNode(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ntouchId = " ); sgs_DumpData( callerCtx, touchId, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifference = " ); sgs_DumpData( callerCtx, difference, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceX = " ); sgs_DumpData( callerCtx, difference.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndifferenceY = " ); sgs_DumpData( callerCtx, difference.y, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nposition = " ); sgs_DumpData( callerCtx, position, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionX = " ); sgs_DumpData( callerCtx, position.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npositionY = " ); sgs_DumpData( callerCtx, position.y, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlocalPosition = " ); sgs_DumpData( callerCtx, localPosition, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlocalPositionX = " ); sgs_DumpData( callerCtx, localPosition.x, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlocalPositionY = " ); sgs_DumpData( callerCtx, localPosition.y, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 22 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelUIEvent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelUIEvent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelUIEvent[] =
{ { "sgsUnserialize_sgsOuzelUIEvent", sgsUnserialize_sgsOuzelUIEvent } };

static sgs_RegFuncConst sgsOuzelUIEvent__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelUIEvent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelUIEvent__sgs_funcs,
		-1, "sgsOuzelUIEvent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelUIEvent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelUIEvent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelUIEvent__sgs_interface =
{
	"sgsOuzelUIEvent",
	sgsOuzelUIEvent::_sgslocal_destruct, sgsOuzelUIEvent::_sgslocal_gcmark, sgsOuzelUIEvent::_sgslocal_getindex, sgsOuzelUIEvent::_sgslocal_setindex, NULL, sgsOuzelUIEvent::_sgslocal_serialize, sgsOuzelUIEvent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelUIEvent::_sgs_interface(sgsOuzelUIEvent__sgs_interface, sgsOuzelUIEvent__sgs_ifn);


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
	sgsOuzelDisposable::_sgs_gcmark( callerCtx, obj );
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
		if( !strcmp( str, "lastGamepadEvent" ) ){ sgs_PushVar( callerCtx, lastGamepadEvent ); return SGS_SUCCESS; }
		if( !strcmp( str, "lastUIEvent" ) ){ sgs_PushVar( callerCtx, lastUIEvent ); return SGS_SUCCESS; }
	}
	return sgsOuzelDisposable::_sgs_getindex( callerCtx, obj );
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
	return sgsOuzelDisposable::_sgs_setindex( callerCtx, obj );
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
	sgsOuzelDisposable::_sgsimpl_serialize( C, obj );
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
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelDisposable::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\nonKeyboardEvent = " ); sgs_DumpData( callerCtx, onKeyboardEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonMouseEvent = " ); sgs_DumpData( callerCtx, onMouseEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonTouchEvent = " ); sgs_DumpData( callerCtx, onTouchEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonGamepadEvent = " ); sgs_DumpData( callerCtx, onGamepadEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nonUIEvent = " ); sgs_DumpData( callerCtx, onUIEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastKeyboardEvent = " ); sgs_DumpData( callerCtx, lastKeyboardEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastMouseEvent = " ); sgs_DumpData( callerCtx, lastMouseEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastTouchEvent = " ); sgs_DumpData( callerCtx, lastTouchEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastGamepadEvent = " ); sgs_DumpData( callerCtx, lastGamepadEvent, depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlastUIEvent = " ); sgs_DumpData( callerCtx, lastUIEvent, depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 22 );
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
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelDisposable >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelEventHandler, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelEventHandler", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelEventHandler__sgs_interface =
{
	"sgsOuzelEventHandler",
	sgsOuzelEventHandler::_sgslocal_destruct, sgsOuzelEventHandler::_sgslocal_gcmark, sgsOuzelEventHandler::_sgslocal_getindex, sgsOuzelEventHandler::_sgslocal_setindex, NULL, sgsOuzelEventHandler::_sgslocal_serialize, sgsOuzelEventHandler::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelDisposable::_sgs_interface,
};
_sgsInterface sgsOuzelEventHandler::_sgs_interface(sgsOuzelEventHandler__sgs_interface, sgsOuzelEventHandler__sgs_ifn);


static int _sgs_method__sgsOuzelComponent__pointOn( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelComponent::_sgs_interface, (void**) &base, "sgsOuzelComponent.pointOn" ) ) return 0;
	sgsOuzelComponent* data = static_cast<sgsOuzelComponent*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->pointOn( sgs_GetVar<Vector2>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzelComponent__removeFromNode( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelComponent::_sgs_interface, (void**) &base, "sgsOuzelComponent.removeFromNode" ) ) return 0;
	sgsOuzelComponent* data = static_cast<sgsOuzelComponent*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeFromNode(  ); return 0;
}

int sgsOuzelComponent::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelComponent::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelComponent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelComponent::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelComponent::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelComponent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelComponent::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelComponent::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelComponent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelComponent::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelComponent::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelComponent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelComponent::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelComponent::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelComponent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelComponent::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelComponent::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelComponent*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelComponent::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelComponent::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelComponent::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelComponent();
	return SGS_SUCCESS;
}

int sgsOuzelComponent::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelComponent::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "type" ) ){ sgs_PushVar( callerCtx, Item()->getType() ); return SGS_SUCCESS; }
		if( !strcmp( str, "hidden" ) ){ sgs_PushVar( callerCtx, Item()->isHidden() ); return SGS_SUCCESS; }
		if( !strcmp( str, "node" ) ){ sgs_PushVar( callerCtx, getNode() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelComponent::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "hidden" ) ){ Item()->setHidden( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelComponent::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelComponent" );
	}
	sgs_InitStringLit( callerCtx, &key, "hidden" );
	sgs_PushVar( callerCtx, Item()->isHidden() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	return SGS_SUCCESS;
}

int sgsOuzelComponent::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 81 ];
	sprintf( bfr, "sgsOuzelComponent (obj=%p, base=%p) %s",
		static_cast< sgsOuzelComponent* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\ntype = " ); sgs_DumpData( callerCtx, Item()->getType(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nhidden = " ); sgs_DumpData( callerCtx, Item()->isHidden(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nnode = " ); sgs_DumpData( callerCtx, getNode(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 6 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelComponent( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelComponent, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelComponent[] =
{ { "sgsUnserialize_sgsOuzelComponent", sgsUnserialize_sgsOuzelComponent } };

static sgs_RegFuncConst sgsOuzelComponent__sgs_funcs[] =
{
	{ "pointOn", _sgs_method__sgsOuzelComponent__pointOn },
	{ "removeFromNode", _sgs_method__sgsOuzelComponent__removeFromNode },
	{ NULL, NULL },
};

static int sgsOuzelComponent__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelComponent__sgs_funcs,
		-1, "sgsOuzelComponent." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelComponent, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelComponent", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelComponent__sgs_interface =
{
	"sgsOuzelComponent",
	sgsOuzelComponent::_sgslocal_destruct, sgsOuzelComponent::_sgslocal_gcmark, sgsOuzelComponent::_sgslocal_getindex, sgsOuzelComponent::_sgslocal_setindex, NULL, sgsOuzelComponent::_sgslocal_serialize, sgsOuzelComponent::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelComponent::_sgs_interface(sgsOuzelComponent__sgs_interface, sgsOuzelComponent__sgs_ifn);


static int _sgs_method__sgsOuzelSprite__initFromFile( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSprite::_sgs_interface, (void**) &base, "sgsOuzelSprite.initFromFile" ) ) return 0;
	sgsOuzelSprite* data = static_cast<sgsOuzelSprite*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->initFromFile( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<bool>()(callerCtx,1), sgs_GetVar<uint32_t>()(callerCtx,2), sgs_GetVar<uint32_t>()(callerCtx,3), sgs_GetVar<Vector2>()(callerCtx,4) )); return 1;
}

static int _sgs_method__sgsOuzelSprite__initFromTexture( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSprite::_sgs_interface, (void**) &base, "sgsOuzelSprite.initFromTexture" ) ) return 0;
	sgsOuzelSprite* data = static_cast<sgsOuzelSprite*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->initFromTexture( sgs_GetVar<sgsHandle< struct sgsOuzelTexture > >()(callerCtx,0), sgs_GetVar<uint32_t>()(callerCtx,1), sgs_GetVar<uint32_t>()(callerCtx,2), sgs_GetVar<Vector2>()(callerCtx,3) )); return 1;
}

static int _sgs_method__sgsOuzelSprite__play( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSprite::_sgs_interface, (void**) &base, "sgsOuzelSprite.play" ) ) return 0;
	sgsOuzelSprite* data = static_cast<sgsOuzelSprite*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->play( sgs_GetVar<bool>()(callerCtx,0), sgs_GetVar<float>()(callerCtx,1) ); return 0;
}

static int _sgs_method__sgsOuzelSprite__stop( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSprite::_sgs_interface, (void**) &base, "sgsOuzelSprite.stop" ) ) return 0;
	sgsOuzelSprite* data = static_cast<sgsOuzelSprite*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->stop( sgs_GetVar<bool>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelSprite__reset( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSprite::_sgs_interface, (void**) &base, "sgsOuzelSprite.reset" ) ) return 0;
	sgsOuzelSprite* data = static_cast<sgsOuzelSprite*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->reset(  ); return 0;
}

int sgsOuzelSprite::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelSprite::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSprite*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelSprite::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelSprite::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSprite*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelSprite::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelSprite::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSprite*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelSprite::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelSprite::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSprite*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelSprite::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelSprite::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSprite*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelSprite::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelSprite::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelSprite*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelSprite::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSprite::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelSprite::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelSprite();
	return SGS_SUCCESS;
}

int sgsOuzelSprite::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelComponent::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelSprite::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "size" ) ){ sgs_PushVar( callerCtx, Item()->getSize() ); return SGS_SUCCESS; }
		if( !strcmp( str, "offset" ) ){ sgs_PushVar( callerCtx, Item()->getOffset() ); return SGS_SUCCESS; }
		if( !strcmp( str, "playing" ) ){ sgs_PushVar( callerCtx, Item()->isPlaying() ); return SGS_SUCCESS; }
	}
	return sgsOuzelComponent::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelSprite::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "offset" ) ){ Item()->setOffset( sgs_GetVar<Vector2>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "currentFrame" ) ){ Item()->setCurrentFrame( sgs_GetVar<uint32_t>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelComponent::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelSprite::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelSprite" );
	}
	sgs_InitStringLit( callerCtx, &key, "offset" );
	sgs_PushVar( callerCtx, Item()->getOffset() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "currentFrame" );
	
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelComponent::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelSprite::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelSprite (obj=%p, base=%p) %s",
		static_cast< sgsOuzelSprite* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelComponent::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\nsize = " ); sgs_DumpData( callerCtx, Item()->getSize(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\noffset = " ); sgs_DumpData( callerCtx, Item()->getOffset(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nplaying = " ); sgs_DumpData( callerCtx, Item()->isPlaying(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 8 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelSprite( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelSprite, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelSprite[] =
{ { "sgsUnserialize_sgsOuzelSprite", sgsUnserialize_sgsOuzelSprite } };

static sgs_RegFuncConst sgsOuzelSprite__sgs_funcs[] =
{
	{ "initFromFile", _sgs_method__sgsOuzelSprite__initFromFile },
	{ "initFromTexture", _sgs_method__sgsOuzelSprite__initFromTexture },
	{ "play", _sgs_method__sgsOuzelSprite__play },
	{ "stop", _sgs_method__sgsOuzelSprite__stop },
	{ "reset", _sgs_method__sgsOuzelSprite__reset },
	{ NULL, NULL },
};

static int sgsOuzelSprite__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelSprite__sgs_funcs,
		-1, "sgsOuzelSprite." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelComponent >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelSprite, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelSprite", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelSprite__sgs_interface =
{
	"sgsOuzelSprite",
	sgsOuzelSprite::_sgslocal_destruct, sgsOuzelSprite::_sgslocal_gcmark, sgsOuzelSprite::_sgslocal_getindex, sgsOuzelSprite::_sgslocal_setindex, NULL, sgsOuzelSprite::_sgslocal_serialize, sgsOuzelSprite::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelComponent::_sgs_interface,
};
_sgsInterface sgsOuzelSprite::_sgs_interface(sgsOuzelSprite__sgs_interface, sgsOuzelSprite__sgs_ifn);


static int _sgs_method__sgsOuzelShapeRenderer__clear( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelShapeRenderer::_sgs_interface, (void**) &base, "sgsOuzelShapeRenderer.clear" ) ) return 0;
	sgsOuzelShapeRenderer* data = static_cast<sgsOuzelShapeRenderer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->clear(  ); return 0;
}

static int _sgs_method__sgsOuzelShapeRenderer__line( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelShapeRenderer::_sgs_interface, (void**) &base, "sgsOuzelShapeRenderer.line" ) ) return 0;
	sgsOuzelShapeRenderer* data = static_cast<sgsOuzelShapeRenderer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->line( sgs_GetVar<Vector2>()(callerCtx,0), sgs_GetVar<Vector2>()(callerCtx,1), sgs_GetVar<Color>()(callerCtx,2), sgs_GetVar<float>()(callerCtx,3) )); return 1;
}

static int _sgs_method__sgsOuzelShapeRenderer__circle( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelShapeRenderer::_sgs_interface, (void**) &base, "sgsOuzelShapeRenderer.circle" ) ) return 0;
	sgsOuzelShapeRenderer* data = static_cast<sgsOuzelShapeRenderer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->circle( sgs_GetVar<Vector2>()(callerCtx,0), sgs_GetVar<float>()(callerCtx,1), sgs_GetVar<Color>()(callerCtx,2), sgs_GetVar<bool>()(callerCtx,3), sgs_GetVar<uint32_t>()(callerCtx,4), sgs_GetVar<float>()(callerCtx,5) )); return 1;
}

static int _sgs_method__sgsOuzelShapeRenderer__rectangle( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelShapeRenderer::_sgs_interface, (void**) &base, "sgsOuzelShapeRenderer.rectangle" ) ) return 0;
	sgsOuzelShapeRenderer* data = static_cast<sgsOuzelShapeRenderer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->rectangle( sgs_GetVar<Rectangle>()(callerCtx,0), sgs_GetVar<Color>()(callerCtx,1), sgs_GetVar<bool>()(callerCtx,2), sgs_GetVar<float>()(callerCtx,3) )); return 1;
}

int sgsOuzelShapeRenderer::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShapeRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShapeRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShapeRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShapeRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShapeRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelShapeRenderer::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelShapeRenderer::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelShapeRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelShapeRenderer::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelShapeRenderer::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelShapeRenderer::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelShapeRenderer();
	return SGS_SUCCESS;
}

int sgsOuzelShapeRenderer::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelComponent::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelShapeRenderer::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelComponent::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelShapeRenderer::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelComponent::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelShapeRenderer::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelShapeRenderer" );
	}
	sgsOuzelComponent::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelShapeRenderer::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 85 ];
	sprintf( bfr, "sgsOuzelShapeRenderer (obj=%p, base=%p) %s",
		static_cast< sgsOuzelShapeRenderer* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelComponent::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelShapeRenderer( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelShapeRenderer, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelShapeRenderer[] =
{ { "sgsUnserialize_sgsOuzelShapeRenderer", sgsUnserialize_sgsOuzelShapeRenderer } };

static sgs_RegFuncConst sgsOuzelShapeRenderer__sgs_funcs[] =
{
	{ "clear", _sgs_method__sgsOuzelShapeRenderer__clear },
	{ "line", _sgs_method__sgsOuzelShapeRenderer__line },
	{ "circle", _sgs_method__sgsOuzelShapeRenderer__circle },
	{ "rectangle", _sgs_method__sgsOuzelShapeRenderer__rectangle },
	{ NULL, NULL },
};

static int sgsOuzelShapeRenderer__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelShapeRenderer__sgs_funcs,
		-1, "sgsOuzelShapeRenderer." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelComponent >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelShapeRenderer, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelShapeRenderer", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelShapeRenderer__sgs_interface =
{
	"sgsOuzelShapeRenderer",
	sgsOuzelShapeRenderer::_sgslocal_destruct, sgsOuzelShapeRenderer::_sgslocal_gcmark, sgsOuzelShapeRenderer::_sgslocal_getindex, sgsOuzelShapeRenderer::_sgslocal_setindex, NULL, sgsOuzelShapeRenderer::_sgslocal_serialize, sgsOuzelShapeRenderer::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelComponent::_sgs_interface,
};
_sgsInterface sgsOuzelShapeRenderer::_sgs_interface(sgsOuzelShapeRenderer__sgs_interface, sgsOuzelShapeRenderer__sgs_ifn);


static int _sgs_method__sgsOuzelAnimator__update( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.update" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->update( sgs_GetVar<float>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__start( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.start" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->start(  ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__play( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.play" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->play(  ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__resume( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.resume" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->resume(  ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__stop( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.stop" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->stop( sgs_GetVar<bool>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__reset( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.reset" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->reset(  ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__addAnimator( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.addAnimator" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->addAnimator( sgs_GetVar<sgsOuzelAnimator::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__removeAnimator( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.removeAnimator" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeAnimator( sgs_GetVar<sgsOuzelAnimator::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__removeAllAnimators( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.removeAllAnimators" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeAllAnimators(  ); return 0;
}

static int _sgs_method__sgsOuzelAnimator__removeFromParent( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelAnimator::_sgs_interface, (void**) &base, "sgsOuzelAnimator.removeFromParent" ) ) return 0;
	sgsOuzelAnimator* data = static_cast<sgsOuzelAnimator*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeFromParent(  ); return 0;
}

int sgsOuzelAnimator::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelAnimator::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelAnimator*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelAnimator::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelAnimator::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelAnimator*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelAnimator::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelAnimator::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelAnimator*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelAnimator::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelAnimator::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelAnimator*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelAnimator::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelAnimator::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelAnimator*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelAnimator::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelAnimator::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelAnimator*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelAnimator::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelAnimator::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelAnimator::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelAnimator();
	return SGS_SUCCESS;
}

int sgsOuzelAnimator::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelComponent::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelAnimator::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "running" ) ){ sgs_PushVar( callerCtx, Item()->isRunning() ); return SGS_SUCCESS; }
		if( !strcmp( str, "done" ) ){ sgs_PushVar( callerCtx, Item()->isDone() ); return SGS_SUCCESS; }
		if( !strcmp( str, "length" ) ){ sgs_PushVar( callerCtx, Item()->getLength() ); return SGS_SUCCESS; }
		if( !strcmp( str, "currentTime" ) ){ sgs_PushVar( callerCtx, Item()->getCurrentTime() ); return SGS_SUCCESS; }
		if( !strcmp( str, "progress" ) ){ sgs_PushVar( callerCtx, Item()->getProgress() ); return SGS_SUCCESS; }
		if( !strcmp( str, "targetNode" ) ){ sgs_PushVar( callerCtx, getTargetNode() ); return SGS_SUCCESS; }
		if( !strcmp( str, "parent" ) ){ sgs_PushVar( callerCtx, getParent() ); return SGS_SUCCESS; }
	}
	return sgsOuzelComponent::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelAnimator::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelComponent::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelAnimator::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelAnimator" );
	}
	sgsOuzelComponent::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelAnimator::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 80 ];
	sprintf( bfr, "sgsOuzelAnimator (obj=%p, base=%p) %s",
		static_cast< sgsOuzelAnimator* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelComponent::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\nrunning = " ); sgs_DumpData( callerCtx, Item()->isRunning(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndone = " ); sgs_DumpData( callerCtx, Item()->isDone(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nlength = " ); sgs_DumpData( callerCtx, Item()->getLength(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncurrentTime = " ); sgs_DumpData( callerCtx, Item()->getCurrentTime(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nprogress = " ); sgs_DumpData( callerCtx, Item()->getProgress(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ntargetNode = " ); sgs_DumpData( callerCtx, getTargetNode(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nparent = " ); sgs_DumpData( callerCtx, getParent(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 16 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelAnimator( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelAnimator, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelAnimator[] =
{ { "sgsUnserialize_sgsOuzelAnimator", sgsUnserialize_sgsOuzelAnimator } };

static sgs_RegFuncConst sgsOuzelAnimator__sgs_funcs[] =
{
	{ "update", _sgs_method__sgsOuzelAnimator__update },
	{ "start", _sgs_method__sgsOuzelAnimator__start },
	{ "play", _sgs_method__sgsOuzelAnimator__play },
	{ "resume", _sgs_method__sgsOuzelAnimator__resume },
	{ "stop", _sgs_method__sgsOuzelAnimator__stop },
	{ "reset", _sgs_method__sgsOuzelAnimator__reset },
	{ "addAnimator", _sgs_method__sgsOuzelAnimator__addAnimator },
	{ "removeAnimator", _sgs_method__sgsOuzelAnimator__removeAnimator },
	{ "removeAllAnimators", _sgs_method__sgsOuzelAnimator__removeAllAnimators },
	{ "removeFromParent", _sgs_method__sgsOuzelAnimator__removeFromParent },
	{ NULL, NULL },
};

static int sgsOuzelAnimator__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelAnimator__sgs_funcs,
		-1, "sgsOuzelAnimator." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelComponent >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelAnimator, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelAnimator", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelAnimator__sgs_interface =
{
	"sgsOuzelAnimator",
	sgsOuzelAnimator::_sgslocal_destruct, sgsOuzelAnimator::_sgslocal_gcmark, sgsOuzelAnimator::_sgslocal_getindex, sgsOuzelAnimator::_sgslocal_setindex, NULL, sgsOuzelAnimator::_sgslocal_serialize, sgsOuzelAnimator::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelComponent::_sgs_interface,
};
_sgsInterface sgsOuzelAnimator::_sgs_interface(sgsOuzelAnimator__sgs_interface, sgsOuzelAnimator__sgs_ifn);


int sgsOuzelMove::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelMove::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMove*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelMove::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelMove::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMove*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelMove::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelMove::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMove*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelMove::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelMove::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMove*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelMove::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelMove::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMove*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelMove::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelMove::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelMove*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelMove::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMove::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelMove::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelMove();
	return SGS_SUCCESS;
}

int sgsOuzelMove::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelMove::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelMove::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelMove::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelMove" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelMove::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 76 ];
	sprintf( bfr, "sgsOuzelMove (obj=%p, base=%p) %s",
		static_cast< sgsOuzelMove* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelMove( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelMove, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelMove[] =
{ { "sgsUnserialize_sgsOuzelMove", sgsUnserialize_sgsOuzelMove } };

static sgs_RegFuncConst sgsOuzelMove__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelMove__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelMove__sgs_funcs,
		-1, "sgsOuzelMove." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelMove, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelMove", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelMove__sgs_interface =
{
	"sgsOuzelMove",
	sgsOuzelMove::_sgslocal_destruct, sgsOuzelMove::_sgslocal_gcmark, sgsOuzelMove::_sgslocal_getindex, sgsOuzelMove::_sgslocal_setindex, NULL, sgsOuzelMove::_sgslocal_serialize, sgsOuzelMove::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelMove::_sgs_interface(sgsOuzelMove__sgs_interface, sgsOuzelMove__sgs_ifn);


int sgsOuzelRotate::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelRotate::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRotate*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelRotate::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelRotate::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRotate*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelRotate::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelRotate::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRotate*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelRotate::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelRotate::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRotate*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelRotate::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelRotate::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRotate*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelRotate::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelRotate::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelRotate*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelRotate::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRotate::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelRotate::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelRotate();
	return SGS_SUCCESS;
}

int sgsOuzelRotate::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelRotate::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelRotate::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelRotate::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelRotate" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelRotate::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelRotate (obj=%p, base=%p) %s",
		static_cast< sgsOuzelRotate* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelRotate( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelRotate, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelRotate[] =
{ { "sgsUnserialize_sgsOuzelRotate", sgsUnserialize_sgsOuzelRotate } };

static sgs_RegFuncConst sgsOuzelRotate__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelRotate__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelRotate__sgs_funcs,
		-1, "sgsOuzelRotate." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelRotate, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelRotate", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelRotate__sgs_interface =
{
	"sgsOuzelRotate",
	sgsOuzelRotate::_sgslocal_destruct, sgsOuzelRotate::_sgslocal_gcmark, sgsOuzelRotate::_sgslocal_getindex, sgsOuzelRotate::_sgslocal_setindex, NULL, sgsOuzelRotate::_sgslocal_serialize, sgsOuzelRotate::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelRotate::_sgs_interface(sgsOuzelRotate__sgs_interface, sgsOuzelRotate__sgs_ifn);


int sgsOuzelScale::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelScale::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScale*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelScale::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelScale::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScale*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelScale::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelScale::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScale*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelScale::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelScale::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScale*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelScale::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelScale::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScale*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelScale::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelScale::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelScale*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelScale::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelScale::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelScale::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelScale();
	return SGS_SUCCESS;
}

int sgsOuzelScale::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelScale::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelScale::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelScale::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelScale" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelScale::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelScale (obj=%p, base=%p) %s",
		static_cast< sgsOuzelScale* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelScale( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelScale, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelScale[] =
{ { "sgsUnserialize_sgsOuzelScale", sgsUnserialize_sgsOuzelScale } };

static sgs_RegFuncConst sgsOuzelScale__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelScale__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelScale__sgs_funcs,
		-1, "sgsOuzelScale." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelScale, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelScale", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelScale__sgs_interface =
{
	"sgsOuzelScale",
	sgsOuzelScale::_sgslocal_destruct, sgsOuzelScale::_sgslocal_gcmark, sgsOuzelScale::_sgslocal_getindex, sgsOuzelScale::_sgslocal_setindex, NULL, sgsOuzelScale::_sgslocal_serialize, sgsOuzelScale::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelScale::_sgs_interface(sgsOuzelScale__sgs_interface, sgsOuzelScale__sgs_ifn);


int sgsOuzelShake::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelShake::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShake*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelShake::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelShake::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShake*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelShake::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelShake::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShake*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelShake::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelShake::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShake*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelShake::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelShake::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelShake*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelShake::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelShake::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelShake*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelShake::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelShake::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelShake::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelShake();
	return SGS_SUCCESS;
}

int sgsOuzelShake::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelShake::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelShake::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelShake::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelShake" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelShake::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelShake (obj=%p, base=%p) %s",
		static_cast< sgsOuzelShake* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelShake( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelShake, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelShake[] =
{ { "sgsUnserialize_sgsOuzelShake", sgsUnserialize_sgsOuzelShake } };

static sgs_RegFuncConst sgsOuzelShake__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelShake__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelShake__sgs_funcs,
		-1, "sgsOuzelShake." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelShake, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelShake", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelShake__sgs_interface =
{
	"sgsOuzelShake",
	sgsOuzelShake::_sgslocal_destruct, sgsOuzelShake::_sgslocal_gcmark, sgsOuzelShake::_sgslocal_getindex, sgsOuzelShake::_sgslocal_setindex, NULL, sgsOuzelShake::_sgslocal_serialize, sgsOuzelShake::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelShake::_sgs_interface(sgsOuzelShake__sgs_interface, sgsOuzelShake__sgs_ifn);


int sgsOuzelFade::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelFade::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFade*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelFade::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelFade::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFade*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelFade::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelFade::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFade*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelFade::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelFade::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFade*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelFade::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelFade::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFade*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelFade::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelFade::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelFade*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelFade::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelFade::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelFade::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelFade();
	return SGS_SUCCESS;
}

int sgsOuzelFade::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelFade::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelFade::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelFade::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelFade" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelFade::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 76 ];
	sprintf( bfr, "sgsOuzelFade (obj=%p, base=%p) %s",
		static_cast< sgsOuzelFade* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelFade( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelFade, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelFade[] =
{ { "sgsUnserialize_sgsOuzelFade", sgsUnserialize_sgsOuzelFade } };

static sgs_RegFuncConst sgsOuzelFade__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelFade__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelFade__sgs_funcs,
		-1, "sgsOuzelFade." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelFade, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelFade", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelFade__sgs_interface =
{
	"sgsOuzelFade",
	sgsOuzelFade::_sgslocal_destruct, sgsOuzelFade::_sgslocal_gcmark, sgsOuzelFade::_sgslocal_getindex, sgsOuzelFade::_sgslocal_setindex, NULL, sgsOuzelFade::_sgslocal_serialize, sgsOuzelFade::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelFade::_sgs_interface(sgsOuzelFade__sgs_interface, sgsOuzelFade__sgs_ifn);


int sgsOuzelEase::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelEase::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEase*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelEase::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelEase::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEase*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelEase::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelEase::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEase*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelEase::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelEase::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEase*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelEase::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelEase::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelEase*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelEase::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelEase::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelEase*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelEase::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelEase::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelEase::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelEase();
	return SGS_SUCCESS;
}

int sgsOuzelEase::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelEase::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelEase::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelEase::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelEase" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelEase::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 76 ];
	sprintf( bfr, "sgsOuzelEase (obj=%p, base=%p) %s",
		static_cast< sgsOuzelEase* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelEase( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelEase, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelEase[] =
{ { "sgsUnserialize_sgsOuzelEase", sgsUnserialize_sgsOuzelEase } };

static sgs_RegFuncConst sgsOuzelEase__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelEase__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelEase__sgs_funcs,
		-1, "sgsOuzelEase." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelEase, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelEase", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelEase__sgs_interface =
{
	"sgsOuzelEase",
	sgsOuzelEase::_sgslocal_destruct, sgsOuzelEase::_sgslocal_gcmark, sgsOuzelEase::_sgslocal_getindex, sgsOuzelEase::_sgslocal_setindex, NULL, sgsOuzelEase::_sgslocal_serialize, sgsOuzelEase::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelEase::_sgs_interface(sgsOuzelEase__sgs_interface, sgsOuzelEase__sgs_ifn);


int sgsOuzelRepeat::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelRepeat::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRepeat*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelRepeat::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelRepeat::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRepeat*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelRepeat::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelRepeat::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRepeat*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelRepeat::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelRepeat::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRepeat*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelRepeat::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelRepeat::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRepeat*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelRepeat::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelRepeat::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelRepeat*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelRepeat::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRepeat::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelRepeat::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelRepeat();
	return SGS_SUCCESS;
}

int sgsOuzelRepeat::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelRepeat::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelRepeat::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelRepeat::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelRepeat" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelRepeat::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelRepeat (obj=%p, base=%p) %s",
		static_cast< sgsOuzelRepeat* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelRepeat( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelRepeat, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelRepeat[] =
{ { "sgsUnserialize_sgsOuzelRepeat", sgsUnserialize_sgsOuzelRepeat } };

static sgs_RegFuncConst sgsOuzelRepeat__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelRepeat__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelRepeat__sgs_funcs,
		-1, "sgsOuzelRepeat." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelRepeat, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelRepeat", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelRepeat__sgs_interface =
{
	"sgsOuzelRepeat",
	sgsOuzelRepeat::_sgslocal_destruct, sgsOuzelRepeat::_sgslocal_gcmark, sgsOuzelRepeat::_sgslocal_getindex, sgsOuzelRepeat::_sgslocal_setindex, NULL, sgsOuzelRepeat::_sgslocal_serialize, sgsOuzelRepeat::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelRepeat::_sgs_interface(sgsOuzelRepeat__sgs_interface, sgsOuzelRepeat__sgs_ifn);


int sgsOuzelParallel::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelParallel::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelParallel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelParallel::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelParallel::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelParallel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelParallel::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelParallel::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelParallel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelParallel::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelParallel::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelParallel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelParallel::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelParallel::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelParallel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelParallel::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelParallel::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelParallel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelParallel::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelParallel::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelParallel::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelParallel();
	return SGS_SUCCESS;
}

int sgsOuzelParallel::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelParallel::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelParallel::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelParallel::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelParallel" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelParallel::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 80 ];
	sprintf( bfr, "sgsOuzelParallel (obj=%p, base=%p) %s",
		static_cast< sgsOuzelParallel* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelParallel( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelParallel, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelParallel[] =
{ { "sgsUnserialize_sgsOuzelParallel", sgsUnserialize_sgsOuzelParallel } };

static sgs_RegFuncConst sgsOuzelParallel__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelParallel__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelParallel__sgs_funcs,
		-1, "sgsOuzelParallel." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelParallel, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelParallel", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelParallel__sgs_interface =
{
	"sgsOuzelParallel",
	sgsOuzelParallel::_sgslocal_destruct, sgsOuzelParallel::_sgslocal_gcmark, sgsOuzelParallel::_sgslocal_getindex, sgsOuzelParallel::_sgslocal_setindex, NULL, sgsOuzelParallel::_sgslocal_serialize, sgsOuzelParallel::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelParallel::_sgs_interface(sgsOuzelParallel__sgs_interface, sgsOuzelParallel__sgs_ifn);


int sgsOuzelSequence::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelSequence::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSequence*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelSequence::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelSequence::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSequence*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelSequence::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelSequence::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSequence*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelSequence::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelSequence::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSequence*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelSequence::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelSequence::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSequence*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelSequence::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelSequence::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelSequence*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelSequence::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSequence::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelSequence::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelSequence();
	return SGS_SUCCESS;
}

int sgsOuzelSequence::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelAnimator::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelSequence::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelSequence::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelAnimator::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelSequence::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelSequence" );
	}
	sgsOuzelAnimator::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelSequence::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 80 ];
	sprintf( bfr, "sgsOuzelSequence (obj=%p, base=%p) %s",
		static_cast< sgsOuzelSequence* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelAnimator::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelSequence( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelSequence, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelSequence[] =
{ { "sgsUnserialize_sgsOuzelSequence", sgsUnserialize_sgsOuzelSequence } };

static sgs_RegFuncConst sgsOuzelSequence__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelSequence__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelSequence__sgs_funcs,
		-1, "sgsOuzelSequence." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelAnimator >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelSequence, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelSequence", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelSequence__sgs_interface =
{
	"sgsOuzelSequence",
	sgsOuzelSequence::_sgslocal_destruct, sgsOuzelSequence::_sgslocal_gcmark, sgsOuzelSequence::_sgslocal_getindex, sgsOuzelSequence::_sgslocal_setindex, NULL, sgsOuzelSequence::_sgslocal_serialize, sgsOuzelSequence::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelAnimator::_sgs_interface,
};
_sgsInterface sgsOuzelSequence::_sgs_interface(sgsOuzelSequence__sgs_interface, sgsOuzelSequence__sgs_ifn);


static int _sgs_method__sgsOuzelNodeContainer__addChild( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.addChild" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->addChild( sgs_GetVar<sgsHandle< struct sgsOuzelNode > >()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelNodeContainer__removeChild( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.removeChild" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->removeChild( sgs_GetVar<sgsHandle< struct sgsOuzelNode > >()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzelNodeContainer__moveChildToBack( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.moveChildToBack" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->moveChildToBack( sgs_GetVar<sgsHandle< struct sgsOuzelNode > >()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzelNodeContainer__moveChildToFront( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.moveChildToFront" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->moveChildToFront( sgs_GetVar<sgsHandle< struct sgsOuzelNode > >()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzelNodeContainer__removeAllChildren( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.removeAllChildren" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeAllChildren(  ); return 0;
}

static int _sgs_method__sgsOuzelNodeContainer__hasChild( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.hasChild" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->hasChild( sgs_GetVar<sgsHandle< struct sgsOuzelNode > >()(callerCtx,0), sgs_GetVar<bool>()(callerCtx,1) )); return 1;
}

static int _sgs_method__sgsOuzelNodeContainer__getChildren( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.getChildren" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->getChildren(  )); return 1;
}

static int _sgs_method__sgsOuzelNodeContainer__getLayer( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNodeContainer::_sgs_interface, (void**) &base, "sgsOuzelNodeContainer.getLayer" ) ) return 0;
	sgsOuzelNodeContainer* data = static_cast<sgsOuzelNodeContainer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->getLayer(  )); return 1;
}

int sgsOuzelNodeContainer::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNodeContainer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNodeContainer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNodeContainer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNodeContainer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNodeContainer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelNodeContainer::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelNodeContainer::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelNodeContainer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelNodeContainer::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelNodeContainer::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelNodeContainer::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelNodeContainer();
	return SGS_SUCCESS;
}

int sgsOuzelNodeContainer::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelNodeContainer::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "layer" ) ){ sgs_PushVar( callerCtx, getLayer() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelNodeContainer::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelNodeContainer::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelNodeContainer" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelNodeContainer::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 85 ];
	sprintf( bfr, "sgsOuzelNodeContainer (obj=%p, base=%p) %s",
		static_cast< sgsOuzelNodeContainer* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
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

int sgsUnserialize_sgsOuzelNodeContainer( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelNodeContainer, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelNodeContainer[] =
{ { "sgsUnserialize_sgsOuzelNodeContainer", sgsUnserialize_sgsOuzelNodeContainer } };

static sgs_RegFuncConst sgsOuzelNodeContainer__sgs_funcs[] =
{
	{ "addChild", _sgs_method__sgsOuzelNodeContainer__addChild },
	{ "removeChild", _sgs_method__sgsOuzelNodeContainer__removeChild },
	{ "moveChildToBack", _sgs_method__sgsOuzelNodeContainer__moveChildToBack },
	{ "moveChildToFront", _sgs_method__sgsOuzelNodeContainer__moveChildToFront },
	{ "removeAllChildren", _sgs_method__sgsOuzelNodeContainer__removeAllChildren },
	{ "hasChild", _sgs_method__sgsOuzelNodeContainer__hasChild },
	{ "getChildren", _sgs_method__sgsOuzelNodeContainer__getChildren },
	{ "getLayer", _sgs_method__sgsOuzelNodeContainer__getLayer },
	{ NULL, NULL },
};

static int sgsOuzelNodeContainer__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelNodeContainer__sgs_funcs,
		-1, "sgsOuzelNodeContainer." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelNodeContainer, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelNodeContainer", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelNodeContainer__sgs_interface =
{
	"sgsOuzelNodeContainer",
	sgsOuzelNodeContainer::_sgslocal_destruct, sgsOuzelNodeContainer::_sgslocal_gcmark, sgsOuzelNodeContainer::_sgslocal_getindex, sgsOuzelNodeContainer::_sgslocal_setindex, NULL, sgsOuzelNodeContainer::_sgslocal_serialize, sgsOuzelNodeContainer::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelNodeContainer::_sgs_interface(sgsOuzelNodeContainer__sgs_interface, sgsOuzelNodeContainer__sgs_ifn);


static int _sgs_method__sgsOuzelNode__pointOn( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNode::_sgs_interface, (void**) &base, "sgsOuzelNode.pointOn" ) ) return 0;
	sgsOuzelNode* data = static_cast<sgsOuzelNode*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->pointOn( sgs_GetVar<Vector2>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzelNode__removeFromParent( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNode::_sgs_interface, (void**) &base, "sgsOuzelNode.removeFromParent" ) ) return 0;
	sgsOuzelNode* data = static_cast<sgsOuzelNode*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeFromParent(  ); return 0;
}

static int _sgs_method__sgsOuzelNode__addComponent( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNode::_sgs_interface, (void**) &base, "sgsOuzelNode.addComponent" ) ) return 0;
	sgsOuzelNode* data = static_cast<sgsOuzelNode*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->addComponent( sgs_GetVar<sgsOuzelComponent::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelNode__removeComponent( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNode::_sgs_interface, (void**) &base, "sgsOuzelNode.removeComponent" ) ) return 0;
	sgsOuzelNode* data = static_cast<sgsOuzelNode*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeComponent( sgs_GetVar<sgsOuzelComponent::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelNode__removeAllComponents( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNode::_sgs_interface, (void**) &base, "sgsOuzelNode.removeAllComponents" ) ) return 0;
	sgsOuzelNode* data = static_cast<sgsOuzelNode*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeAllComponents(  ); return 0;
}

static int _sgs_method__sgsOuzelNode__getComponents( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelNode::_sgs_interface, (void**) &base, "sgsOuzelNode.getComponents" ) ) return 0;
	sgsOuzelNode* data = static_cast<sgsOuzelNode*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->getComponents( sgs_GetVar<uint32_t>()(callerCtx,0) )); return 1;
}

int sgsOuzelNode::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelNode::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNode*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelNode::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelNode::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNode*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelNode::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelNode::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNode*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelNode::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelNode::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNode*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelNode::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelNode::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelNode*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelNode::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelNode::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelNode*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelNode::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelNode::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelNode::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelNode();
	return SGS_SUCCESS;
}

int sgsOuzelNode::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelNodeContainer::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelNode::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "position" ) ){ sgs_PushVar( callerCtx, Item()->getPosition() ); return SGS_SUCCESS; }
		if( !strcmp( str, "worldPosition" ) ){ sgs_PushVar( callerCtx, Item()->getWorldPosition() ); return SGS_SUCCESS; }
		if( !strcmp( str, "order" ) ){ sgs_PushVar( callerCtx, Item()->getOrder() ); return SGS_SUCCESS; }
		if( !strcmp( str, "worldOrder" ) ){ sgs_PushVar( callerCtx, Item()->getWorldOrder() ); return SGS_SUCCESS; }
		if( !strcmp( str, "scale" ) ){ sgs_PushVar( callerCtx, Item()->getScale() ); return SGS_SUCCESS; }
		if( !strcmp( str, "opacity" ) ){ sgs_PushVar( callerCtx, Item()->getOpacity() ); return SGS_SUCCESS; }
		if( !strcmp( str, "flipX" ) ){ sgs_PushVar( callerCtx, Item()->getFlipX() ); return SGS_SUCCESS; }
		if( !strcmp( str, "flipY" ) ){ sgs_PushVar( callerCtx, Item()->getFlipY() ); return SGS_SUCCESS; }
		if( !strcmp( str, "pickable" ) ){ sgs_PushVar( callerCtx, Item()->isPickable() ); return SGS_SUCCESS; }
		if( !strcmp( str, "cullDisabled" ) ){ sgs_PushVar( callerCtx, Item()->isCullDisabled() ); return SGS_SUCCESS; }
		if( !strcmp( str, "hidden" ) ){ sgs_PushVar( callerCtx, Item()->isHidden() ); return SGS_SUCCESS; }
		if( !strcmp( str, "worldHidden" ) ){ sgs_PushVar( callerCtx, Item()->isWorldHidden() ); return SGS_SUCCESS; }
		if( !strcmp( str, "parent" ) ){ sgs_PushVar( callerCtx, getParent() ); return SGS_SUCCESS; }
	}
	return sgsOuzelNodeContainer::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelNode::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "position" ) ){ Item()->setPosition( sgs_GetVar<Vector3>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "order" ) ){ Item()->setOrder( sgs_GetVar<int32_t>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "scale" ) ){ Item()->setScale( sgs_GetVar<Vector3>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "opacity" ) ){ Item()->setOpacity( sgs_GetVar<float>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "flipX" ) ){ Item()->setFlipX( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "flipY" ) ){ Item()->setFlipY( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "pickable" ) ){ Item()->setPickable( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "cullDisabled" ) ){ Item()->setCullDisabled( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "hidden" ) ){ Item()->setHidden( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelNodeContainer::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelNode::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelNode" );
	}
	sgs_InitStringLit( callerCtx, &key, "position" );
	sgs_PushVar( callerCtx, Item()->getPosition() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "order" );
	sgs_PushVar( callerCtx, Item()->getOrder() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "scale" );
	sgs_PushVar( callerCtx, Item()->getScale() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "opacity" );
	sgs_PushVar( callerCtx, Item()->getOpacity() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "flipX" );
	sgs_PushVar( callerCtx, Item()->getFlipX() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "flipY" );
	sgs_PushVar( callerCtx, Item()->getFlipY() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "pickable" );
	sgs_PushVar( callerCtx, Item()->isPickable() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "cullDisabled" );
	sgs_PushVar( callerCtx, Item()->isCullDisabled() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "hidden" );
	sgs_PushVar( callerCtx, Item()->isHidden() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelNodeContainer::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelNode::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 76 ];
	sprintf( bfr, "sgsOuzelNode (obj=%p, base=%p) %s",
		static_cast< sgsOuzelNode* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelNodeContainer::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\nposition = " ); sgs_DumpData( callerCtx, Item()->getPosition(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nworldPosition = " ); sgs_DumpData( callerCtx, Item()->getWorldPosition(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\norder = " ); sgs_DumpData( callerCtx, Item()->getOrder(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nworldOrder = " ); sgs_DumpData( callerCtx, Item()->getWorldOrder(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscale = " ); sgs_DumpData( callerCtx, Item()->getScale(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nopacity = " ); sgs_DumpData( callerCtx, Item()->getOpacity(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nflipX = " ); sgs_DumpData( callerCtx, Item()->getFlipX(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nflipY = " ); sgs_DumpData( callerCtx, Item()->getFlipY(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npickable = " ); sgs_DumpData( callerCtx, Item()->isPickable(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncullDisabled = " ); sgs_DumpData( callerCtx, Item()->isCullDisabled(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nhidden = " ); sgs_DumpData( callerCtx, Item()->isHidden(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nworldHidden = " ); sgs_DumpData( callerCtx, Item()->isWorldHidden(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 26 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelNode( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelNode, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelNode[] =
{ { "sgsUnserialize_sgsOuzelNode", sgsUnserialize_sgsOuzelNode } };

static sgs_RegFuncConst sgsOuzelNode__sgs_funcs[] =
{
	{ "pointOn", _sgs_method__sgsOuzelNode__pointOn },
	{ "removeFromParent", _sgs_method__sgsOuzelNode__removeFromParent },
	{ "addComponent", _sgs_method__sgsOuzelNode__addComponent },
	{ "removeComponent", _sgs_method__sgsOuzelNode__removeComponent },
	{ "removeAllComponents", _sgs_method__sgsOuzelNode__removeAllComponents },
	{ "getComponents", _sgs_method__sgsOuzelNode__getComponents },
	{ NULL, NULL },
};

static int sgsOuzelNode__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelNode__sgs_funcs,
		-1, "sgsOuzelNode." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelNodeContainer >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelNode, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelNode", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelNode__sgs_interface =
{
	"sgsOuzelNode",
	sgsOuzelNode::_sgslocal_destruct, sgsOuzelNode::_sgslocal_gcmark, sgsOuzelNode::_sgslocal_getindex, sgsOuzelNode::_sgslocal_setindex, NULL, sgsOuzelNode::_sgslocal_serialize, sgsOuzelNode::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelNodeContainer::_sgs_interface,
};
_sgsInterface sgsOuzelNode::_sgs_interface(sgsOuzelNode__sgs_interface, sgsOuzelNode__sgs_ifn);


static int _sgs_method__sgsOuzelLayer__getCameras( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelLayer::_sgs_interface, (void**) &base, "sgsOuzelLayer.getCameras" ) ) return 0;
	sgsOuzelLayer* data = static_cast<sgsOuzelLayer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->getCameras(  )); return 1;
}

static int _sgs_method__sgsOuzelLayer__getScene( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelLayer::_sgs_interface, (void**) &base, "sgsOuzelLayer.getScene" ) ) return 0;
	sgsOuzelLayer* data = static_cast<sgsOuzelLayer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->getScene(  )); return 1;
}

static int _sgs_method__sgsOuzelLayer__removeFromScene( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelLayer::_sgs_interface, (void**) &base, "sgsOuzelLayer.removeFromScene" ) ) return 0;
	sgsOuzelLayer* data = static_cast<sgsOuzelLayer*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeFromScene(  ); return 0;
}

int sgsOuzelLayer::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelLayer::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLayer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelLayer::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelLayer::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLayer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelLayer::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelLayer::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLayer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelLayer::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelLayer::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLayer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelLayer::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelLayer::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLayer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelLayer::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelLayer::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelLayer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelLayer::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelLayer::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelLayer::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelLayer();
	return SGS_SUCCESS;
}

int sgsOuzelLayer::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelNodeContainer::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelLayer::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "order" ) ){ sgs_PushVar( callerCtx, Item()->getOrder() ); return SGS_SUCCESS; }
		if( !strcmp( str, "scene" ) ){ sgs_PushVar( callerCtx, getScene() ); return SGS_SUCCESS; }
	}
	return sgsOuzelNodeContainer::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelLayer::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "order" ) ){ Item()->setOrder( sgs_GetVar<int32_t>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelNodeContainer::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelLayer::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelLayer" );
	}
	sgs_InitStringLit( callerCtx, &key, "order" );
	sgs_PushVar( callerCtx, Item()->getOrder() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelNodeContainer::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelLayer::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelLayer (obj=%p, base=%p) %s",
		static_cast< sgsOuzelLayer* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelNodeContainer::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\norder = " ); sgs_DumpData( callerCtx, Item()->getOrder(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscene = " ); sgs_DumpData( callerCtx, getScene(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 6 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelLayer( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelLayer, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelLayer[] =
{ { "sgsUnserialize_sgsOuzelLayer", sgsUnserialize_sgsOuzelLayer } };

static sgs_RegFuncConst sgsOuzelLayer__sgs_funcs[] =
{
	{ "getCameras", _sgs_method__sgsOuzelLayer__getCameras },
	{ "getScene", _sgs_method__sgsOuzelLayer__getScene },
	{ "removeFromScene", _sgs_method__sgsOuzelLayer__removeFromScene },
	{ NULL, NULL },
};

static int sgsOuzelLayer__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelLayer__sgs_funcs,
		-1, "sgsOuzelLayer." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelNodeContainer >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelLayer, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelLayer", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelLayer__sgs_interface =
{
	"sgsOuzelLayer",
	sgsOuzelLayer::_sgslocal_destruct, sgsOuzelLayer::_sgslocal_gcmark, sgsOuzelLayer::_sgslocal_getindex, sgsOuzelLayer::_sgslocal_setindex, NULL, sgsOuzelLayer::_sgslocal_serialize, sgsOuzelLayer::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelNodeContainer::_sgs_interface,
};
_sgsInterface sgsOuzelLayer::_sgs_interface(sgsOuzelLayer__sgs_interface, sgsOuzelLayer__sgs_ifn);


int sgsOuzelCamera::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelCamera::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCamera*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelCamera::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelCamera::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCamera*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelCamera::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelCamera::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCamera*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelCamera::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelCamera::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCamera*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelCamera::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelCamera::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCamera*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelCamera::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelCamera::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelCamera*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelCamera::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelCamera::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelCamera::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelCamera();
	return SGS_SUCCESS;
}

int sgsOuzelCamera::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelNode::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelCamera::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "type" ) ){ sgs_PushVar( callerCtx, getType() ); return SGS_SUCCESS; }
		if( !strcmp( str, "FOV" ) ){ sgs_PushVar( callerCtx, Item()->getFOV() ); return SGS_SUCCESS; }
		if( !strcmp( str, "nearPlane" ) ){ sgs_PushVar( callerCtx, Item()->getNearPlane() ); return SGS_SUCCESS; }
		if( !strcmp( str, "farPlane" ) ){ sgs_PushVar( callerCtx, Item()->getFarPlane() ); return SGS_SUCCESS; }
		if( !strcmp( str, "viewport" ) ){ sgs_PushVar( callerCtx, Item()->getViewport() ); return SGS_SUCCESS; }
		if( !strcmp( str, "renderViewport" ) ){ sgs_PushVar( callerCtx, Item()->getRenderViewport() ); return SGS_SUCCESS; }
		if( !strcmp( str, "scaleMode" ) ){ sgs_PushVar( callerCtx, getScaleMode() ); return SGS_SUCCESS; }
		if( !strcmp( str, "targetContentSize" ) ){ sgs_PushVar( callerCtx, Item()->getTargetContentSize() ); return SGS_SUCCESS; }
		if( !strcmp( str, "contentSize" ) ){ sgs_PushVar( callerCtx, Item()->getContentSize() ); return SGS_SUCCESS; }
		if( !strcmp( str, "contentScale" ) ){ sgs_PushVar( callerCtx, Item()->getContentScale() ); return SGS_SUCCESS; }
		if( !strcmp( str, "contentPosition" ) ){ sgs_PushVar( callerCtx, Item()->getContentPosition() ); return SGS_SUCCESS; }
		if( !strcmp( str, "renderTarget" ) ){ sgs_PushVar( callerCtx, getRenderTarget() ); return SGS_SUCCESS; }
		if( !strcmp( str, "depthWrite" ) ){ sgs_PushVar( callerCtx, Item()->getDepthWrite() ); return SGS_SUCCESS; }
		if( !strcmp( str, "depthTest" ) ){ sgs_PushVar( callerCtx, Item()->getDepthTest() ); return SGS_SUCCESS; }
		if( !strcmp( str, "wireframe" ) ){ sgs_PushVar( callerCtx, Item()->getWireframe() ); return SGS_SUCCESS; }
	}
	return sgsOuzelNode::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelCamera::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "type" ) ){ setType( sgs_GetVar<int>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "FOV" ) ){ Item()->setFOV( sgs_GetVar<float>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "nearPlane" ) ){ Item()->setNearPlane( sgs_GetVar<float>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "farPlane" ) ){ Item()->setFarPlane( sgs_GetVar<float>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "viewport" ) ){ Item()->setViewport( sgs_GetVar<Rectangle>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "scaleMode" ) ){ setScaleMode( sgs_GetVar<int>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "targetContentSize" ) ){ Item()->setTargetContentSize( sgs_GetVar<Size2>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "renderTarget" ) ){ setRenderTarget( sgs_GetVar<sgsHandle< struct sgsOuzelTexture > >()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "depthWrite" ) ){ Item()->setDepthWrite( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "depthTest" ) ){ Item()->setDepthTest( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "wireframe" ) ){ Item()->setWireframe( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelNode::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelCamera::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelCamera" );
	}
	sgs_InitStringLit( callerCtx, &key, "type" );
	sgs_PushVar( callerCtx, getType() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "FOV" );
	sgs_PushVar( callerCtx, Item()->getFOV() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "nearPlane" );
	sgs_PushVar( callerCtx, Item()->getNearPlane() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "farPlane" );
	sgs_PushVar( callerCtx, Item()->getFarPlane() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "viewport" );
	sgs_PushVar( callerCtx, Item()->getViewport() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "scaleMode" );
	sgs_PushVar( callerCtx, getScaleMode() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "targetContentSize" );
	sgs_PushVar( callerCtx, Item()->getTargetContentSize() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "renderTarget" );
	sgs_PushVar( callerCtx, getRenderTarget() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "depthWrite" );
	sgs_PushVar( callerCtx, Item()->getDepthWrite() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "depthTest" );
	sgs_PushVar( callerCtx, Item()->getDepthTest() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "wireframe" );
	sgs_PushVar( callerCtx, Item()->getWireframe() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelNode::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelCamera::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelCamera (obj=%p, base=%p) %s",
		static_cast< sgsOuzelCamera* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelNode::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\ntype = " ); sgs_DumpData( callerCtx, getType(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nFOV = " ); sgs_DumpData( callerCtx, Item()->getFOV(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nnearPlane = " ); sgs_DumpData( callerCtx, Item()->getNearPlane(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nfarPlane = " ); sgs_DumpData( callerCtx, Item()->getFarPlane(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nviewport = " ); sgs_DumpData( callerCtx, Item()->getViewport(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nrenderViewport = " ); sgs_DumpData( callerCtx, Item()->getRenderViewport(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nscaleMode = " ); sgs_DumpData( callerCtx, getScaleMode(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ntargetContentSize = " ); sgs_DumpData( callerCtx, Item()->getTargetContentSize(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncontentSize = " ); sgs_DumpData( callerCtx, Item()->getContentSize(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncontentScale = " ); sgs_DumpData( callerCtx, Item()->getContentScale(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncontentPosition = " ); sgs_DumpData( callerCtx, Item()->getContentPosition(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nrenderTarget = " ); sgs_DumpData( callerCtx, getRenderTarget(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndepthWrite = " ); sgs_DumpData( callerCtx, Item()->getDepthWrite(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ndepthTest = " ); sgs_DumpData( callerCtx, Item()->getDepthTest(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nwireframe = " ); sgs_DumpData( callerCtx, Item()->getWireframe(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 32 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelCamera( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelCamera, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelCamera[] =
{ { "sgsUnserialize_sgsOuzelCamera", sgsUnserialize_sgsOuzelCamera } };

static sgs_RegFuncConst sgsOuzelCamera__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelCamera__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelCamera__sgs_funcs,
		-1, "sgsOuzelCamera." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelNode >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelCamera, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelCamera", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelCamera__sgs_interface =
{
	"sgsOuzelCamera",
	sgsOuzelCamera::_sgslocal_destruct, sgsOuzelCamera::_sgslocal_gcmark, sgsOuzelCamera::_sgslocal_getindex, sgsOuzelCamera::_sgslocal_setindex, NULL, sgsOuzelCamera::_sgslocal_serialize, sgsOuzelCamera::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelNode::_sgs_interface,
};
_sgsInterface sgsOuzelCamera::_sgs_interface(sgsOuzelCamera__sgs_interface, sgsOuzelCamera__sgs_ifn);


static int _sgs_method__sgsOuzelScene__addLayer( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelScene::_sgs_interface, (void**) &base, "sgsOuzelScene.addLayer" ) ) return 0;
	sgsOuzelScene* data = static_cast<sgsOuzelScene*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->addLayer( sgs_GetVar<sgsOuzelLayer::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelScene__removeLayer( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelScene::_sgs_interface, (void**) &base, "sgsOuzelScene.removeLayer" ) ) return 0;
	sgsOuzelScene* data = static_cast<sgsOuzelScene*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeLayer( sgs_GetVar<sgsOuzelLayer::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelScene__removeAllLayers( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelScene::_sgs_interface, (void**) &base, "sgsOuzelScene.removeAllLayers" ) ) return 0;
	sgsOuzelScene* data = static_cast<sgsOuzelScene*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeAllLayers(  ); return 0;
}

int sgsOuzelScene::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelScene::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScene*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelScene::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelScene::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScene*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelScene::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelScene::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScene*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelScene::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelScene::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScene*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelScene::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelScene::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelScene*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelScene::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelScene::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelScene*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelScene::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelScene::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelScene::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelScene();
	return SGS_SUCCESS;
}

int sgsOuzelScene::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelScene::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelScene::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelScene::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelScene" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelScene::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelScene (obj=%p, base=%p) %s",
		static_cast< sgsOuzelScene* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
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

int sgsUnserialize_sgsOuzelScene( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelScene, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelScene[] =
{ { "sgsUnserialize_sgsOuzelScene", sgsUnserialize_sgsOuzelScene } };

static sgs_RegFuncConst sgsOuzelScene__sgs_funcs[] =
{
	{ "addLayer", _sgs_method__sgsOuzelScene__addLayer },
	{ "removeLayer", _sgs_method__sgsOuzelScene__removeLayer },
	{ "removeAllLayers", _sgs_method__sgsOuzelScene__removeAllLayers },
	{ NULL, NULL },
};

static int sgsOuzelScene__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelScene__sgs_funcs,
		-1, "sgsOuzelScene." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelScene, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelScene", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelScene__sgs_interface =
{
	"sgsOuzelScene",
	sgsOuzelScene::_sgslocal_destruct, sgsOuzelScene::_sgslocal_gcmark, sgsOuzelScene::_sgslocal_getindex, sgsOuzelScene::_sgslocal_setindex, NULL, sgsOuzelScene::_sgslocal_serialize, sgsOuzelScene::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelScene::_sgs_interface(sgsOuzelScene__sgs_interface, sgsOuzelScene__sgs_ifn);


static int _sgs_method__sgsOuzelSceneManager__getScene( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSceneManager::_sgs_interface, (void**) &base, "sgsOuzelSceneManager.getScene" ) ) return 0;
	sgsOuzelSceneManager* data = static_cast<sgsOuzelSceneManager*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->getScene(  )); return 1;
}

static int _sgs_method__sgsOuzelSceneManager__setScene( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSceneManager::_sgs_interface, (void**) &base, "sgsOuzelSceneManager.setScene" ) ) return 0;
	sgsOuzelSceneManager* data = static_cast<sgsOuzelSceneManager*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->setScene( sgs_GetVar<sgsOuzelScene::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelSceneManager__removeScene( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelSceneManager::_sgs_interface, (void**) &base, "sgsOuzelSceneManager.removeScene" ) ) return 0;
	sgsOuzelSceneManager* data = static_cast<sgsOuzelSceneManager*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->removeScene( sgs_GetVar<sgsOuzelScene::Handle>()(callerCtx,0) ); return 0;
}

int sgsOuzelSceneManager::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSceneManager*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSceneManager*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSceneManager*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSceneManager*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelSceneManager*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelSceneManager::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelSceneManager::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelSceneManager*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelSceneManager::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelSceneManager::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelSceneManager::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelSceneManager();
	return SGS_SUCCESS;
}

int sgsOuzelSceneManager::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelSceneManager::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "scene" ) ){ sgs_PushVar( callerCtx, getScene() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelSceneManager::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "scene" ) ){ setOrRemoveScene( sgs_GetVar<sgsOuzelScene::Handle>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelSceneManager::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelSceneManager" );
	}
	sgs_InitStringLit( callerCtx, &key, "scene" );
	sgs_PushVar( callerCtx, getScene() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	return SGS_SUCCESS;
}

int sgsOuzelSceneManager::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 84 ];
	sprintf( bfr, "sgsOuzelSceneManager (obj=%p, base=%p) %s",
		static_cast< sgsOuzelSceneManager* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nscene = " ); sgs_DumpData( callerCtx, getScene(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelSceneManager( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelSceneManager, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelSceneManager[] =
{ { "sgsUnserialize_sgsOuzelSceneManager", sgsUnserialize_sgsOuzelSceneManager } };

static sgs_RegFuncConst sgsOuzelSceneManager__sgs_funcs[] =
{
	{ "getScene", _sgs_method__sgsOuzelSceneManager__getScene },
	{ "setScene", _sgs_method__sgsOuzelSceneManager__setScene },
	{ "removeScene", _sgs_method__sgsOuzelSceneManager__removeScene },
	{ NULL, NULL },
};

static int sgsOuzelSceneManager__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelSceneManager__sgs_funcs,
		-1, "sgsOuzelSceneManager." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelSceneManager, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelSceneManager", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelSceneManager__sgs_interface =
{
	"sgsOuzelSceneManager",
	sgsOuzelSceneManager::_sgslocal_destruct, sgsOuzelSceneManager::_sgslocal_gcmark, sgsOuzelSceneManager::_sgslocal_getindex, sgsOuzelSceneManager::_sgslocal_setindex, NULL, sgsOuzelSceneManager::_sgslocal_serialize, sgsOuzelSceneManager::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelSceneManager::_sgs_interface(sgsOuzelSceneManager__sgs_interface, sgsOuzelSceneManager__sgs_ifn);


int sgsOuzelWidget::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelWidget::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWidget*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelWidget::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelWidget::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWidget*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelWidget::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelWidget::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWidget*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelWidget::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelWidget::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWidget*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelWidget::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelWidget::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelWidget*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelWidget::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelWidget::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelWidget*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelWidget::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelWidget::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelWidget::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelWidget();
	return SGS_SUCCESS;
}

int sgsOuzelWidget::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelNode::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelWidget::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "menu" ) ){ sgs_PushVar( callerCtx, getMenu() ); return SGS_SUCCESS; }
		if( !strcmp( str, "enabled" ) ){ sgs_PushVar( callerCtx, Item()->isEnabled() ); return SGS_SUCCESS; }
		if( !strcmp( str, "selected" ) ){ sgs_PushVar( callerCtx, Item()->isSelected() ); return SGS_SUCCESS; }
	}
	return sgsOuzelNode::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelWidget::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "enabled" ) ){ Item()->setEnabled( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelNode::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelWidget::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelWidget" );
	}
	sgs_InitStringLit( callerCtx, &key, "enabled" );
	sgs_PushVar( callerCtx, Item()->isEnabled() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelNode::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelWidget::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelWidget (obj=%p, base=%p) %s",
		static_cast< sgsOuzelWidget* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelNode::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\nmenu = " ); sgs_DumpData( callerCtx, getMenu(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nenabled = " ); sgs_DumpData( callerCtx, Item()->isEnabled(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nselected = " ); sgs_DumpData( callerCtx, Item()->isSelected(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 8 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelWidget( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelWidget, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelWidget[] =
{ { "sgsUnserialize_sgsOuzelWidget", sgsUnserialize_sgsOuzelWidget } };

static sgs_RegFuncConst sgsOuzelWidget__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelWidget__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelWidget__sgs_funcs,
		-1, "sgsOuzelWidget." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelNode >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelWidget, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelWidget", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelWidget__sgs_interface =
{
	"sgsOuzelWidget",
	sgsOuzelWidget::_sgslocal_destruct, sgsOuzelWidget::_sgslocal_gcmark, sgsOuzelWidget::_sgslocal_getindex, sgsOuzelWidget::_sgslocal_setindex, NULL, sgsOuzelWidget::_sgslocal_serialize, sgsOuzelWidget::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelNode::_sgs_interface,
};
_sgsInterface sgsOuzelWidget::_sgs_interface(sgsOuzelWidget__sgs_interface, sgsOuzelWidget__sgs_ifn);


static int _sgs_method__sgsOuzelMenu__addWidget( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelMenu::_sgs_interface, (void**) &base, "sgsOuzelMenu.addWidget" ) ) return 0;
	sgsOuzelMenu* data = static_cast<sgsOuzelMenu*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->addWidget( sgs_GetVar<sgsOuzelWidget::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelMenu__selectWidget( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelMenu::_sgs_interface, (void**) &base, "sgsOuzelMenu.selectWidget" ) ) return 0;
	sgsOuzelMenu* data = static_cast<sgsOuzelMenu*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->selectWidget( sgs_GetVar<sgsOuzelWidget::Handle>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzelMenu__selectNextWidget( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelMenu::_sgs_interface, (void**) &base, "sgsOuzelMenu.selectNextWidget" ) ) return 0;
	sgsOuzelMenu* data = static_cast<sgsOuzelMenu*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->selectNextWidget(  ); return 0;
}

static int _sgs_method__sgsOuzelMenu__selectPreviousWidget( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelMenu::_sgs_interface, (void**) &base, "sgsOuzelMenu.selectPreviousWidget" ) ) return 0;
	sgsOuzelMenu* data = static_cast<sgsOuzelMenu*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->selectPreviousWidget(  ); return 0;
}

int sgsOuzelMenu::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelMenu::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMenu*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelMenu::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelMenu::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMenu*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelMenu::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelMenu::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMenu*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelMenu::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelMenu::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMenu*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelMenu::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelMenu::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelMenu*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelMenu::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelMenu::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelMenu*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelMenu::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelMenu::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelMenu::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelMenu();
	return SGS_SUCCESS;
}

int sgsOuzelMenu::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelWidget::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelMenu::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelWidget::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelMenu::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelWidget::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelMenu::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelMenu" );
	}
	sgsOuzelWidget::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelMenu::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 76 ];
	sprintf( bfr, "sgsOuzelMenu (obj=%p, base=%p) %s",
		static_cast< sgsOuzelMenu* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelWidget::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelMenu( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelMenu, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelMenu[] =
{ { "sgsUnserialize_sgsOuzelMenu", sgsUnserialize_sgsOuzelMenu } };

static sgs_RegFuncConst sgsOuzelMenu__sgs_funcs[] =
{
	{ "addWidget", _sgs_method__sgsOuzelMenu__addWidget },
	{ "selectWidget", _sgs_method__sgsOuzelMenu__selectWidget },
	{ "selectNextWidget", _sgs_method__sgsOuzelMenu__selectNextWidget },
	{ "selectPreviousWidget", _sgs_method__sgsOuzelMenu__selectPreviousWidget },
	{ NULL, NULL },
};

static int sgsOuzelMenu__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelMenu__sgs_funcs,
		-1, "sgsOuzelMenu." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelWidget >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelMenu, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelMenu", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelMenu__sgs_interface =
{
	"sgsOuzelMenu",
	sgsOuzelMenu::_sgslocal_destruct, sgsOuzelMenu::_sgslocal_gcmark, sgsOuzelMenu::_sgslocal_getindex, sgsOuzelMenu::_sgslocal_setindex, NULL, sgsOuzelMenu::_sgslocal_serialize, sgsOuzelMenu::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelWidget::_sgs_interface,
};
_sgsInterface sgsOuzelMenu::_sgs_interface(sgsOuzelMenu__sgs_interface, sgsOuzelMenu__sgs_ifn);


int sgsOuzelLabel::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelLabel::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLabel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelLabel::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelLabel::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLabel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelLabel::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelLabel::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLabel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelLabel::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelLabel::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLabel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelLabel::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelLabel::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelLabel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelLabel::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelLabel::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelLabel*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelLabel::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelLabel::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelLabel::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelLabel();
	return SGS_SUCCESS;
}

int sgsOuzelLabel::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelWidget::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelLabel::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "text" ) ){ sgs_PushVar( callerCtx, Item()->getText() ); return SGS_SUCCESS; }
		if( !strcmp( str, "color" ) ){ sgs_PushVar( callerCtx, Item()->getLabelDrawable()->getColor() ); return SGS_SUCCESS; }
	}
	return sgsOuzelWidget::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelLabel::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "text" ) ){ Item()->setText( sgs_GetVar<string>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "color" ) ){ Item()->getLabelDrawable()->setColor( sgs_GetVar<Color>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelWidget::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelLabel::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelLabel" );
	}
	sgs_InitStringLit( callerCtx, &key, "text" );
	sgs_PushVar( callerCtx, Item()->getText() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "color" );
	sgs_PushVar( callerCtx, Item()->getLabelDrawable()->getColor() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelWidget::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelLabel::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 77 ];
	sprintf( bfr, "sgsOuzelLabel (obj=%p, base=%p) %s",
		static_cast< sgsOuzelLabel* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelWidget::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\ntext = " ); sgs_DumpData( callerCtx, Item()->getText(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\ncolor = " ); sgs_DumpData( callerCtx, Item()->getLabelDrawable()->getColor(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 6 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelLabel( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelLabel, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelLabel[] =
{ { "sgsUnserialize_sgsOuzelLabel", sgsUnserialize_sgsOuzelLabel } };

static sgs_RegFuncConst sgsOuzelLabel__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelLabel__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelLabel__sgs_funcs,
		-1, "sgsOuzelLabel." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelWidget >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelLabel, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelLabel", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelLabel__sgs_interface =
{
	"sgsOuzelLabel",
	sgsOuzelLabel::_sgslocal_destruct, sgsOuzelLabel::_sgslocal_gcmark, sgsOuzelLabel::_sgslocal_getindex, sgsOuzelLabel::_sgslocal_setindex, NULL, sgsOuzelLabel::_sgslocal_serialize, sgsOuzelLabel::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelWidget::_sgs_interface,
};
_sgsInterface sgsOuzelLabel::_sgs_interface(sgsOuzelLabel__sgs_interface, sgsOuzelLabel__sgs_ifn);


int sgsOuzelButton::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelButton::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelButton*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelButton::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelButton::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelButton*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelButton::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelButton::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelButton*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelButton::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelButton::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelButton*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelButton::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelButton::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelButton*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelButton::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelButton::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelButton*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelButton::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelButton::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelButton::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelButton();
	return SGS_SUCCESS;
}

int sgsOuzelButton::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelWidget::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelButton::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelWidget::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelButton::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return sgsOuzelWidget::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelButton::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelButton" );
	}
	sgsOuzelWidget::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelButton::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 78 ];
	sprintf( bfr, "sgsOuzelButton (obj=%p, base=%p) %s",
		static_cast< sgsOuzelButton* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelWidget::_sgs_dump( callerCtx, obj, depth );
		sgs_StringConcat( callerCtx, 2 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelButton( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelButton, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelButton[] =
{ { "sgsUnserialize_sgsOuzelButton", sgsUnserialize_sgsOuzelButton } };

static sgs_RegFuncConst sgsOuzelButton__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelButton__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelButton__sgs_funcs,
		-1, "sgsOuzelButton." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelWidget >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelButton, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelButton", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelButton__sgs_interface =
{
	"sgsOuzelButton",
	sgsOuzelButton::_sgslocal_destruct, sgsOuzelButton::_sgslocal_gcmark, sgsOuzelButton::_sgslocal_getindex, sgsOuzelButton::_sgslocal_setindex, NULL, sgsOuzelButton::_sgslocal_serialize, sgsOuzelButton::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelWidget::_sgs_interface,
};
_sgsInterface sgsOuzelButton::_sgs_interface(sgsOuzelButton__sgs_interface, sgsOuzelButton__sgs_ifn);


int sgsOuzelCheckBox::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCheckBox*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCheckBox*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCheckBox*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCheckBox*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelCheckBox*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelCheckBox::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelCheckBox::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelCheckBox*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelCheckBox::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelCheckBox::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelCheckBox::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelCheckBox();
	return SGS_SUCCESS;
}

int sgsOuzelCheckBox::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	sgsOuzelWidget::_sgs_gcmark( callerCtx, obj );
	return SGS_SUCCESS;
}

int sgsOuzelCheckBox::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "checked" ) ){ sgs_PushVar( callerCtx, Item()->isChecked() ); return SGS_SUCCESS; }
	}
	return sgsOuzelWidget::_sgs_getindex( callerCtx, obj );
}

int sgsOuzelCheckBox::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "checked" ) ){ Item()->setChecked( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return sgsOuzelWidget::_sgs_setindex( callerCtx, obj );
}

int sgsOuzelCheckBox::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelCheckBox" );
	}
	sgs_InitStringLit( callerCtx, &key, "checked" );
	sgs_PushVar( callerCtx, Item()->isChecked() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgsOuzelWidget::_sgsimpl_serialize( C, obj );
	return SGS_SUCCESS;
}

int sgsOuzelCheckBox::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 80 ];
	sprintf( bfr, "sgsOuzelCheckBox (obj=%p, base=%p) %s",
		static_cast< sgsOuzelCheckBox* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		sgs_PushStringLit( callerCtx, "\n[inherited] " );
		sgsOuzelWidget::_sgs_dump( callerCtx, obj, depth );
		{ sgs_PushStringLit( callerCtx, "\nchecked = " ); sgs_DumpData( callerCtx, Item()->isChecked(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 4 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelCheckBox( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelCheckBox, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelCheckBox[] =
{ { "sgsUnserialize_sgsOuzelCheckBox", sgsUnserialize_sgsOuzelCheckBox } };

static sgs_RegFuncConst sgsOuzelCheckBox__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelCheckBox__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelCheckBox__sgs_funcs,
		-1, "sgsOuzelCheckBox." );
	sgsVariable mo = sgs_GetClassInterface< sgsOuzelWidget >( C );
	sgs_ObjSetMetaObj( C, sgs_GetObjectStruct( C, -1 ), mo.get_object_struct() );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelCheckBox, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelCheckBox", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelCheckBox__sgs_interface =
{
	"sgsOuzelCheckBox",
	sgsOuzelCheckBox::_sgslocal_destruct, sgsOuzelCheckBox::_sgslocal_gcmark, sgsOuzelCheckBox::_sgslocal_getindex, sgsOuzelCheckBox::_sgslocal_setindex, NULL, sgsOuzelCheckBox::_sgslocal_serialize, sgsOuzelCheckBox::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
	sgsOuzelWidget::_sgs_interface,
};
_sgsInterface sgsOuzelCheckBox::_sgs_interface(sgsOuzelCheckBox__sgs_interface, sgsOuzelCheckBox__sgs_ifn);


static int _sgs_method__sgsOuzelTexture__initWithSize( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelTexture::_sgs_interface, (void**) &base, "sgsOuzelTexture.initWithSize" ) ) return 0;
	sgsOuzelTexture* data = static_cast<sgsOuzelTexture*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->initWithSize( sgs_GetVar<Size2>()(callerCtx,0), sgs_GetVar<uint32_t>()(callerCtx,1), sgs_GetVar<uint32_t>()(callerCtx,2), sgs_GetVar<uint32_t>()(callerCtx,3), sgs_GetVar<PixelFormat>()(callerCtx,4) )); return 1;
}

static int _sgs_method__sgsOuzelTexture__initFromFile( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelTexture::_sgs_interface, (void**) &base, "sgsOuzelTexture.initFromFile" ) ) return 0;
	sgsOuzelTexture* data = static_cast<sgsOuzelTexture*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	sgs_PushVar(callerCtx,data->initFromFile( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<uint32_t>()(callerCtx,1), sgs_GetVar<uint32_t>()(callerCtx,2), sgs_GetVar<PixelFormat>()(callerCtx,3) )); return 1;
}

int sgsOuzelTexture::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelTexture::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTexture*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelTexture::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelTexture::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTexture*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelTexture::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelTexture::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTexture*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelTexture::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelTexture::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTexture*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelTexture::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelTexture::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelTexture*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelTexture::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelTexture::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelTexture*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelTexture::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelTexture::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelTexture::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelTexture();
	return SGS_SUCCESS;
}

int sgsOuzelTexture::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelTexture::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "filename" ) ){ sgs_PushVar( callerCtx, Item()->getFilename() ); return SGS_SUCCESS; }
		if( !strcmp( str, "size" ) ){ sgs_PushVar( callerCtx, Item()->getSize() ); return SGS_SUCCESS; }
		if( !strcmp( str, "flags" ) ){ sgs_PushVar( callerCtx, Item()->getFlags() ); return SGS_SUCCESS; }
		if( !strcmp( str, "mipmaps" ) ){ sgs_PushVar( callerCtx, Item()->getMipmaps() ); return SGS_SUCCESS; }
		if( !strcmp( str, "maxAnisotropy" ) ){ sgs_PushVar( callerCtx, Item()->getMaxAnisotropy() ); return SGS_SUCCESS; }
		if( !strcmp( str, "sampleCount" ) ){ sgs_PushVar( callerCtx, Item()->getSampleCount() ); return SGS_SUCCESS; }
		if( !strcmp( str, "pixelFormat" ) ){ sgs_PushVar( callerCtx, Item()->getPixelFormat() ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearColorBuffer" ) ){ sgs_PushVar( callerCtx, Item()->getClearColorBuffer() ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearDepthBuffer" ) ){ sgs_PushVar( callerCtx, Item()->getClearDepthBuffer() ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearColor" ) ){ sgs_PushVar( callerCtx, Item()->getClearColor() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelTexture::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "size" ) ){ Item()->setSize( sgs_GetVar<Size2>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "maxAnisotropy" ) ){ Item()->setMaxAnisotropy( sgs_GetVar<uint32_t>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearColorBuffer" ) ){ Item()->setClearColorBuffer( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearDepthBuffer" ) ){ Item()->setClearDepthBuffer( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearColor" ) ){ Item()->setClearColor( sgs_GetVar<Color>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelTexture::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelTexture" );
	}
	sgs_InitStringLit( callerCtx, &key, "size" );
	sgs_PushVar( callerCtx, Item()->getSize() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "maxAnisotropy" );
	sgs_PushVar( callerCtx, Item()->getMaxAnisotropy() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "clearColorBuffer" );
	sgs_PushVar( callerCtx, Item()->getClearColorBuffer() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "clearDepthBuffer" );
	sgs_PushVar( callerCtx, Item()->getClearDepthBuffer() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "clearColor" );
	sgs_PushVar( callerCtx, Item()->getClearColor() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	return SGS_SUCCESS;
}

int sgsOuzelTexture::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 79 ];
	sprintf( bfr, "sgsOuzelTexture (obj=%p, base=%p) %s",
		static_cast< sgsOuzelTexture* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nfilename = " ); sgs_DumpData( callerCtx, Item()->getFilename(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nsize = " ); sgs_DumpData( callerCtx, Item()->getSize(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nflags = " ); sgs_DumpData( callerCtx, Item()->getFlags(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nmipmaps = " ); sgs_DumpData( callerCtx, Item()->getMipmaps(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nmaxAnisotropy = " ); sgs_DumpData( callerCtx, Item()->getMaxAnisotropy(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nsampleCount = " ); sgs_DumpData( callerCtx, Item()->getSampleCount(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\npixelFormat = " ); sgs_DumpData( callerCtx, Item()->getPixelFormat(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nclearColorBuffer = " ); sgs_DumpData( callerCtx, Item()->getClearColorBuffer(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nclearDepthBuffer = " ); sgs_DumpData( callerCtx, Item()->getClearDepthBuffer(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nclearColor = " ); sgs_DumpData( callerCtx, Item()->getClearColor(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 20 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelTexture( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelTexture, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelTexture[] =
{ { "sgsUnserialize_sgsOuzelTexture", sgsUnserialize_sgsOuzelTexture } };

static sgs_RegFuncConst sgsOuzelTexture__sgs_funcs[] =
{
	{ "initWithSize", _sgs_method__sgsOuzelTexture__initWithSize },
	{ "initFromFile", _sgs_method__sgsOuzelTexture__initFromFile },
	{ NULL, NULL },
};

static int sgsOuzelTexture__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelTexture__sgs_funcs,
		-1, "sgsOuzelTexture." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelTexture, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelTexture", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelTexture__sgs_interface =
{
	"sgsOuzelTexture",
	sgsOuzelTexture::_sgslocal_destruct, sgsOuzelTexture::_sgslocal_gcmark, sgsOuzelTexture::_sgslocal_getindex, sgsOuzelTexture::_sgslocal_setindex, NULL, sgsOuzelTexture::_sgslocal_serialize, sgsOuzelTexture::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelTexture::_sgs_interface(sgsOuzelTexture__sgs_interface, sgsOuzelTexture__sgs_ifn);


int sgsOuzelRenderer::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelRenderer::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelRenderer::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelRenderer::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelRenderer::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelRenderer::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelRenderer::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelRenderer::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelRenderer::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelRenderer::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelRenderer::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelRenderer::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelRenderer*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelRenderer::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelRenderer::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelRenderer::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelRenderer();
	return SGS_SUCCESS;
}

int sgsOuzelRenderer::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelRenderer::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "clearColorBuffer" ) ){ sgs_PushVar( callerCtx, getClearColorBuffer() ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearDepthBuffer" ) ){ sgs_PushVar( callerCtx, getClearDepthBuffer() ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearColor" ) ){ sgs_PushVar( callerCtx, getClearColor() ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearDepth" ) ){ sgs_PushVar( callerCtx, getClearDepth() ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelRenderer::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
		if( !strcmp( str, "clearColorBuffer" ) ){ setClearColorBuffer( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearDepthBuffer" ) ){ setClearDepthBuffer( sgs_GetVar<bool>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearColor" ) ){ setClearColor( sgs_GetVar<Color>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
		if( !strcmp( str, "clearDepth" ) ){ setClearDepth( sgs_GetVar<float>()( callerCtx, 1 ) ); return SGS_SUCCESS; }
	}
	return SGS_ENOTFND;
}

int sgsOuzelRenderer::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelRenderer" );
	}
	sgs_InitStringLit( callerCtx, &key, "clearColorBuffer" );
	sgs_PushVar( callerCtx, getClearColorBuffer() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "clearDepthBuffer" );
	sgs_PushVar( callerCtx, getClearDepthBuffer() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "clearColor" );
	sgs_PushVar( callerCtx, getClearColor() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	sgs_InitStringLit( callerCtx, &key, "clearDepth" );
	sgs_PushVar( callerCtx, getClearDepth() );
	sgs_SerializeObjIndex( callerCtx, key, sgs_StackItem( callerCtx, -1 ), 1 );
	sgs_Pop( callerCtx, 1 );
	sgs_Release( callerCtx, &key );
	return SGS_SUCCESS;
}

int sgsOuzelRenderer::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 80 ];
	sprintf( bfr, "sgsOuzelRenderer (obj=%p, base=%p) %s",
		static_cast< sgsOuzelRenderer* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
		obj->data, depth > 0 ? "\n{" : " ..." );
	sgs_PushString( callerCtx, bfr );
	if( depth > 0 )
	{
		{ sgs_PushStringLit( callerCtx, "\nclearColorBuffer = " ); sgs_DumpData( callerCtx, getClearColorBuffer(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nclearDepthBuffer = " ); sgs_DumpData( callerCtx, getClearDepthBuffer(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nclearColor = " ); sgs_DumpData( callerCtx, getClearColor(), depth ).push( callerCtx ); }
		{ sgs_PushStringLit( callerCtx, "\nclearDepth = " ); sgs_DumpData( callerCtx, getClearDepth(), depth ).push( callerCtx ); }
		sgs_StringConcat( callerCtx, 8 );
		sgs_PadString( callerCtx );
		sgs_PushStringLit( callerCtx, "\n}" );
		sgs_StringConcat( callerCtx, 3 );
	}
	return SGS_SUCCESS;
}

int sgsUnserialize_sgsOuzelRenderer( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelRenderer, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelRenderer[] =
{ { "sgsUnserialize_sgsOuzelRenderer", sgsUnserialize_sgsOuzelRenderer } };

static sgs_RegFuncConst sgsOuzelRenderer__sgs_funcs[] =
{
	{ NULL, NULL },
};

static int sgsOuzelRenderer__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelRenderer__sgs_funcs,
		-1, "sgsOuzelRenderer." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelRenderer, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelRenderer", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelRenderer__sgs_interface =
{
	"sgsOuzelRenderer",
	sgsOuzelRenderer::_sgslocal_destruct, sgsOuzelRenderer::_sgslocal_gcmark, sgsOuzelRenderer::_sgslocal_getindex, sgsOuzelRenderer::_sgslocal_setindex, NULL, sgsOuzelRenderer::_sgslocal_serialize, sgsOuzelRenderer::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelRenderer::_sgs_interface(sgsOuzelRenderer__sgs_interface, sgsOuzelRenderer__sgs_ifn);


static int _sgs_method__sgsOuzelFileSystem__addResourcePath( sgs_Context* callerCtx )
{
	sgsLiteObjectBase* base;
	if( !sgs_ParseMethodInh( callerCtx, sgsOuzelFileSystem::_sgs_interface, (void**) &base, "sgsOuzelFileSystem.addResourcePath" ) ) return 0;
	sgsOuzelFileSystem* data = static_cast<sgsOuzelFileSystem*>( base );
	_sgsTmpChanger<sgs_Context*> _tmpchg( data->C, callerCtx );
	data->addResourcePath( sgs_GetVar<string>()(callerCtx,0) ); return 0;
}

int sgsOuzelFileSystem::_sgs_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgslocal_destruct( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFileSystem*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_destruct( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgs_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgslocal_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFileSystem*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_gcmark( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgs_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgslocal_getindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFileSystem*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_getindex( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgs_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgslocal_setindex( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFileSystem*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_setindex( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgs_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgslocal_convert( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgs_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return _sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgslocal_serialize( sgs_Context* callerCtx, sgs_VarObj* obj ){ return static_cast<sgsOuzelFileSystem*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_serialize( callerCtx, obj ); }
int sgsOuzelFileSystem::_sgs_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return _sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelFileSystem::_sgslocal_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return static_cast<sgsOuzelFileSystem*>( static_cast<sgsLiteObjectBase*>( obj->data ) )->_sgsimpl_dump( callerCtx, obj, param ); }
int sgsOuzelFileSystem::_sgs_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgslocal_getnext( sgs_Context* callerCtx, sgs_VarObj* obj, int param ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgs_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgslocal_call( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgs_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }
int sgsOuzelFileSystem::_sgslocal_expr( sgs_Context* callerCtx, sgs_VarObj* obj ){ return SGS_ENOTSUP; }

int sgsOuzelFileSystem::_sgsimpl_destruct( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	C = callerCtx;
	this->~sgsOuzelFileSystem();
	return SGS_SUCCESS;
}

int sgsOuzelFileSystem::_sgsimpl_gcmark( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	return SGS_SUCCESS;
}

int sgsOuzelFileSystem::_sgsimpl_getindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelFileSystem::_sgsimpl_setindex( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char* str;
	if( sgs_ParseString( callerCtx, 0, &str, NULL ) )
	{
	}
	return SGS_ENOTFND;
}

int sgsOuzelFileSystem::_sgsimpl_serialize( sgs_Context* callerCtx, sgs_VarObj* obj )
{
	sgs_Variable key;
	(void) key;
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	if( obj->iface == _sgs_interface )
	{
		sgs_SerializeObject( callerCtx, 0, "sgsUnserialize_sgsOuzelFileSystem" );
	}
	return SGS_SUCCESS;
}

int sgsOuzelFileSystem::_sgsimpl_dump( sgs_Context* callerCtx, sgs_VarObj* obj, int depth )
{
	_sgsTmpChanger<sgs_Context*> _tmpchg( C, callerCtx );
	char bfr[ 82 ];
	sprintf( bfr, "sgsOuzelFileSystem (obj=%p, base=%p) %s",
		static_cast< sgsOuzelFileSystem* >( static_cast<sgsLiteObjectBase*>( obj->data ) ),
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

int sgsUnserialize_sgsOuzelFileSystem( SGS_CTX )
{
	SGS_CREATECLASS( C, NULL, sgsOuzelFileSystem, (  ) );
	return 1;
}
static sgs_RegFuncConst sgsUnserializeRFC_sgsOuzelFileSystem[] =
{ { "sgsUnserialize_sgsOuzelFileSystem", sgsUnserialize_sgsOuzelFileSystem } };

static sgs_RegFuncConst sgsOuzelFileSystem__sgs_funcs[] =
{
	{ "addResourcePath", _sgs_method__sgsOuzelFileSystem__addResourcePath },
	{ NULL, NULL },
};

static int sgsOuzelFileSystem__sgs_ifn( SGS_CTX )
{
	sgs_CreateDict( C, NULL, 0 );
	sgs_StoreFuncConsts( C, sgs_StackItem( C, -1 ),
		sgsOuzelFileSystem__sgs_funcs,
		-1, "sgsOuzelFileSystem." );
	sgs_RegFuncConsts( C, sgsUnserializeRFC_sgsOuzelFileSystem, 1 );
	sgs_RegSymbol( C, "", "sgsOuzelFileSystem", sgs_StackItem( C, -1 ) );
	return 1;
}

static sgs_ObjInterface sgsOuzelFileSystem__sgs_interface =
{
	"sgsOuzelFileSystem",
	sgsOuzelFileSystem::_sgslocal_destruct, sgsOuzelFileSystem::_sgslocal_gcmark, sgsOuzelFileSystem::_sgslocal_getindex, sgsOuzelFileSystem::_sgslocal_setindex, NULL, sgsOuzelFileSystem::_sgslocal_serialize, sgsOuzelFileSystem::_sgslocal_dump, NULL, NULL, NULL, 
	NULL,
};
_sgsInterface sgsOuzelFileSystem::_sgs_interface(sgsOuzelFileSystem__sgs_interface, sgsOuzelFileSystem__sgs_ifn);


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

static int _sgs_method__sgsOuzel__openURL( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.openURL" );
	sgs_PushVar(callerCtx,sgsOuzel::openURL( sgs_GetVar<string>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzel__addLanguage( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.addLanguage" );
	sgsOuzel::addLanguage( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<string>()(callerCtx,1) ); return 0;
}

static int _sgs_method__sgsOuzel__setLanguage( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.setLanguage" );
	sgsOuzel::setLanguage( sgs_GetVar<string>()(callerCtx,0) ); return 0;
}

static int _sgs_method__sgsOuzel__getString( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.getString" );
	sgs_PushVar(callerCtx,sgsOuzel::getString( sgs_GetVar<string>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzel__createEventHandler( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createEventHandler" );
	sgs_PushVar(callerCtx,sgsOuzel::createEventHandler( sgs_GetVar<int>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzel__createSprite( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createSprite" );
	sgs_PushVar(callerCtx,sgsOuzel::createSprite(  )); return 1;
}

static int _sgs_method__sgsOuzel__createShapeRenderer( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createShapeRenderer" );
	sgs_PushVar(callerCtx,sgsOuzel::createShapeRenderer(  )); return 1;
}

static int _sgs_method__sgsOuzel__createAnimator( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createAnimator" );
	sgs_PushVar(callerCtx,sgsOuzel::createAnimator( sgs_GetVar<float>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzel__createMove( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createMove" );
	sgs_PushVar(callerCtx,sgsOuzel::createMove( sgs_GetVar<float>()(callerCtx,0), sgs_GetVar<Vector3>()(callerCtx,1), sgs_GetVar<bool>()(callerCtx,2) )); return 1;
}

static int _sgs_method__sgsOuzel__createRotate( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createRotate" );
	sgs_PushVar(callerCtx,sgsOuzel::createRotate( sgs_GetVar<float>()(callerCtx,0), sgs_GetVar<Vector3>()(callerCtx,1), sgs_GetVar<bool>()(callerCtx,2) )); return 1;
}

static int _sgs_method__sgsOuzel__createScale( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createScale" );
	sgs_PushVar(callerCtx,sgsOuzel::createScale( sgs_GetVar<float>()(callerCtx,0), sgs_GetVar<Vector3>()(callerCtx,1), sgs_GetVar<bool>()(callerCtx,2) )); return 1;
}

static int _sgs_method__sgsOuzel__createShake( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createShake" );
	sgs_PushVar(callerCtx,sgsOuzel::createShake( sgs_GetVar<float>()(callerCtx,0), sgs_GetVar<Vector3>()(callerCtx,1), sgs_GetVar<float>()(callerCtx,2) )); return 1;
}

static int _sgs_method__sgsOuzel__createFade( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createFade" );
	sgs_PushVar(callerCtx,sgsOuzel::createFade( sgs_GetVar<float>()(callerCtx,0), sgs_GetVar<float>()(callerCtx,1), sgs_GetVar<bool>()(callerCtx,2) )); return 1;
}

static int _sgs_method__sgsOuzel__createEase( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createEase" );
	sgs_PushVar(callerCtx,sgsOuzel::createEase( sgs_GetVar<sgsOuzelAnimator::Handle>()(callerCtx,0), sgs_GetVar<int>()(callerCtx,1), sgs_GetVar<int>()(callerCtx,2) )); return 1;
}

static int _sgs_method__sgsOuzel__createRepeat( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createRepeat" );
	sgs_PushVar(callerCtx,sgsOuzel::createRepeat( sgs_GetVar<sgsOuzelAnimator::Handle>()(callerCtx,0), sgs_GetVar<uint32_t>()(callerCtx,1) )); return 1;
}

static int _sgs_method__sgsOuzel__createParallel( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createParallel" );
	sgs_PushVar(callerCtx,sgsOuzel::createParallel( sgs_GetVar<sgsVariable>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzel__createSequence( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createSequence" );
	sgs_PushVar(callerCtx,sgsOuzel::createSequence( sgs_GetVar<sgsVariable>()(callerCtx,0) )); return 1;
}

static int _sgs_method__sgsOuzel__createScene( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createScene" );
	sgs_PushVar(callerCtx,sgsOuzel::createScene(  )); return 1;
}

static int _sgs_method__sgsOuzel__createLayer( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createLayer" );
	sgs_PushVar(callerCtx,sgsOuzel::createLayer(  )); return 1;
}

static int _sgs_method__sgsOuzel__createNode( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createNode" );
	sgs_PushVar(callerCtx,sgsOuzel::createNode(  )); return 1;
}

static int _sgs_method__sgsOuzel__createCamera( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createCamera" );
	sgs_PushVar(callerCtx,sgsOuzel::createCamera(  )); return 1;
}

static int _sgs_method__sgsOuzel__createMenu( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createMenu" );
	sgs_PushVar(callerCtx,sgsOuzel::createMenu(  )); return 1;
}

static int _sgs_method__sgsOuzel__createLabel( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createLabel" );
	sgs_PushVar(callerCtx,sgsOuzel::createLabel( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<string>()(callerCtx,1), sgs_GetVar<float>()(callerCtx,2), sgs_GetVar<Color>()(callerCtx,3), sgs_GetVar<Vector2>()(callerCtx,4), callerCtx )); return 1;
}

static int _sgs_method__sgsOuzel__createButton( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createButton" );
	sgs_PushVar(callerCtx,sgsOuzel::createButton( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<string>()(callerCtx,1), sgs_GetVar<string>()(callerCtx,2), sgs_GetVar<string>()(callerCtx,3), sgs_GetVar<string>()(callerCtx,4), sgs_GetVar<string>()(callerCtx,5), sgs_GetVar<float>()(callerCtx,6), sgs_GetVar<Color>()(callerCtx,7), sgs_GetVar<Color>()(callerCtx,8), sgs_GetVar<Color>()(callerCtx,9), sgs_GetVar<Color>()(callerCtx,10), callerCtx )); return 1;
}

static int _sgs_method__sgsOuzel__createCheckBox( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createCheckBox" );
	sgs_PushVar(callerCtx,sgsOuzel::createCheckBox( sgs_GetVar<string>()(callerCtx,0), sgs_GetVar<string>()(callerCtx,1), sgs_GetVar<string>()(callerCtx,2), sgs_GetVar<string>()(callerCtx,3), sgs_GetVar<string>()(callerCtx,4) )); return 1;
}

static int _sgs_method__sgsOuzel__createTexture( sgs_Context* callerCtx )
{
	sgs_FuncName( callerCtx, "sgsOuzel.createTexture" );
	sgs_PushVar(callerCtx,sgsOuzel::createTexture(  )); return 1;
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
	{ "openURL", _sgs_method__sgsOuzel__openURL },
	{ "addLanguage", _sgs_method__sgsOuzel__addLanguage },
	{ "setLanguage", _sgs_method__sgsOuzel__setLanguage },
	{ "getString", _sgs_method__sgsOuzel__getString },
	{ "createEventHandler", _sgs_method__sgsOuzel__createEventHandler },
	{ "createSprite", _sgs_method__sgsOuzel__createSprite },
	{ "createShapeRenderer", _sgs_method__sgsOuzel__createShapeRenderer },
	{ "createAnimator", _sgs_method__sgsOuzel__createAnimator },
	{ "createMove", _sgs_method__sgsOuzel__createMove },
	{ "createRotate", _sgs_method__sgsOuzel__createRotate },
	{ "createScale", _sgs_method__sgsOuzel__createScale },
	{ "createShake", _sgs_method__sgsOuzel__createShake },
	{ "createFade", _sgs_method__sgsOuzel__createFade },
	{ "createEase", _sgs_method__sgsOuzel__createEase },
	{ "createRepeat", _sgs_method__sgsOuzel__createRepeat },
	{ "createParallel", _sgs_method__sgsOuzel__createParallel },
	{ "createSequence", _sgs_method__sgsOuzel__createSequence },
	{ "createScene", _sgs_method__sgsOuzel__createScene },
	{ "createLayer", _sgs_method__sgsOuzel__createLayer },
	{ "createNode", _sgs_method__sgsOuzel__createNode },
	{ "createCamera", _sgs_method__sgsOuzel__createCamera },
	{ "createMenu", _sgs_method__sgsOuzel__createMenu },
	{ "createLabel", _sgs_method__sgsOuzel__createLabel },
	{ "createButton", _sgs_method__sgsOuzel__createButton },
	{ "createCheckBox", _sgs_method__sgsOuzel__createCheckBox },
	{ "createTexture", _sgs_method__sgsOuzel__createTexture },
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

