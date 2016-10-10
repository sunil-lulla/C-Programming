#include<stdio.h>
#include<conio.h>
void main()
{
   int k=0,i=0,j=0;
   clrscr();



   for(i=1;i<=5;i++)
   {
   for(j=0;j<=2*(5-i);j++)
   printf("@");
   for(k=1;k<=2*i-1;k++)
   printf("*");
   printf("\n");

   }




   getch();

}
