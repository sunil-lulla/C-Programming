main()
{
	int sum=1;
	long  a=538769;
	clrscr();
do
{
sum=0;
while(a>0)
{
sum+=a%10,a/=10;
}
printf("%d",sum);
a=sum;
}
while(a/10!=0);
getch();
}