#include <system.h>
#include <thread.h>
#include <stdio.h>
#include <wchar.h>
#include <scheme/natives.h>

static int utf8_size(FILE* fp) {
    error_guard(fp != NULL, "Trying to get size from invalid file.");
    long pos = ftell(fp);
    rewind(fp);
    char cur;
    int size = 0;
    while ((cur = fgetc(fp)) != EOF) {
        if (!(cur & 1<<7) || (cur & 1<<6)) {
            size++;
        }
    }
    fseek(fp, pos, SEEK_SET);
    return size;
}
 
static void utf8_read_char(FILE* fp, wchar_t* result) {
    error_guard(fp != NULL, "Trying to read UTF8 char from invalid file.")
    int first;
    error_guard((first = fgetc(fp)) != EOF, "Reading at end of file.")
    *result = first;
    if (first & 1<<7) {
        error_guard(first & 1<<6, "Non UTF-8 character found.");
        int i;
        // we can only grok UTF8 up to wchar_t/byte bytes
        for (i = 0; i < sizeof(wchar_t) - 1; i++) {
            if (first & 1<<(6-i)) {
                *result <<= 6;
                int next = fgetc(fp);
                error_guard((next & 1<<7) && !(next & 1<<6),
                    "Invalid follow-up byte in UTF-8 character.");
                *result += (next ^ 1<<7);
                continue;
            }
            goto finally;
        }
        /* In case we read sizeof(wchar_t) bytes, we check if the next one
         * should be part of the current unicode character. If so, we fail.
         */
        error_guard(!(first & 1<<(6-1)),
            "Non UTF-8 character or too big for system's Unicode.") 
        /* If not, just continue. */
        finally:
            *result &= (1<<((i+1)*6-i)) - 1;
    }
}

static int file_at_end(FILE* fp) {
    int c = fgetc(fp);
    int result = c == EOF;
    if (!result) {
        ungetc(c, fp);
    }
    return result;
}

static string_object utf8_read_all(FILE* fp) {
    int size = utf8_size(fp);
    string_object result = make_string_sized(size);
    int idx;
    for (idx = 0; idx < size; idx++) {
        utf8_read_char(fp, &result->value[idx]);
    }
    return result;
}

static void inline infile_read() {
    context_object context = get_context();
    infile_object file     = context->self.infile;
    chr_object result      = make_empty_char();
    FILE* fp = file->file;
    utf8_read_char(fp, &result->value);
    return_from_context(context, (object)result);
}

with_pre_eval1(outfile_write, context, w_chr,
    // make the compiler warning disappear
    if (0) { w_chr = w_chr; }
)

static void inline infile_end() {
    context_object context = get_context();
    FILE* file = context->self.infile->file;
    return_from_context(context, make_bool(file_at_end(file)));
}

static void inline infile_read_all() {
    context_object context = get_context();
    infile_object file = context->self.infile;
    string_object result = utf8_read_all(file->file);
    return_from_context(context, (object)result);
}

with_pre_eval1(infile_open, context, w_name,
    cast(name, w_name, string);
    wchar_t* filename = name->value;
    return_from_context(context, make_infile(filename));
)

with_pre_eval1(outfile_open, context, w_name,
    cast(name, w_name, string);
    wchar_t* filename = name->value;
    return_from_context(context, make_outfile(filename));
)

static void inline infile_size() {
    context_object context = get_context();
    infile_object f = context->self.infile;
    int size = utf8_size(f->file);
    return_from_context(context, (object)make_number(size));
}

define_bootstrapping_type(infile,
    // instance
    if_selector(READ,     infile_read);
    if_selector(END,      infile_end);
    if_selector(SIZE,     infile_size);
    if_selector(READ_ALL, infile_read_all);,
    // class
    if_selector(ON,       infile_open);
)

define_bootstrapping_type(outfile,
    // instance
    if_selector(WRITE,    outfile_write);,
    // class
    if_selector(ON,       outfile_open);
)

char* unicode_to_ascii(const wchar_t* str) {
    int len = wcslen(str);
    char* charname = (char*)PALLOC(sizeof(char[len]));

    error_guard(wcstombs(charname, str, len) == len,
        "String not ASCII compatible.");

    return charname;
}

// Object creation
object make_infile(const wchar_t* filename) {
    char* charname = unicode_to_ascii(filename);
    new_instance(infile);
    result->file = fopen(charname, "r");
    error_guard(result->file != NULL, "File not found.");
    return (object)result;
}

object make_outfile(const wchar_t* filename) {
    char* charname = unicode_to_ascii(filename);
    new_instance(outfile);
    result->file = fopen(charname, "w");
    error_guard(result->file != NULL, "File not found.");
    return (object)result;
}
