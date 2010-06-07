#include <stdlib.h>
#include <stdio.h>
#include <system/type/CharacterTable.h>

/* ========================================================================= */

Array character_table;

/* ========================================================================= */

void post_init_CharacterTable()
{
    character_table =
        (Array)instantiate_sized(CharacterTable_Class,
                                            CHARACTER_TABLE_SIZE);
    int i;
    for (i = 0; i < CHARACTER_TABLE_SIZE; i++) {
        character_table->values[i] = (Object)new_Character_raw(i);
    }
}
