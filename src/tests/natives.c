#include <tests/pinocchio_test.h>

void test_smallinteger_has_native_plus(void **state)
{
	native si_plus = lookup_native( new_NativeName( L"SmallInteger", L"plus" ) );
	assert_int_not_equal( si_plus, NULL );
}


NATIVE(foo, bar)
END_NATIVE

void test_natives_can_be_installed(void **state)
{
	native f = &NM_foo_bar;
	INSTALL_NATIVE(foo, bar);
	native native = lookup_native( new_NativeName( L"foo", L"bar" ) );
        assert_int_equal( native, f );
}
