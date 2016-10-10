#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();


int odd[10];
printf("enter value for odd nos\n");
for(int i=0;i<10;i++)
{
scanf("%d",&odd[i]);
}
printf("enter value for even nos \n");
int even[10];
for(i=0;i<10;i++)
{
scanf("%d",&even[i]);
}

static int temp[10];
for(i=0;i<10;i++)
{
if(even[i]%2==0)
 {
    temp[i]=even[i];
    even[i]=odd[i];
    odd[i]=temp[i];

 }

}
for(i=0;i<10;i++)
{
printf("\n even %d\n",even[i]);
printf("\n odd %d\n",odd[i]);

}

getch();


}