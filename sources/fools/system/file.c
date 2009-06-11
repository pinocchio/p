#include <system.h>
#include <thread.h>
#include <stdio.h>
#include <wchar.h>

#define addbyte(to, from)\
    to = to << 8;\
    to += fgetc(from)

static void inline inputfile_read() {
    context_object context = get_context();
    inputfile_object file = context->self.inputfile;
    wchar_t result;
    FILE* fp = file->file;
    if (fp != NULL) {
        int first;
        if ((first = fgetc(fp)) == EOF) {
            printf("Reading at end of file!\n");
            assert(NULL);
        }
        result = first;
        int i;
        if (first & 1<<7) {
            for (i = 0; i < 3; i++) {
                if (first & 1<<(6-i)) {
                    addbyte(result, fp);
                    continue;
                }
                break;
            }
        }
        return_from_context(context, (object)make_char(result));
    }
}

with_pre_eval1(outputfile_write, context, wchr,
)

static void inline inputfile_end() {
    context_object context = get_context();
    FILE* file = context->self.inputfile->file;
    int c = fgetc(file);
    if (c == EOF) {
        return_from_context(context, fools_system->true);
    } else {
        ungetc(c, file);
        return_from_context(context, fools_system->false);
    }
}

with_pre_eval1(inputfile_open, context, name,
    // XXX todo: check type
    wchar_t* filename = name.string->value;
    return_from_context(context, make_inputfile(filename));
)

with_pre_eval1(outputfile_open, context, name,
    // XXX todo: check type
    wchar_t* filename = name.string->value;
    return_from_context(context, make_outputfile(filename));
)

define_bootstrapping_type(infile,
    // instance
    if_selector(selector, READ, inputfile_read);
    if_selector(selector, END,  inputfile_end);,
    // class
    if_selector(selector, ON,   inputfile_open);
)

define_bootstrapping_type(outfile,
    // instance
    if_selector(selector, WRITE, outputfile_write);,
    // class
    if_selector(selector, ON,    outputfile_open);
)

// Object creation
object make_inputfile(const wchar_t* filename) {
    int len = wcslen(filename);
    char* charname = (char*)FOOLS_ALLOC(sizeof(char[len]));

    if (wcstombs(charname, filename, len) != len) {
        printf("Filename not ASCII compatible!\n");
        assert(NULL);
    }    

    new_instance(inputfile);
    result->file = fopen(charname, "r");
    return (object)result;
}

object make_outputfile(const wchar_t* filename) {
    int len = wcslen(filename);
    char* charname = (char*)FOOLS_ALLOC(sizeof(char[len]));

    if (wcstombs(charname, filename, len) != len) {
        printf("Filename not ASCII compatible!\n");
        assert(NULL);
    }    

    new_instance(outputfile);
    result->file = fopen(charname, "w");
    return (object)result;
}
