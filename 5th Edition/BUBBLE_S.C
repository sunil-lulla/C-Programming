#include<stdio.h>
#include<conio.h>
/*
bubble sort code
*/
#define MAX 10
void main()
{
int counter = 0;
int arr[MAX] = {9,1,2,3,4,5,6,7,8,9};
int temp = 0,i=0,j=0;
clrscr();
for(i=0;i<MAX-1;i++)
{
for(j = 0;j<MAX-1-i;j++)
{
if(arr[j] > arr[j+1])
{
	     temp = arr[j];
	     arr[j] =arr[j+1] ;
	     arr[j+1] = temp;

}
}
}
for(i=0;i<MAX;i++)
printf("%d",arr[i]);

getch();
}