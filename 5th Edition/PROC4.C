#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i=0,j=0;
int k=0;
clrscr();

for(i=2;i<=99;i++)
{
	k=sqrt(i);


 for(j=2;j<=k;j++)
  {
  if(i%j==0)
  {
   break;
  }
  }

 if(j>k)
 printf("%d is a prime number",i);






}






getch();
}