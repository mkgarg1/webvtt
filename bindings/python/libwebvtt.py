#!/usr/bin/env python

from ctypes import *

libwebvtt = cdll.LoadLibrary( '/Users/dave/repos/webvtt/src/libwebvtt/.libs/libwebvtt.dylib' )

#-----------------------------------------------------------------------------------------
# include/util.h
#-----------------------------------------------------------------------------------------
webvtt_int8 = c_int8
webvtt_int16 = c_int16
webvtt_int32 = c_int32
webvtt_int64 = c_int64
webvtt_uint8 = c_uint8
webvtt_uint16 = c_uint16
webvtt_uint32 = c_uint32
webvtt_uint64 = c_uint64

webvtt_int = c_int
webvtt_char = c_char
webvtt_short = c_short
webvtt_long = c_long
webvtt_longlong = c_longlong
webvtt_uint = c_uint
webvtt_uchar = c_uint8
webvtt_ushort = c_ushort
webvtt_ulong = c_ulong
webvtt_ulonglong = c_ulonglong
webvtt_byte = webvtt_int8
webvtt_bool = webvtt_int
webvtt_length = webvtt_uint32

#TODO
#typedef void * (WEBVTT_CALLBACK *webvtt_alloc_fn_ptr)( void *userdata, webvtt_uint nbytes );
#typedef void (WEBVTT_CALLBACK *webvtt_free_fn_ptr)( void *userdata, void *pmem );

#WEBVTT_EXPORT void *webvtt_alloc( webvtt_uint nb );
#WEBVTT_EXPORT void *webvtt_alloc0( webvtt_uint nb );
#WEBVTT_EXPORT void webvtt_free( void *data );
#WEBVTT_EXPORT void webvtt_set_allocator( webvtt_alloc_fn_ptr alloc, webvtt_free_fn_ptr free, void *userdata );

# XXX: need to confirm this type...
webvtt_status = c_uint32
( WEBVTT_SUCCESS, WEBVTT_UNFINISHED,
  WEBVTT_PARSE_ERROR, WEBVTT_OUT_OF_MEMORY,
  WEBVTT_INVALID_PARAM, WEBVTT_NOT_SUPPORTED ) = ( 0, -1, -2, -3, -4, -5 )


#-----------------------------------------------------------------------------------------
# include/string.h
#-----------------------------------------------------------------------------------------
webvtt_wchar = webvtt_uint16

class webvtt_utf8_reader_t( Structure ):
    _fields_ = [ ( "uc", webvtt_uint32 ),
                 ( "bytes_left", webvtt_uint32 ),
                 ( "min_uc", webvtt_uint32 ),
                 ( "nc", webvtt_uint32 ) ]
webvtt_utf8_reader = POINTER( webvtt_utf8_reader_t )

class webvtt_string_t( Structure ):
    _fields_ = [ ( "alloc", webvtt_uint32 ),
                 ( "length", webvtt_uint32 ),
                 ( "text", POINTER( webvtt_wchar ) ),
                 ( "array", POINTER( webvtt_wchar ) ) ]
webvtt_string = POINTER( webvtt_string_t )

webvtt_string_new = libwebvtt.webvtt_string_new
webvtt_string_new.argtypes = [ webvtt_uint32, POINTER( webvtt_string ) ]
webvtt_string_new.restype = webvtt_status

webvtt_string_delete = libwebvtt.webvtt_string_delete
webvtt_string_delete.argtypes = [ webvtt_string ]
webvtt_string_delete.restype = None

webvtt_string_append_utf8 = libwebvtt.webvtt_string_append_utf8
webvtt_string_append_utf8.argtypes = [
    POINTER( webvtt_string ),
    POINTER( webvtt_byte ),
    POINTER( webvtt_uint ),
    webvtt_uint,
    webvtt_utf8_reader
]
webvtt_string_append_utf8.restype = webvtt_status


# testing...
s = webvtt_string()
ret = webvtt_string_new( 5, byref( s ) )
print ret, s

pos = webvtt_uint()

buf = bytearray(3)
mytype = webvtt_byte * 3
h = mytype.from_buffer( buf )

ret = webvtt_string_append_utf8( byref( s ), h, byref( pos ), 4, None )
print ret, s, s[0].length


# Export types
__all__ = [

'webvtt_int8', 'webvtt_int16', 'webvtt_int32', 'webvtt_int64','webvtt_uint8',
'webvtt_uint16', 'webvtt_uint32', 'webvtt_uint64','webvtt_int', 'webvtt_char',
'webvtt_short', 'webvtt_long', 'webvtt_longlong','webvtt_uint', 'webvtt_uchar',
'webvtt_ushort', 'webvtt_ulong', 'webvtt_ulonglong', 'webvtt_byte', 'webvtt_bool',
'webvtt_length', 'webvtt_status', 'WEBVTT_SUCCESS', 'WEBVTT_UNFINISHED',
'WEBVTT_PARSE_ERROR', 'WEBVTT_OUT_OF_MEMORY', 'WEBVTT_INVALID_PARAM',
'WEBVTT_NOT_SUPPORTED',

'webvtt_wchar', 'webvtt_utf8_reader_t', 'webvtt_utf8_reader', 'webvtt_string_t',
'webvtt_string', 'webvtt_string_new', 'webvtt_string_delete', 'webvtt_string_append_utf8'

]
