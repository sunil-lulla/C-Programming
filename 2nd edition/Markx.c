#include<stdio.h>
#include<conio.h>
void main()
{
int sub1=0,sub2=0,sub3=0;
int total=0;
printf("enter your number out of 100 for subject 1\n");
scanf("%d",&sub1);
printf("enter your number out of 100 for subject 2\n");
scanf("%d",&sub2);
printf("enter your number out of 100 for subject 3\n");
scanf("%d",&sub3);
total=(sub1+sub2+sub3);
printf("you have got %d markx out of 300 \n in which left is %d ",total,300-total);
printf("\nyour percentage is %.3f",total/3.0);


}
