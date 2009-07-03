#include <system.h>
#include <scheme/symbols.h>

// Global symbols, readable format
// General purpose
object EVAL;
object PRE_EVAL_ENV;
// Variable
object ASSIGN_IN;
object FETCH_FROM;
// Environment
object STORE_AT_IN;
object SUBSCOPE_KEY;
object SCOPE_KEY;
object SET_PARENT;
object PARENT;
// Iscope_class
object NEW_SIZE;
// Iscope
object IAPPLY;
object APPLY_IN;
object SCOPE;
object SHIFT;
// Icapture
object INSTANCE;
// Iassign
object TO_EXPRESSION;
// Icall
object TO_SIZED;
// Ifixed
object OBJECT_AT;
object OBJECT_AT_PUT;
object NEW;
object SIZED;
object DELEGATE;
object SIZE;
object DISPATCH_DELEGATE_SIZE;
object SET_DISPATCH_DELEGATE;
object WITH_SIZE;
// File
object ON;
object READ;
object END;
object WRITE;
object READ_ALL;

void bootstrap_scheme_symbols() {
    // Ensure all symbols used by the VM are bootstrapped.
    define_symbol(EVAL,                     L"eval");
    define_symbol(PRE_EVAL_ENV,             L"eval:");
    define_symbol(STORE_AT_IN,              L"store:at:in:");
    define_symbol(SUBSCOPE_KEY,             L"subScope:key:");
    define_symbol(SCOPE_KEY,                L"scope:key:");
    define_symbol(SET_PARENT,               L"parent:");
    define_symbol(PARENT,                   L"parent");
    define_symbol(IAPPLY,                   L"iapply:");
    define_symbol(APPLY_IN,                 L"apply:in:");
    define_symbol(SCOPE,                    L"scope");
    define_symbol(OBJECT_AT,                L"objectAt:");
    define_symbol(OBJECT_AT_PUT,            L"objectAt:put:");
    define_symbol(NEW,                      L"basicNew");
    define_symbol(SIZED,                    L"basicNew:");
    define_symbol(DELEGATE,                 L"delegate");
    define_symbol(SET_DISPATCH_DELEGATE,    L"dispatch:delegate:");
    define_symbol(SIZE,                     L"size");
    define_symbol(WITH_SIZE,                L"size:");
    define_symbol(NEW_SIZE,                 L"new:size:");
    define_symbol(DISPATCH_DELEGATE_SIZE,   L"dispatch:delegate:size:");
    define_symbol(SHIFT,                    L"shift");
    define_symbol(INSTANCE,                 L"instance");
    define_symbol(TO_EXPRESSION,            L"to:expression:");
    define_symbol(TO_SIZED,                 L"to:sized:");
    define_symbol(ON,                       L"on:");
    define_symbol(READ,                     L"readChar");
    define_symbol(WRITE,                    L"writeChar:");
    define_symbol(END,                      L"atEnd");
    define_symbol(READ_ALL,                 L"readAllChars");
}
