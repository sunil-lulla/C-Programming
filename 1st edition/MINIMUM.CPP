#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[10];
for(int i=0;i<=9;i++)
{
printf("ggive number");
scanf("%d",&arr[i]);

}
  int min=arr[0];

		    for(int j=0;j<=9;j++)
		   { if(min>arr[j])

			  min=arr[j];

		    }

			  printf("min is %d",min);

getch();

}