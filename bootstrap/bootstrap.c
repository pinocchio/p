#include <stdio.h>
#include <string.h>
#include <stdint.h> 

#define METHOD_OBJECT_BASE_SIZE 0x7

extern void * pinocchio_rodata;
extern void * pinocchio_bootstrap[];
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
void bootstrap() {
  void ** method_object = pinocchio_bootstrap;
  uint16_t * literals_data = (uint16_t*)(method_object+1);
  while(1) {
    printf( "method_obj: %p\n", *method_object );
    int size = *literals_data;
    printf( "size: %d\n", *literals_data );
    for( int i = 0; i < size; i++ ) {
      literals_data++;
      int index = *literals_data;
      printf( "literal_index: %d\n", index );
      printf( "is : %s\n", literals+index );
    }
    literals_data++;
    method_object = (void **)literals_data;
    if( *method_object == 0 )
      break;
    literals_data = (uint16_t*)(method_object+1);
  }
}

