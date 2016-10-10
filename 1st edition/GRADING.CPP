#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int s1,s2,s3;
printf("enter ur markx");
scanf("%d %d %d",&s1,&s2,&s3);
int total=s1+s2+s3;
float per=total/3.0;
printf("ur total is %d out of 300\npercentage is %.1f",total,per);
if(per>=75)
printf("distinction");
else if(per<75&&per>=60)
printf("A");
else if(per<65&&per>=48)
printf("B");
else
printf("Fail");
getch();

}