#include <system.h>
#include <thread.h>
#include <stdio.h>
#include <wchar.h>
#include <scheme/natives.h>

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

define_bootstrapping_type(infile,
    // instance
    if_selector(READCHAR,     instream_read);
    if_selector(ATEND,      instream_end);
    if_selector(SIZE,     instream_size);
    if_selector(READALLCHARS, instream_read_all);,
    // class
    if_selector(ON_,       infile_open);
)

define_bootstrapping_type(outfile,
    // instance
    if_selector(WRITECHAR_,    outstream_write);,
    // class
    if_selector(ON_,       outfile_open);
)

// Object creation
object make_infile(const wchar_t* filename) {
    char* charname       = unicode_to_ascii(filename);
    // have to manually set things
    infile_object result = NEW(struct instream);
    header(result)       = (object)woodstock->infile_class;
    result->file         = fopen(charname, "r");
    error_guard(result->file != NULL, "File not found.");
    return (object)result;
}

object make_outfile(const wchar_t* filename) {
    char* charname        = unicode_to_ascii(filename);
    outfile_object result = NEW(struct outstream);
    header(result)        = (object)woodstock->outfile_class;    
    result->file          = fopen(charname, "w");
    error_guard(result->file != NULL, "File not found.");
    return (object)result;
}
