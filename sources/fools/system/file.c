#include <system.h>
#include <thread.h>
#include <stdio.h>
#include <wchar.h>

static void inline inputfile_read() {
}

with_pre_eval1(outputfile_write, context, wchr,
)

static void inline file_end() {
}

with_pre_eval1(inputfile_open, context, name,
)

with_pre_eval1(outputfile_open, context, name,
)

define_bootstrapping_type(inputfile,
    // instance
    if_selector(selector, READ, inputfile_read);
    if_selector(selector, END,  file_end);,
    // class
    if_selector(selector, ON,   inputfile_open);
)

define_bootstrapping_type(outputfile,
    // instance
    if_selector(selector, WRITE, outputfile_write);
    if_selector(selector, END,   file_end);,
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
