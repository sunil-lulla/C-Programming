#include <stdlib.h>
#include <stdio.h>
int main(void)
{
   int i;
   clrscr();

   printf("Input an integer: ");

   /* read an integer from the
      standard input stream */
   if (fscanf(stdin, "%d", &i))
	    fprintf(stderr, "Error reading an integer from stdin.\n");


   getch();
   return 0;
}
