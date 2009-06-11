#include <system.h>
#include <thread.h>
#include <stdio.h>
#include <wchar.h>

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
        if (first & 1<<7) {
            int i;
            for (i = 0; i < 3; i++) {
                if (first & 1<<(6-i)) {
                    result <<= 6;
                    result += (fgetc(fp) ^ 0x80);
                    continue;
                }
                break;
            }
            result &= (1<<((i+1)*6-i)) - 1;
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

static void inline inputfile_size() {
    context_object context = get_context();
    inputfile_object f = context->self.inputfile;
    FILE* fp = f->file;
    if (fp == NULL) {
        printf("File nullpointer\n");
        assert(NULL);
    }
    long pos = ftell(fp);
    rewind(fp);
    char cur;
    int size = 0;
    while ((cur = fgetc(fp)) != EOF) {
        if (!(cur & 0x80) || (cur & 0x40)) {
            size++;
        }
    }
    fseek(fp, pos, SEEK_SET);
    
    return_from_context(context, (object)make_number(size));
}

define_bootstrapping_type(infile,
    // instance
    if_selector(selector, READ, inputfile_read);
    if_selector(selector, END,  inputfile_end);
    if_selector(selector, SIZE, inputfile_size);,
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
