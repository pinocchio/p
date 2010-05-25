#include <stdlib.h>
#include <stdio.h>
#include <system/type/CharacterTable.h>

/* ========================================================================= */

Collection_Array character_table;

/* ========================================================================= */

void post_init_Type_CharacterTable()
{
    character_table =
        (Collection_Array)instantiate_sized(Type_CharacterTable_Class,
                                            CHARACTER_TABLE_SIZE);
    int i;
    for (i = 0; i < CHARACTER_TABLE_SIZE; i++) {
        character_table->values[i] = (Object)new_Type_Character_raw(i);
    }
}
