#include<stdio.h>
#include<conio.h>
void func(int arr[]);
void main()
{
int arr[] ={3,6,2,7,1};
	       int i;
clrscr();

printf("\nmain");
for(i=0;i<5;i++)
{
      printf("%d",arr[i]);

}
func(arr);
printf("\nafter func called");
for(i=0;i<5;i++)
{
printf("\n%d",arr[i]);

}

getch();

}
void func(int *arr)
{
   int i=0;
   printf("\n in function");
  for(i=0;i<5;i++)
  {

	*(arr+i)=*(arr+i)+2;

     printf("%d",*(arr+i));

  }

}