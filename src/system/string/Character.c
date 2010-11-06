#include <stdlib.h>
#include <stdio.h>
#include <pinocchio.h>

/* ========================================================================= */

Character new_Character_raw(wchar_t value)
{
    NEW_OBJECT(Character);
    result->value = value;
    return result;
}


Character new_Character(wchar_t value)
{
    DT(CHARACTER_NEW, value);
#ifndef NO_CHAR_CACHE
    if (value < CHARACTER_TABLE_SIZE) {
        DT(CHARACTER_CACHEHIT, value);
        return (Character)character_table->values[value];
    }
#endif //NO_CHAR_CACHE
    DT(CHARACTER_CACHEMISS, value);
    return new_Character_raw(value);
}

Character new_Character_fromInt(long value)
{
    wchar_t casted = (wchar_t)value;
    assert(((long)casted == value), 
        printf("Unicode Character \"%lc\" %li out of Range [%li Byte]", 
                casted, value, sizeof(wchar_t)));
    
    return new_Character(casted);
}
    
/* ========================================================================= */

/*NATIVE1(Character_equals_)
    NYI;
}*/

NATIVE0(Character_hash)
    RETURN_FROM_NATIVE(new_SmallInt(((Character)self)->value));
}

NATIVE0(Character_asString)
    const wchar_t str[2] = { ((Character)self)->value, '\0' };
    RETURN_FROM_NATIVE(new_String(str));
}

NATIVE0(Character_asSymbol)
    const wchar_t str[2] = { ((Character)self)->value, '\0' };
    RETURN_FROM_NATIVE(raw_Symbol(str));
}

NATIVE0(Character_asSmallInt)
    RETURN_FROM_NATIVE(new_SmallInt(((Character)self)->value));
}

/* ========================================================================= */


void post_init_Character()
{ 
    Character_Class->layout = character_layout;

    PLUGIN natives = add_plugin(L"Type.Character");
    store_native(natives, L"hash",       NM_Character_hash);
    store_native(natives, L"asString",   NM_Character_asString);
    store_native(natives, L"asSymbol",   NM_Character_asSymbol);
    store_native(natives, L"asSmallInt", NM_Character_asSmallInt);
}
