#ifndef SYSTEM_FILE_H
#define SYSTEM_FILE_H

extern void inputfile_stub_dispatch();
extern void inputfile_class_dispatch();
extern void inputfile_class_stub_dispatch();
extern void outputfile_stub_dispatch();
extern void outputfile_class_dispatch();
extern void outputfile_class_stub_dispatch();
extern object make_file(const wchar_t* filename, int write);

struct inputfile {
    FILE* file;
};

struct outputfile {
    FILE* file;
};

#endif // SYSTEM_FILE_H
