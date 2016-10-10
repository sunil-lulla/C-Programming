#include<stdio.h>
#include<conio.h>
static int a=0;
int summ(int num)
{
    int sum=0;
if(num==0)
return 0;



//unwinding phase
sum=num+summ(num-1);
printf("%d",num);
return sum;


}
void main()
{
int num=0;
clrscr();
printf("enter any nunber");
scanf("%d",&num);
printf("summation os %d is %d",num,summ(num));
getch();
}