#ifndef TYPE_CHARACTER
#define TYPE_CHARACTER

/* ========================================================================== */

typedef struct Type_Character {
    wchar_t value;
} Type_Character;

extern Type_Class * Character_Class;
extern Type_Character * new_Character(wchar_t value);

/* ========================================================================== */


/* ========================================================================== */

extern void pre_initialize_Character();
extern void post_initialize_Character();

#endif // TYPE_CHARACTER
