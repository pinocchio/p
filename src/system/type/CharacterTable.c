
#include <stdlib.h>
#include <stdio.h>
#include <system/type/CharacterTable.h>

/* ========================================================================= */

DECLARE_CLASS(Type_CharacterTable);

/* ========================================================================= */

Type_CharacterTable Type_Character_table;

/* ========================================================================= */

void pre_init_Type_CharacterTable()
{
    Type_CharacterTable_Class = new_Class_named((Object)Type_Object_Class,
                                                L"Type_CharacterTable",
                                                create_layout(0, ARRAY));
    REFER_TO(Type_CharacterTable);
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
        Type_Character_table->chars[i] = new_Type_Character_raw(i);
    }
}
