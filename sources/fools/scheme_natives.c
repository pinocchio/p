#include <model.h>
#include <bootstrap.h>
#include <scheme_natives.h>

object scheme_plus;

void bootstrap_scheme() {
    scheme_plus = symbol_known_to_the_vm("env:+");
}
