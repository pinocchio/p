#ifndef SYSTEM_IO_STREAM
#define SYSTEM_IO_STREAM

extern void instream_stub_dispatch();
extern void instream_class_dispatch();
extern void instream_class_stub_dispatch();
extern void outstream_stub_dispatch();
extern void outstream_class_dispatch();
extern void outstream_class_stub_dispatch();

extern object make_instream(FILE* stream);
extern object make_outstream(FILE* stream);

extern void inline instream_read();
extern void inline instream_end();
extern void inline instream_read_all();
extern void inline instream_size();

extern void inline outstream_write();

extern char* unicode_to_ascii(const wchar_t* str);

// ============================================================================

instream_object stdin_stream;
outstream_object stdout_stream;


struct instream {
    FILE* file;
};

struct outstream {
    FILE* file;
};

#endif // SYSTEM_IO_STREAM
