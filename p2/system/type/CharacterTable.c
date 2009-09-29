
#include <stdlib.h>
#include <stdio.h>
#include <system/type/CharacterTable.h>

/* ======================================================================== */

Type_Class CharacterTable_Type_Class;

/* ======================================================================== */

Type_CharacterTable Character_table;

/* ======================================================================== */

void pre_init_CharacterTable()
{
    CharacterTable_Type_Class = new_Named_Type_Class((Object)Type_Object_Type_Class, L"CharacterTable");
}

/* ======================================================================== */



/* ======================================================================== */

void post_init_CharacterTable()
{
    Character_table = NEW_ARRAYED(
            struct Type_CharacterTable_t,
            Type_Character[CHARACTER_TABLE_SIZE]);
    HEADER(Character_table) = (Object)CharacterTable_Type_Class;
    int i;
    for (i = 0; i < CHARACTER_TABLE_SIZE; i++) {
        Character_table->chars[i] = new_raw_Character(i);
    }
}
