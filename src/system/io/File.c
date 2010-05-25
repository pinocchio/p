#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <wchar.h>
#include <string.h>
#include <system/io/File.h>
#include <system/type/Boolean.h>
#include <system/type/String.h>
#include <system/number/SmallInt.h>
#include <system/type/Character.h>


/* ========================================================================= */

IO_File StandardIn;
IO_File StandardOut;
IO_File StandardError;

/* ========================================================================= */


IO_File new_IO_ReadFile()
{
    NEW_OBJECT(IO_File);
    HEADER(result) = IO_ReadFile_Class;
    result->path = empty_Type_String;
    return result;
}

IO_File new_IO_WriteFile()
{
    NEW_OBJECT(IO_File);
    HEADER(result) = IO_WriteFile_Class;
    result->path = empty_Type_String;
    return result;
}

IO_File new_IO_ReadFile_from(FILE* file)
{
    IO_File result = new_IO_ReadFile();
    assert1(file != NULL, "Cannot create a new File from NULL.");
    result->file = file;
    return result;
}

IO_File new_IO_WriteFile_from(FILE* file)
{
    IO_File result = new_IO_WriteFile();
    assert1(file != NULL, "Cannot create a new File from NULL.");
    result->file = file;
    return result;
}

/* ========================================================================= */

int IO_File_size(IO_File file) {
    assert1(file->file != NULL, "Trying to get size from invalid file.");
    long pos = ftell(file->file);
    rewind(file->file);
    int size = 0;
    char cur;
    while ((cur = fgetwc(file->file)) != WEOF) { size++; }
    fseek(file->file, pos, SEEK_SET);
    return size;
}

NATIVE0(IO_File_size)
    RETURN_FROM_NATIVE(new_Number_SmallInt(IO_File_size((IO_File)self)));
}

void IO_File_readCharacter(IO_File file, wchar_t* result) {
    *result = fgetwc(file->file);
}


int IO_File_atEnd(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    int c = fgetc(file->file);
    int result = c == EOF;
    if (!result) {
        ungetc(c, file->file);
    }
    return result;
}

NATIVE0(IO_File_atEnd)
    RETURN_FROM_NATIVE(get_bool(IO_File_atEnd((IO_File)self)));
}

Type_String IO_File_readAll(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    int size = IO_File_size(file);
    Type_String result = new_Type_String_sized(size);
    int idx;
    for (idx = 0; idx < size; idx++) {
        IO_File_readCharacter(file, &result->value[idx]);
    }
    return result;
}

NATIVE0(IO_File_readAll)
    RETURN_FROM_NATIVE(IO_File_readAll((IO_File)self));
}

Type_String IO_File_readLine(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    uns_int size = 1024;
    wchar_t * chr = (wchar_t *) PALLOC(sizeof(wchar_t)*size);
    int i = 0;
    while (1) {
        IO_File_readCharacter(file, &chr[i]);
        if (chr[i] == L'\n') {
            break;
        }
        if (++i == size) {
            wchar_t * new = (wchar_t *) PALLOC(sizeof(wchar_t)*size*2);
            int j;
            for (j = 0; j < size; j++) {
                new[j] = chr[j];
            }
            size *= 2;
            chr = new;
        }
    }
    chr[i] = L'\0';
    Type_String result = new_Type_String(chr);
    return result;
}

NATIVE0(IO_File_readLine)
    RETURN_FROM_NATIVE(IO_File_readLine((IO_File)self));
}

Type_Character IO_File_read(IO_File file) {
    assert1(file != NULL, "Invalid Argument");
    wchar_t chr;
    IO_File_readCharacter(file, &chr);
    return new_Type_Character(chr);
}

NATIVE0(IO_File_read)
   RETURN_FROM_NATIVE(IO_File_read((IO_File)self));
}

void IO_File_write_(IO_File file, Type_Character chr) {
    assert1(file != NULL, "Invalid Argument");
    assert1(chr != NULL, "Invalid Argument");
    fputwc(chr->value, file->file);
}

NATIVE1(IO_File_write_)
    // TODO assert layout, not class
    Object chr = NATIVE_ARG(0);
    ASSERT_INSTANCE_OF(chr, Type_Character_Class);
    IO_File_write_((IO_File)self, (Type_Character)chr);
    RETURN_FROM_NATIVE(self);
}

NATIVE0(IO_File_lf)
    fputwc(L'\n', ((IO_File)self)->file);
    RETURN_FROM_NATIVE(self);
}

void IO_File_writeAll_(IO_File file, Type_String string) {
    assert1(file != NULL, "Invalid Argument");
    assert1(string != NULL && string->value != NULL, "Invalid Argument");
    int i;
    for (i =0; i < string->size; i++) { 
        fputwc(string->value[i], file->file);
    }
}

NATIVE1(IO_File_writeAll_)
    Type_String str = (Type_String)NATIVE_ARG(0);
    Object tag = GETTAG(str);
    assert1(TAG_IS_LAYOUT(tag, Words), "Words-object expected!");
    IO_File_writeAll_((IO_File)self, str);
    RETURN_FROM_NATIVE(self);
}

FILE * open_file(Object path, char * mode)
{
    assert1(TAG_IS_LAYOUT(GETTAG(path), Words), "Invalid path-type");    

    char * filePath = unicode_to_ascii(((Type_Symbol)path)->value);
    FILE * file = fopen(filePath, mode);
    assert(file,
        fwprintf(stderr,
            L"%s (file: '%s', mode '%s')\n", 
            strerror(errno), filePath, mode););
    return file;
}

NATIVE1(IO_WriteFile_open_)
    FILE * file = open_file(NATIVE_ARG(0), "w");
    RETURN_FROM_NATIVE(new_IO_WriteFile_from(file));
}

NATIVE1(IO_ReadFile_open_)
    FILE * file = open_file(NATIVE_ARG(0), "r");
    RETURN_FROM_NATIVE(new_IO_ReadFile_from(file));
}

NATIVE0(IO_File_stdin)
    RETURN_FROM_NATIVE(StandardIn);
}

NATIVE0(IO_File_stdout)
    RETURN_FROM_NATIVE(StandardOut);
}

NATIVE0(IO_File_stderr)
    RETURN_FROM_NATIVE(StandardError);
}

NATIVE0(IO_File_close)
    int result = fclose(((IO_File)self)->file);
    assert(result == 0,
        fwprintf(stderr, L"%s\n", strerror(errno)););
    RETURN_FROM_NATIVE(self);
}

/* ========================================================================= */

void post_init_IO_File()
{
    /*
    TODO LAYOUT
    HEADER(((Collection_Array)IO_File_Class->layout)->values[0]) = Slot_UIntSlot_Class;
    HEADER(((Collection_Array)IO_ReadFile_Class->layout)->values[0]) = Slot_UIntSlot_Class;
    HEADER(((Collection_Array)IO_WriteFile_Class->layout)->values[0]) = Slot_UIntSlot_Class;
    */
    Collection_Dictionary natives = add_plugin(L"IO.File");
    store_native(natives, SMB_stdin  , NM_IO_File_stdin);
    store_native(natives, SMB_stdout , NM_IO_File_stdout);
    store_native(natives, SMB_stderr , NM_IO_File_stderr);
    store_native(natives, SMB_close  , NM_IO_File_close);

    store_native(natives, SMB_size      , NM_IO_File_size);
    store_native(natives, SMB_atEnd     , NM_IO_File_atEnd);
    store_native(natives, SMB_read      , NM_IO_File_read);
    store_native(natives, SMB_readLine  , NM_IO_File_readLine);
    store_native(natives, SMB_readAll   , NM_IO_File_readAll);
    
    store_native(natives, SMB_lf        , NM_IO_File_lf);
    store_native(natives, SMB_write_    , NM_IO_File_write_);
    store_native(natives, SMB_writeAll_ , NM_IO_File_writeAll_);

    store_native(natives, SMB_readOpen_  , NM_IO_ReadFile_open_);
    store_native(natives, SMB_writeOpen_ , NM_IO_WriteFile_open_);

    StandardIn    = new_IO_ReadFile_from(stdin);
    StandardOut   = new_IO_WriteFile_from(stdout);
    StandardError = new_IO_WriteFile_from(stderr);
}
