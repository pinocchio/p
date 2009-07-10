#ifndef SYSTEM_NUMBER_H
#define SYSTEM_NUMBER_H

extern void number_stub_dispatch();
extern void number_class_stub_dispatch();

extern number_object    make_number(int value);
extern int inline       number_value(number_object number);

struct number {
    int value;
};

#endif // SYSTEM_NUMBER_H
