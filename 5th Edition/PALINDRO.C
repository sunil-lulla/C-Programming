#include<stdio.h>
int isPalindrome(int);
void main()
{
int num=0,flag=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
flag=isPalindrome(num);
if(flag==num)
{
 printf("is a pailindrome");
}
getch();
}
int isPalindrome(int temp)
{
int sum=0;
while(temp>0)
{
sum=sum*10+temp%10;
temp/=10;
}
//printf("temp %d",sum);
return sum;
}