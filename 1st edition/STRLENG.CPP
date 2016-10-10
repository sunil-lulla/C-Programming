#include<stdio.h>
#include<conio.h>
void strleng( char *);
void main()
    {            clrscr();
	char arr[5];
	scanf("%[^\n]s",&arr);
	strleng(arr);

			  getch();
    }
    void strleng( char *b)
    {

      for(int i=0;*(b+i);i++);
      printf("%d",i);

    }