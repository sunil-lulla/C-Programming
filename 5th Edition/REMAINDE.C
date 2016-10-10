#include<stdio.h>
#include<conio.h>
int get_remainder(int n1,int n2)
{
if(n1<n2)
return n1;
return get_remainder(n1-n2,n2);
}




void main()
{
int n1,n2;
n1=n2=0;
clrscr();
printf("Enter n1,n2: ");
scanf("%d %d",&n1,&n2);
printf("The remainder is: %d",get_remainder(n1,n2));
getch();
}