main()
{

int num,j=1,sum=0,num2=0;
clrscr();
printf("enter any number");
scanf("%d",&num);
num2=num;
while(num2>0)
{
if(num2%10!=0&&num2%10!=1)
{
num=0;
printf("e toh binary nai hai");
break;
}
num2/=10;
}


while(num>0)
{
sum+=num%10*j,num/=10,j*=2;
}

printf("%d",sum);

	       getch();
 return 0;
}