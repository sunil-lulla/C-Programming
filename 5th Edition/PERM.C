#include<stdio.h>
#include<conio.h>
unsigned long fact(int num);
unsigned long perm(int n,int r);
unsigned long comb(int n,int r);
void main()
{
int n=0,r=0;
clrscr();
printf("enter n and r");
scanf("%d %d",&n,&r);
printf("\ntotal no of permutations are %lu",perm(n,r));
printf("\ntotal no of combinations are %lu",comb(n,r));
getch();
}
unsigned long fact(int num)
{
unsigned long sum=1;
for(;num>1;sum*=num--);
return sum;
}
unsigned long perm(int n,int r)
{
return fact(n)/fact(n-r);
}
unsigned long comb(int n,int r)
{
return perm(n,r)/fact(r);
}