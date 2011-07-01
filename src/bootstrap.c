#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

#define METHOD_OBJECT_BASE_SIZE 0x5

char * literals = (char*)&pinocchio_rodata;


//The bootstrap section looks as follows:
//
//  void * <method_object_pointer_1>
//    uint16_t <literal_frame_size_1>
//      uint16_t <literal_index_1>
//      uint16_t <literal_index_2>
//  void * <method_object_pointer_2>
//    uint16_t <literal_frame_size_2>
//      uint16_t <literal_index_1>
//  void * <end_marker = 00000000>
//
//e.g.: |0d123445 | 0100 | 0000 | 0000000
//is  : |(*void)  |size=1|idx=0 | end
//
void load_literal_frames() {
  long ** method_object = (long**)&pinocchio_bootstrap;
  uint16_t * literals_data = (uint16_t*)(method_object+1);
  while(1) {
    printf( "method_obj: %p\n", *method_object );
    int size = *literals_data;
    printf( "size: %d\n", *literals_data );
    for( int i = 0; i < size; i++ ) {
      literals_data++;
      int index = *literals_data;
      int len = strlen(literals+index)+1;
      wchar_t * selector = malloc(len*sizeof(wchar_t *));
      swprintf(selector, len, L"%hs", literals+index);
      printf( "selector : %s\n", literals+index );

      Symbol s = new_Symbol(selector);

      *((*method_object)+METHOD_OBJECT_BASE_SIZE+i) = s;
    }
    literals_data++;
    method_object = (long **)literals_data;
    if( *method_object == 0 )
      break;
    literals_data = (uint16_t*)(method_object+1);
  }
}


void pinocchio_do_bootstrap()
{
    INSTANTIATE(nil,   Object, NULL);
    INSTANTIATE(true,  Object, NULL);
    INSTANTIATE(false, Object, NULL);

    Metaclass_class         = raw_Bootstrapping_Class();
    set_class((Object)get_class((Object)Metaclass_class), Metaclass_class);

    BucketArray_class       = raw_Bootstrapping_Class();
    Bucket_class            = raw_Bootstrapping_Class();

    init_class(Metaclass_class);
    init_class(BucketArray_class);
    init_class(Bucket_class);

    Behavior_class          = new_Bootstrapping_Class();
    Class_class             = new_Bootstrapping_Class();
    Object_class            = new_Bootstrapping_Class();

    Symbol_class            = new_Bootstrapping_Class();
    SymbolTable_class       = new_Bootstrapping_Class();

    init_symboltable();

    Array_class             = new_Bootstrapping_Class();
    INSTANTIATE_ARRAY(empty_array, Array, Object, 0);

    String_class            = new_Bootstrapping_Class();
    INSTANTIATE_ARRAY(empty_string, String, wchar_t, 0);

    ObjectLayout_class      = new_Bootstrapping_Class();
    ArrayLayout_class       = new_Bootstrapping_Class();
    CharacterLayout_class   = new_Bootstrapping_Class();
    WordsLayout_class       = new_Bootstrapping_Class();
    IntegerLayout_class     = new_Bootstrapping_Class();
    FloatLayout_class       = new_Bootstrapping_Class();
    LongLayout_class        = new_Bootstrapping_Class();
    BytesLayout_class       = new_Bootstrapping_Class();
    RawLayout_class         = new_Bootstrapping_Class();

    init_layout();
    
    load_literal_frames();
    init_selectors();
}


