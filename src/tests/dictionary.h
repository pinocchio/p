#ifndef TESTS_DICTIONARY_H
#define TESTS_DICTIONARY_H

extern void test_natives_dictionary_can_store_and_lookup(void **state);

extern void test_identity_dictionary_can_store_and_lookup(void **state);

extern void test_identity_dictionary_can_do_initital_grow(void **state);

extern void test_identity_dictionary_can_be_huge(void **state);

#endif // TESTS_DICTIONARY_H
