provider pinocchio {

   probe threaded(char* name);

   probe message(char* class, char* selector);

   probe message__cachehit(char* class, char* selector);
   probe message__cachemiss(char* class, char* selector);

   probe new_smallint(long i);
   probe new_string(char* str);

};

