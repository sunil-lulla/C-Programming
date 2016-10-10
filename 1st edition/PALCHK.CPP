#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
unsigned long int n,rev=0;
printf("enter any number");
scanf("%lu",&n);
int org=n;
while(n>0)
{
rev=(rev*10)+(n%10);
     n=n/10;
}
printf("%lu",rev);
if(org==rev)
printf("equal");
else
printf("not equal");
getch();

}