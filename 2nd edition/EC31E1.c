#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    int rem;
    printf("enter a number ");
    scanf("%d",&num1);//36
    printf("enter the divisor");
    scanf("%d",&num2);//7
    rem=num2+num1-num1%num2;

    printf("remainder is %d",rem);
    getch();
}
