#include <model.h>
#include <system/number.h>
#include <system/string.h>
#include <stdio.h>
#include <bootstrap.h>
#include <assert.h>
#include <wchar.h>

int main() {

    fools_object system = bootstrap();
    nil_object nil = system->nil;
    assert(nil == system->nil);
    assert(nil != 0);

    number_object one = make_number(1);    
    wprintf(L"%i\n", one->value);

    string_object a_string = make_string(L"boe");
    wprintf(L"%ls\n", a_string->value);

    return EXIT_SUCCESS;
}
