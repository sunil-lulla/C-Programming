#include<stdio.h>
#include<conio.h>
int prime(int a,int b)
{
int i=2;
if(a>b||b==1)
return 0;
for(i=2;i<=a/2;i++)
{
	if(a%i==0)
	return 0+prime(a+1,b);
}
return 1+prime(a+1,b);


}

void main()
{
int n1,n2;
clrscr();
printf("Enter numbers");
scanf("%d %d",&n1,&n2);
printf("The total prime no are %d ",prime(n1,n2));
getch();
}