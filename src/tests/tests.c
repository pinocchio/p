#include <tests/pinocchio_test.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <string.h>
#include <google/cmockery.h>
#include <stdlib.h>

void test_natives_dictionary_add_lookup(void**);
void test_dictionary_initial_grow(void**);
void test_dictionary_huge(void**);
void test_dictionary(void**);



int pinocchio_run_tests() {
	UnitTest tests[] = {
		unit_test(test_natives_dictionary_add_lookup),
		unit_test(test_dictionary),
		unit_test(test_dictionary_huge),
		unit_test(test_dictionary_initial_grow),
	};
	return run_tests(tests);
}


/*************
 * Dictionary
 *************/

void test_natives_dictionary_add_lookup(void **state) {
	NativeName n = new_NativeName( L"test_module", L"test_name" );
        NativesDictionary d = new_NativesDictionary();

	void *f = (void*)123; 

	NativesDictionary_store( d, n, f );
        void *native = NativesDictionary_lookup( d, n );

        assert_int_equal( native, f );
}


void test_dictionary_with(int size ) {
        IdentityDictionary d = new_IdentityDictionary();
	
	void *f = (void *)1; 
	for( int i= 0; i < size; i++)
	{
		wchar_t str[] = { (int)'0'+(i/1000), (int)'0'+(i/100%100), (int)'0'+(i/10%10), (int)'0'+(i%10), 0 };
		IdentityDictionary_store(d, new_Symbol(str), f );
		f++;
	}
	f--;

	void *fr = IdentityDictionary_lookup( d, new_Symbol(L"0000") );
	assert_int_equal( fr, 1 );
	
	for( int i= size-1; i>=0; i--)
	{
		wchar_t str[] = { (int)'0'+(i/1000), (int)'0'+(i/100%100), (int)'0'+(i/10%10), (int)'0'+(i%10), 0 };
		fr = IdentityDictionary_lookup( d, new_Symbol(str) );
		assert_int_equal( fr, i+1 );
	}
}

void test_dictionary(void **state) {
	test_dictionary_with(5);
}

void test_dictionary_initial_grow(void **state) {
	test_dictionary_with(30);
}

void test_dictionary_huge(void **state) {
	test_dictionary_with(3000);
}
