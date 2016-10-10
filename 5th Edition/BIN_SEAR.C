#include<stdio.h>
#include<conio.h>
void main()
{
int a[10] = {1,2,3,4,5,6,7,8,9,0};
int search=17;
int low=0;
int up=9;
int mid=0;
clrscr();
while(low<=up)
{
 mid = (low+up)/2;
 if(a[mid] > search)
	up = mid-1;
 else if(a[mid] < search){
	low = mid+1;
	      }
 else   {
	printf("%d",mid);
	break;
	}
}
if(low>up)
printf("%d",-1);
getch();
}