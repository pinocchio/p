#ifndef SYSTEM_IO_FILE_H
#define SYSTEM_IO_FILE_H

extern void infile_stub_dispatch();
extern void infile_class_dispatch();
extern void infile_class_stub_dispatch();
extern void outfile_stub_dispatch();
extern void outfile_class_dispatch();
extern void outfile_class_stub_dispatch();

extern object make_infile(const wchar_t* filename);
extern object make_outfile(const wchar_t* filename);

#endif // SYSTEM_IO_FILE_H
