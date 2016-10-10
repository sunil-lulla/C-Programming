#include<stdio.h>
#include<conio.h>
void ankit(int a,int b,int *ps,int *pd,int *pp);
void main()
{
int a,b,sum,diff,prd;
clrscr();
scanf("%d %d",&a,&b);
printf("\nin main %d %d",a,b);
ankit(a,b,&sum,&diff,&prd);
printf("\nsum:%d diff: %d product %d",sum,diff,prd);
printf("\nin main after calling %d %d",a,b);
      getch();

}
 void  ankit(int a,int b,int *ps,int *pd,int *pp)
{


 *ps=a+b;
 *pd=a-b;
 *pp=a*b;

}
