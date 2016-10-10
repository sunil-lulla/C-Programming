#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=0,i;
clrscr();
scanf("%d %d",&a,&b);
if(a<0||b<0)
{
printf("Invalid Input");
getch();
return;
}
for(i=a>b?a:b;i>1;i--)
{
   if(a%i==0&&b%i==0)
    {
	 printf("hcf %d",i);
	 getch();
	 return;
    }

}
printf("hcf is %d",i);
getch();
}