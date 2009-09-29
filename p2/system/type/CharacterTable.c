
#include <stdlib.h>
#include <stdio.h>
#include <system/type/CharacterTable.h>

/* ======================================================================== */

Type_Class Type_CharacterTable_Type_Class;

/* ======================================================================== */

Type_CharacterTable Type_Character_table;

/* ======================================================================== */

void pre_init_Type_CharacterTable()
{
    Type_CharacterTable_Type_Class = new_Named_Type_Class((Object)Type_Object_Type_Class, L"Type_CharacterTable");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_Type_CharacterTable()
{
    Type_Character_table = NEW_ARRAYED(
            struct Type_CharacterTable_t,
            Type_Character[CHARACTER_TABLE_SIZE]);
    HEADER(Type_Character_table) = (Object)Type_CharacterTable_Type_Class;
    int i;
    for (i = 0; i < CHARACTER_TABLE_SIZE; i++) {
        Type_Character_table->chars[i] = new_raw_Type_Character(i);
    }
}
