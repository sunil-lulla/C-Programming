#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    printf("enter any five digit number");
    scanf("%d",&a);
    printf("\n%d",a%10+(a/=10)%10+(a/=10)%10+(a/=10)%10+(a/=10)%10);


}
