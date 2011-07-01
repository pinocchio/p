#define ENC_NUM(v)  (((v) << 1) + 1)
#define ENC_INT(v)  ((long*)(((v) << 1) + 1))
#define DEC_INT(v)  ((long)(v) >> 1)
#define IS_INT(v)   ((long)(v) & 1)
#define ARE_INTS(x, y) ((char)(x) & (char)(y) & 1)

#define TRUE  (p_true + 2)
#define FALSE (p_false + 2)

long SmallInteger[2];

void init_selectors();

#define NATIVE(module, name)\
      __attribute__((optimize("-fno-omit-frame-pointer"))) Object NM_##module##_##name( void ** pc, Object self ) {\


#define END_NATIVE\
                  }

