#include<stdio.h>
#include<conio.h>
void main()
{

clrscr();
int power,base,result;
printf("enter Base  and Power");
scanf("%d %d",&base,&power);
/*for(int i=1;i<=power;i++)
{
result=result*base;

}
		   printf("\n ans %d",result);
*/
//now wid 3 variables
  for(result=1;power>0;power--)
  {
	 result=result*base;

  }
  printf("%d",result);
getch();

}