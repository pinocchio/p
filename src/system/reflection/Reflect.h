#ifndef REFLECTION_REFLECT_H
#define REFLECTION_REFLECT_H

#define REFLECT(selector)\
    if (interpreter != NULL) {\
		Runtime_Message message =\
            new_Runtime_Message((Object)(selector), argc);\
		int i;\
		for (i = 0; i < argc; i++) {\
			message->arguments[i] = peek_EXP(argc-i-1);\
		}\
		zapn_EXP(argc+2);\
        printf("REFLECTING! "#selector"\n");\
		return Type_Class_direct_dispatch(\
					interpreter,\
					HEADER(interpreter),\
					(Object)(selector),\
					2, self, message);\
	}

#endif // REFLECTION_REFLECT_H
