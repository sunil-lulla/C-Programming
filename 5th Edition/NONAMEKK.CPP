#include<stdio.h>
#include<conio.h>
void main()
{
int num=0,i=0,sum=0;
clrscr();
while(i<10)
{
printf("enter number no %d",(i+1));
scanf("%d",&num);
if(num>0)
{
 sum+=num;
 i++;
 continue;
}
printf("please enter any +ve value");

}
printf("\n sum :%d",sum);
getch();
}