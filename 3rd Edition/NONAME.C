#include <stdio.h>
#include <alloc.h>l
#define NUM_PTRS  10
#define NUM_BYTES 16

int main(void)
{

   char *array[ NUM_PTRS ];
   int i;
	clrscr();
   for( i = 0; i < NUM_PTRS; i++ )
      array[ i ] = (char *) malloc( NUM_BYTES );

   for( i = 0; i < NUM_PTRS; i += 2 )
      free( array[ i ] );

   if( heapcheck() == _HEAPCORRUPT )
      printf( "Heap is corrupted.\n" );
   else
      printf( "Heap is OK.\n" );

      getch();
   return 0;
}

