#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0;
printf("enter ny number");
scanf(" %d ",&n);
for(int i=1;i<=n;i++)
{
sum=sum+i;

}

       printf("  %d ",sum);
       getch();
}