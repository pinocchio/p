
#include <stdlib.h>
#include <stdio.h>
#include <system/type/Character.h>

/* ========================================================================= */

Type_Class Type_Character_Class;

/* ========================================================================= */

Type_Character new_raw_Type_Character(wchar_t value)
{
    NEW_OBJECT(Type_Character);
    result->value         = value;
    return result;
}


Type_Character new_Type_Character(wchar_t value)
{
    if (value < CHARACTER_TABLE_SIZE) {
        return Type_Character_table->chars[value];
    }
    return new_raw_Type_Character(value);
}

Type_Character new_Type_Character_WithInt(int value)
{
    wchar_t casted = (wchar_t)value;
    assert(((int)casted == value), 
        printf("Unicode Character \"%lc\" %i out of Range ["F_I" Byte]", 
                casted, value, sizeof(wchar_t)));
    
    return new_Type_Character(casted);
}
    

void pre_init_Type_Character()
{
    Type_Character_Class = new_Named_Class((Object)Type_Object_Class,
                                           L"Type_Character",
                                           create_type(0, CHAR));
}

/* ========================================================================= */

NATIVE1(Type_Character_equals_)
    assert1(NULL, "NYI!");
}

NATIVE0(Type_Character_asString)
    // TODO add \0 at the end
    RETURN_FROM_NATIVE(new_Type_String(&((Type_Character)self)->value));
}

NATIVE0(Type_Character_asSymbol)
    // TODO add \0 at the end
    RETURN_FROM_NATIVE(new_Type_Symbol(&((Type_Character)self)->value));
}

NATIVE0(Type_Character_asSmallInt)
    // TODO add \0 at the end
    RETURN_FROM_NATIVE(new_Type_SmallInt(((Type_Character)self)->value));
}

/* ========================================================================= */


void post_init_Type_Character()
{ 
    store_native_method(Type_Character_Class, SMB_asString,   NM_Type_Character_asString);
    store_native_method(Type_Character_Class, SMB_asSymbol,   NM_Type_Character_asSymbol);
    store_native_method(Type_Character_Class, SMB_asSmallInt, NM_Type_Character_asSmallInt);
}
