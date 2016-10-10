main()
{


int num=-12;
int sum=0;
clrscr();
num*=(num<0?-10:10);
while(num>0&&(sum+=(num/=10,num%10)));
printf("%d",sum);
	       getch();


}