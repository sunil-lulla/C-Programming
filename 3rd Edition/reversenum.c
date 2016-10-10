#include<stdio.h>
#include<conio.h>
void main()
{
    int num,r1,r2,r3,r4,r5,rev;
	printf("enter any five digit number");
	scanf("%d",&num);
	//num=12345
                        //54

	r1=(num%10)*10;
	r2=r1+(num/=10)%10;
    r3=r2*10+(num/=10)%10;
    r4=r3*10+(num/=10)%10;
    r5=r4*10+(num/=10)%10;


    printf("%d",r5);









}
