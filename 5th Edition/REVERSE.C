#include<stdio.h>
#include<conio.h>
unsigned long int reverse(unsigned long int);
unsigned long int isPalindrome(unsigned long int);
void main()
{
unsigned long num;
clrscr();
printf("enter the number");
lscanf("%lu",&num);
if(isPalindrome(num))
{
printf("the given number is palindrome");

}
else
printf("the given number is not a palindrome");
getch();
}
unsigned long isPalindrome(unsigned long int num)
{
if(num==reverse(num))
return 1;
return 0;
}
unsigned long reverse(unsigned long num)
{
unsigned long temp=0;
while(num>0)
{
temp=temp*10+num%10;
num/=10;
}
return temp;
}