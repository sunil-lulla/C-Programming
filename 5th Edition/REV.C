#include<STDIO.H>
#include<conIO.H>
main()
{

int sum=0;
int num=0;
clrscr();
printf("enter a number");

scanf("%d",&num);


while(num>0)
{
sum=sum*10+num%10;
num/=10;
}
printf("%d",sum);
printf("ist doubel :%d",2*sum);





getch();


return 0;

}