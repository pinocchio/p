#include <model.h>
#include <stdio.h>
#include <bootstrap.h>
#include <assert.h>

int main() {

    fools_object system = bootstrap();
    nil_object nil = system->nil;
    assert(nil == system->nil);
    assert(nil != 0);

    number_object one = make_number(1);    
    printf("%i\n", one->value);

    string_object a_string = make_string("boe");
    printf("%s\n", a_string->value);

    return 0;
}
