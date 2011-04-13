#ifdef UNIT_TESTING

#include <tests/pinocchio_test.h>

// Redirect assert to mock_assert() so assertions can be caught by cmockery.
#ifdef assert
#undef assert
#endif // assert
#define assert(expression) \
    mock_assert((int)(expression), #expression, __FILE__, __LINE__)
void mock_assert(const int result, const char* expression, const char *file,
                 const int line);

int main(int argc, char* argv[]) {
	pinocchio_bootstrap();

	//List all Tests here:
        UnitTest tests[] = {
                unit_test(test_symbol_table_can_grow),
                unit_test(test_symbol_hashing_works),
                unit_test(test_natives_dictionary_can_store_and_lookup),
                unit_test(test_identity_dictionary_can_store_and_lookup),
                unit_test(test_identity_dictionary_can_be_huge),
                unit_test(test_identity_dictionary_can_do_initital_grow),
                unit_test(test_smallinteger_has_native_plus),
                unit_test(test_natives_can_be_installed),
                unit_test(test_identity_dictionary_can_override_a_value),
		unit_test(test_interpreter_can_call_native),
		unit_test(test_interpreter_can_call_methods),
        };
        return run_tests(tests);
}

#endif //UNIT_TESTING
