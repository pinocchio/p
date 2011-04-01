#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <string.h>
#include <google/cmockery.h>
#include <pinocchio.h>
#include <bootstrap.h>

void test_natives_dictionary_add_lookup(void**);



int main(int argc, char* argv[]) {
	pinocchio_bootstrap();

	UnitTest tests[] = {
		unit_test(test_natives_dictionary_add_lookup),
	};
	return run_tests(tests);
}


/*************
 * Dictionary
 *************/

void test_natives_dictionary_add_lookup(void **state) {
	NativeName n = new_NativeName( L"test_module", L"test_name" );
        NativesDictionary d = new_NativesDictionary();
        
	NativesDictionary_store( d, n, NULL );
        void *native = NativesDictionary_lookup( d, n );

        assert_int_equal( native, NULL );
}
