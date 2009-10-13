
#include <stdlib.h>
#include <stdio.h>
#include <system/type/CharacterTable.h>

/* ========================================================================= */

Type_Class Type_CharacterTable_Class;

/* ========================================================================= */

Type_CharacterTable Type_Character_table;

/* ========================================================================= */

void pre_init_Type_CharacterTable()
{
    Type_CharacterTable_Class = new_Named_Class((Object)Type_Object_Class,
                                                L"Type_CharacterTable",
                                                create_type(0, ARRAY));
}

/* ========================================================================= */



/* ========================================================================= */

void post_init_Type_CharacterTable()
{
    Type_Character_table = NEW_ARRAYED(
            struct Type_CharacterTable_t,
            Type_Character[CHARACTER_TABLE_SIZE]);
    HEADER(Type_Character_table) = (Object)Type_CharacterTable_Class;
    Type_Character_table->size = new_Type_SmallInt(CHARACTER_TABLE_SIZE);
    int i;
    for (i = 0; i < CHARACTER_TABLE_SIZE; i++) {
        Type_Character_table->chars[i] = new_raw_Type_Character(i);
    }
}
