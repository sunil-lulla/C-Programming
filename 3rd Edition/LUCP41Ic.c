#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

int a,b,temp=0;
printf("enter any 2 numbers\n");
scanf("%d %d",&a,&b);
printf("\n%d %d",a,b);
a=a+b,b=a-b,a=a-b;
printf("\n%d %d",a,b);
temp=a,a=b,b=temp;
printf("\n%d %d",a,b);
a=a^b,b=a^b,a=a^b;
printf("\n%d %d",a,b);
a=a*b,b=a/b,a=a/b;
printf("\n%d %d",a,b);
printf("\n%d %d",b,a);

}
