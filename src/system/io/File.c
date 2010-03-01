#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <wchar.h>
#include <system/io/File.h>
#include <system/type/Boolean.h>
#include <system/type/String.h>
#include <system/type/SmallInt.h>
#include <system/type/Character.h>


/* ========================================================================= */

Type_Class IO_File_Class;

/* ========================================================================= */


IO_File new_IO_File()
{
    NEW_OBJECT(IO_File);
    result->path = empty_Type_String;
    return result;
}

IO_File new_IO_File_fromFile(FILE* file)
{
    IO_File result = new_IO_File();
    assert1(file != NULL, "Cannot create a new File from NULL.");
    result->file = file;
    return result;
}


IO_File new_IO_File_fromPath(const wchar_t * path, char * mode)
{
    IO_File result = new_IO_File();
    result->file = fopen(unicode_to_ascii(path), mode);
    result->path = new_Type_String(path);
    assert(result->file != NULL, 
        printf("Could not create File for path \"%ls\"", path));
    return result;
}

void pre_init_IO_File()
{
    // TODO check if this makes sense.
    IO_File_Class = new_Class_named((Object)Type_Object_Class,
                                    L"File",
                                    CREATE_OBJECT_TAG(IO_FILE));
}

/* ========================================================================= */

char* unicode_to_ascii(const wchar_t* str) {
    int len = wcslen(str);
    char* charname = (char*)PALLOC(sizeof(char[len]));
    assert1(wcstombs(charname, str, len) == len, "String not ASCII compatible.");
    return charname;
}

int IO_File_size(IO_File file) {
    assert1(file->file != NULL, "Trying to get size from invalid file.");
    long pos = ftell(file->file);
    rewind(file->file);
    char cur;
    int size = 0;
    while ((cur = fgetc(file->file)) != EOF) {
        if (!(cur & 1<<7) || (cur & 1<<6)) {
            size++;
        }
    }
    fseek(file->file, pos, SEEK_SET);
    return size;
}

NATIVE0(IO_File_size)
    RETURN_FROM_NATIVE(new_Type_SmallInt(IO_File_size((IO_File)self)));
}

void IO_File_readCharacter(IO_File file, wchar_t* result) {
    assert1(file->file != NULL, "Trying to read UTF8 char from invalid file.")
    int first;
    assert1((first = fgetc(file->file)) != EOF, "Reading at end of file.")
    *result = first;
    if (first & 1<<7) {
        assert1(first & 1<<6, "Non UTF-8 character found.");
        int i;
        // we can only grok UTF8 up to wchar_t/byte bytes
        for (i = 0; i < sizeof(wchar_t) - 1; i++) {
            if (first & 1<<(6-i)) {
                *result <<= 6;
                int next = fgetc(file->file);
                assert1((next & 1<<7) && !(next & 1<<6),
                        "Invalid follow-up byte in UTF-8 character.");
                *result += (next ^ 1<<7);
                continue;
            }
            goto finally;
        }
        /* In case we read sizeof(wchar_t) bytes, we check if the next one
         * should be part of the current unicode character. If so, we fail.
         */
        assert1(!(first & 1<<(6-1)),
                   "Non UTF-8 character or too big for system's Unicode.") 
        /* If not, just continue. */
    finally:
        *result &= (1<<((i+1)*6-i)) - 1;
    }
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

void IO_File_writeAll_(IO_File file, Type_String string) {
    assert1(file != NULL, "Invalid Argument");
    assert1(string != NULL && string->value != NULL, "Invalid Argument");
    int i;
    for (i =0; i<string->size; i++) { 
        fputwc(string->value[i], file->file);
    }
}

NATIVE1(IO_File_writeAll_)
    Type_String str = (Type_String)NATIVE_ARG(0);
    IO_File_writeAll_((IO_File)self, str);
    RETURN_FROM_NATIVE(self);
}

NATIVE1(IO_File_open_)
    
}

/* ========================================================================= */

void post_init_IO_File()
{
    store_native_method(IO_File_Class, SMB_size,      NM_IO_File_size);
    store_native_method(IO_File_Class, SMB_atEnd,     NM_IO_File_atEnd);
    store_native_method(IO_File_Class, SMB_write_,    NM_IO_File_write_);
    store_native_method(IO_File_Class, SMB_writeAll_, NM_IO_File_writeAll_);
    store_native_method(IO_File_Class, SMB_read,      NM_IO_File_read);
    store_native_method(IO_File_Class, SMB_readAll,   NM_IO_File_readAll);
}
