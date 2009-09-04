Type_Character ** Character_cache;

Type_Character * 
new_raw_Character(wchar_t value)
{
    Type_Character * result = NEW(Type_Character);
    HEADER(result)          = (Object)Character_Class;
    result->value           = value;
    // TODO add character table here for caching
    return result;
}


Type_Character * 
new_Character(wchar_t value)
{
    if (value < CHARACTER_CACHE_SIZE) {
        return Character_cache[value];
    }
    return new_raw_Character(value);
}
    

void post_initialize_Character()
{ 
    Character_cache = (Type_Character **)PALLOC(sizeof(Type_Character*[CHARACTER_CACHE_SIZE]));
    
    int i;
    for (i = 0; i < CHARACTER_CACHE_SIZE; i++) {
        Character_cache[i] = new_raw_Character(i);
    }
}

/* ======================================================================== */

void Character_toString()
{
    // TODO implement
}

void Character_toSymbol()
{
    // TODO implement
}

void Character_toSmallInt()
{
    // TODO implement
}

/* ======================================================================== */

void pre_initialize_Character()
{
    Character_Class = new_Named_Class((Object)Object_Class, L"Character");
}
