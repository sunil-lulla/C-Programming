#incllude<stdio.h>
#include<conio.h>
long unsigned int binary( long unsigned int);
void main()
{
     unsigned long int num=0;
     clrscr();
     printf("enter any number");
     scanf("%lu",&num);
     num=binary(num);
     printf("square root is  %lu",num);
     getch();

}
unsigned long  binary(unsigned long num)
{
unsigned long int sum=0,k=1;
if(num>0)
{
while(num>0)
{
    sum+=num%2*k;;
    k*=10;
    num/=2;
}
return sum;
}
printf("not possible");
getch();
exit(0);
}