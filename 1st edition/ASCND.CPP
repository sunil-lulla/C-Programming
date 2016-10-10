#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();int arr[5];    int i;
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);

}
		int temp;
for(i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)

{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}

}
}
for(i=0;i<5;i++)
{
printf("\n%d",arr[i]);

}
getch();
}