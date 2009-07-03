#ifndef SYSTEM_FILE_H
#define SYSTEM_FILE_H

extern void infile_stub_dispatch();
extern void infile_class_dispatch();
extern void infile_class_stub_dispatch();
extern void outfile_stub_dispatch();
extern void outfile_class_dispatch();
extern void outfile_class_stub_dispatch();
extern object make_inputfile(const wchar_t* filename);
extern object make_outputfile(const wchar_t* filename);

struct inputfile {
    FILE* file;
};

struct outputfile {
    FILE* file;
};

#endif // SYSTEM_FILE_H
