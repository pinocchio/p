#include <stdlib.h>
#include <stdio.h>
#include <system/type/Character.h>

/* ========================================================================= */

Type_Character new_Type_Character_raw(wchar_t value)
{
    NEW_OBJECT(Type_Character);
    result->value = value;
    return result;
}


Type_Character new_Type_Character(wchar_t value)
{
    if (value < CHARACTER_TABLE_SIZE) {
        return (Type_Character)character_table->values[value];
    }
    return new_Type_Character_raw(value);
}

Type_Character new_Type_Character_fromInt(int value)
{
    wchar_t casted = (wchar_t)value;
    assert(((int)casted == value), 
        printf("Unicode Character \"%lc\" %i out of Range [%"F_I"i Byte]", 
                casted, value, sizeof(wchar_t)));
    
    return new_Type_Character(casted);
}
    
/* ========================================================================= */

/*NATIVE1(Type_Character_equals_)
    NYI;
}*/

NATIVE0(Type_Character_hash)
    RETURN_FROM_NATIVE(new_Number_SmallInt(((Type_Character)self)->value));
}

NATIVE0(Type_Character_asString)
    const wchar_t str[2] = { ((Type_Character)self)->value, '\0' };
    RETURN_FROM_NATIVE(new_Type_String(str));
}

NATIVE0(Type_Character_asSymbol)
    const wchar_t str[2] = { ((Type_Character)self)->value, '\0' };
    RETURN_FROM_NATIVE(new_Type_Symbol(str));
}

NATIVE0(Type_Character_asSmallInt)
    RETURN_FROM_NATIVE(new_Number_SmallInt(((Type_Character)self)->value));
}

/* ========================================================================= */


void post_init_Type_Character()
{ 
    Collection_Dictionary natives = add_plugin(L"Type.Character");
    store_native(natives, SMB_hash,       NM_Type_Character_hash);
    store_native(natives, SMB_asString,   NM_Type_Character_asString);
    store_native(natives, SMB_asSymbol,   NM_Type_Character_asSymbol);
    store_native(natives, SMB_asSmallInt, NM_Type_Character_asSmallInt);
}
