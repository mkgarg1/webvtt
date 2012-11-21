#include <gtest/gtest.h>
#include <webvtt/parser.h>

TEST( Alloc, AllocReturnsMemory ) {
  webvtt_uint *i;
  i = (webvtt_uint*)webvtt_alloc0( sizeof( webvtt_uint ) );

  ASSERT_TRUE( i != NULL );

  webvtt_free( i );
}

TEST( Alloc0, Alloc0ZerosMemory ) {
  webvtt_uint *i;
  i = (webvtt_uint*)webvtt_alloc0( sizeof( webvtt_uint ) );

  ASSERT_TRUE( i != NULL );
  EXPECT_EQ( 0, *i );

  webvtt_free( i );
}

TEST( String, InitString ) {
  webvtt_string s;

  webvtt_init_string( &s );
  ASSERT_TRUE( &s != NULL );
}
