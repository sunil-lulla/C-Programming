#include<stdio.h>
#include<conio.h>
void main()
{
 int num=0,z=0,n1=1,n2=1;
clrscr();
scanf("%d",&num);
for(;;)
{
z=n1+n2;
if(z>num)
{
printf("not fibb");
break;
}
else if(z==num)
{
printf("fibb");
break;
}

n1=n2;
n2=z;


}


getch();

}