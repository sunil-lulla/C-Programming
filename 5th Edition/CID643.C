#include<stdio.h>
#include<conio.h>
int prdOfDig(int num)
{
int prd=1;
while(num>0)
{
prd*=num%10;
num/=10;
}
return prd;
}

int mdr(int num)
{
int _mrd=num;
while(_mrd/10!=0)
{
_mrd = prdOfDig(_mrd);
}
return _mrd;
}

int mPersistence(int num)
{
int _mper=0;
while(num/10!=0)
{
_mper++;
num=prdOfDig(num);
}
return _mper;
}




void main()
{
int num=0;
clrscr();
printf("Enter any number");
scanf("%d",&num);
printf("mdr :%d\n",mdr(num));
printf("mpper :%d\n",mPersistence(num));
getch();
}