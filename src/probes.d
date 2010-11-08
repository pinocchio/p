provider pinocchio {

   probe opcode(char* name);

   probe message(char* class, char* selector);

   probe message__cachehit(char* class, char* selector);
   probe message__cachemiss(char* class, char* selector);

   probe smallint__new(long i);
   probe smallint__cachemiss(long i);
   probe smallint__cachehit(long i);

   probe new_string(char* str);

   probe character__new(char i);
   probe character__cachemiss(char i);
   probe character__cachehit(char i);
};

