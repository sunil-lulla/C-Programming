#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>
void main()
{
//	 clrscr();

	 printf("  range of   signed int   :%d  to %d  their size is %d",INT_MIN,INT_MAX,sizeof(int));
	 printf("\nrange of unsigned int   :%u  to %u  their size is %d",0,UINT_MAX,sizeof(unsigned int));
	 printf("\nrange of   signed long  :%ld to %ld their size is %d",LONG_MIN,LONG_MAX,sizeof(long int));
	 printf("\nrange of           int  :%d  to %lu their size is %d",0,ULONG_MAX,sizeof(unsigned long));
	 printf("\nrange of  signed short  :%d  to %d  their size is %d",SHRT_MIN,SHRT_MAX,sizeof(short));
	 printf("\nrange of unsigned short :%d  to %u  their size is %d",0,USHRT_MAX,sizeof( short ));
	 printf("\nrange of signed char    :%d  to %d  their size is %d",CHAR_MIN,CHAR_MAX,sizeof(char));
	 printf("\nrange of unsigned char  :%d  to %d  their size is %d",0,UCHAR_MAX,sizeof(unsigned char));
	 printf("\nrange of          char  :%d  to %d  their size is %d",SCHAR_MIN,SCHAR_MAX,sizeof(char));
	 printf("\nno    of bits taken by char %d",CHAR_BIT);
        printf("\n range of float is %f to %f size : %d",FLT_MIN,FLT_MAX,sizeof(float));
        printf("\n range of float is %e to %e",FLT_MIN,FLT_MAX);


	 getch();


}
