#ifndef SYSTEM_TYPE_TYPE_H
#define SYSTEM_TYPE_TYPE_H

#define export_type(type)\
extern void type##_##stub_dispatch();\
extern void type##_##class_dispatch();\
extern void type##_##class_stub_dispatch();

#endif // SYSTEM_TYPE_TYPE_H
