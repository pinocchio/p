#ifndef SYSTEM_LIST_H
#define SYSTEM_LIST_H

extern void list_dispatch();
extern void list_stub_dispatch();
extern void list_class_dispatch();
extern void list_class_stub_dispatch();

extern list_object make_list(int size);
extern int inline list_size(list_object list);
extern void inline list_check_bounds(list_object list, int index);
extern object inline raw_list_at(list_object list, int index);
extern void inline raw_list_at_put(list_object list, int index, object value);
extern void inline list_at_put(list_object list, int index, object value);

struct list {
	int size;
	object instructions[];
};

#endif // SYSTEM_LIST_H
