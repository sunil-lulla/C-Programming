#include<stdio.dh>
#include<conio.h>
void main()
{
 int m=0,j=0,n=0,o=0,i=0;
clrscr();


for(i=100;i<334;i++)
{
for(j=i;j<=i*3;j+=i)
{
if(j%10==j/10%10||j/10%10==j/100%10||j/100%10==j%10)
     {
	  goto A;
     }
}

for(m=i;m>0;m/=10)
{
	for(n=i*2;n>0;n/=10)
	   {
	      for(o=i*3;o>0;o/=10)
		{

			if(m%10==n%10||n%10==o%10||o%10==m%10)
				goto A;

		}
	   }

}


printf("\n%d %d %d",i,i*2,i*3);
A:


}











getch();


}