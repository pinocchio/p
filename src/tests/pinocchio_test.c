#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <string.h>
#include <google/cmockery.h>
#include <pinocchio.h>
#include <bootstrap.h>
#include <stdlib.h>

void test_natives_dictionary_add_lookup(void**);
void test_dictionary_grow(void**);



int main(int argc, char* argv[]) {
	pinocchio_bootstrap();

	UnitTest tests[] = {
		unit_test(test_natives_dictionary_add_lookup),
		unit_test(test_dictionary_grow),
	};
	return run_tests(tests);
}


/*************
 * Dictionary
 *************/

void test_natives_dictionary_add_lookup(void **state) {
	NativeName n = new_NativeName( L"test_module", L"test_name" );
        NativesDictionary d = new_NativesDictionary();

	void *f = main; 

	NativesDictionary_store( d, n, f );
        void *native = NativesDictionary_lookup( d, n );

        assert_int_equal( native, f );
}

void test_dictionary_grow(void **state) {
        IdentityDictionary d = new_IdentityDictionary();
	void *f = main; 
	for( int i= 0; i<200; i++)
	{
		wchar_t str[] = { (int)'0'+(i/1000), (int)'0'+(i/100%100), (int)'0'+(i/10%10), (int)'0'+(i%10), 0 };
		IdentityDictionary_store(d, new_Symbol(str), f );
		f++;
	}
	f--;

	fwprintf(stderr, L"dictionary size:%d\n",((SmallInteger)d->size)->value);
	assert_true( ((SmallInteger)d->size)->value > 199 );
	
	void *fr = IdentityDictionary_lookup( d, new_Symbol(L"0000") );
	fwprintf(stderr, L"read first entry:%d\n",fr);
	assert_int_equal( fr, main );
	
	fr = IdentityDictionary_lookup( d, new_Symbol(L"0199") );
	fwprintf(stderr, L"read last entry:%d\n",fr);
	assert_int_equal( fr, f );

	for( int i= 199; i>=0; i--)
	{
		wchar_t str[] = { (int)'0'+(i/1000), (int)'0'+(i/100%100), (int)'0'+(i/10%10), (int)'0'+(i%10), 0 };
		fr = IdentityDictionary_lookup( d, new_Symbol(str) );
		assert_int_equal( fr, f );
		f--;
	}
}

