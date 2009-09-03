
typedef struct Type_SmallInt {
    int             value;
} Type_SmallInt;

Type_SmallInt * new_SmallInt(int value);

void pre_initialize_Type_SmallInt();
void post_initialize_Type_SmallInt();


#define INT_CACHE_LOWER -1
#define INT_CACHE_UPPER 127