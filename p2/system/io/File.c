Type_File * StandardIn;
Type_File * StandardOut;
Type_File * NilStream;

Type_File * 
new_File()
{
    // TODO implement
    return NULL;
}

Type_File * 
new_File_FromPath(wchar_t * path)
{
    // TODO implement
    return NULL;
}

void pre_initialize_File()
{
    File_Class = new_Named_Class((Object)Object_Class, L"File");
}

/* =========================================================================*/


/* =========================================================================*/

void post_initialize_File()
{
    // TODO install methods 
}