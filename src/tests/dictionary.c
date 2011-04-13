#include <tests/pinocchio_test.h>

void test_natives_dictionary_can_store_and_lookup(void **state) {
	NativeName n = new_NativeName( L"test_module", L"test_name" );
        NativesDictionary d = new_NativesDictionary();

	void *f = (void*)123; 

	NativesDictionary_store( d, n, f );
        void *native = NativesDictionary_lookup( d, n );

        assert_int_equal( native, f );
}

void test_identity_dictionary_can_override_a_value(void **state) {
        IdentityDictionary d = new_IdentityDictionary();
	IdentityDictionary_store(d, new_Symbol(L"blabli3$i"), (Object)4 );
        assert_int_equal( IdentityDictionary_lookup( d, new_Symbol(L"blabli3$i") ), 4 );
	IdentityDictionary_store(d, new_Symbol(L"blabli3$i"), (Object)5 );
        assert_int_equal( IdentityDictionary_lookup( d, new_Symbol(L"blabli3$i") ), 5 );
	assert_int_equal( d->size->value, 1 );
}


void test_identity_dictionary_with(IdentityDictionary d, int size) {
	//Generate some entries
	void *f = (void *)1; 
	for( int i= 0; i < size; i++)
	{
		//convert i to a string that can be used as key
		wchar_t str[] = { (int)'0'+(i/1000), (int)'0'+(i/100%100), (int)'0'+(i/10%10), (int)'0'+(i%10), 0 };
		IdentityDictionary_store(d, new_Symbol(str), f );
		f++;
	}
	f--;

	//See if the first entry is in the dictionary
	void *fr = IdentityDictionary_lookup( d, new_Symbol(L"0000") );
	assert_int_equal( fr, 1 );
	
	//See if all entries are there
	for( int i= size-1; i>=0; i--)
	{
		wchar_t str[] = { (int)'0'+(i/1000), (int)'0'+(i/100%100), (int)'0'+(i/10%10), (int)'0'+(i%10), 0 };
		fr = IdentityDictionary_lookup( d, new_Symbol(str) );
		assert_int_equal( fr, i+1 );
	}
}

void test_identity_dictionary_can_store_and_lookup(void **state) {
        IdentityDictionary d = new_IdentityDictionary();
	test_identity_dictionary_with(d,5);
}

void test_identity_dictionary_can_do_initital_grow(void **state) {
        IdentityDictionary d = new_IdentityDictionary();
	
	//before initital grow there should be 1 bucket
	int maxLinear = d->maxLinear->value;
	test_identity_dictionary_with(d,maxLinear-1);
        assert_int_equal( d->buckets->size, 1 );
	
	//after initital grow there should be more than one bucket
	test_identity_dictionary_with(d,maxLinear);
        int size = d->buckets->size;
        assert_true( size > 1 );

        //another add should not trigger yet another grow
	test_identity_dictionary_with(d,maxLinear+1);
        assert_int_equal( d->buckets->size, size );
}

void test_identity_dictionary_can_be_huge(void **state) {
        IdentityDictionary d = new_IdentityDictionary();
	test_identity_dictionary_with(d,9999);
}

