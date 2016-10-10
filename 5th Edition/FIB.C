main()
{
int a=0,b=1;
int i;
clrscr();
printf("%-4d",a);
while(a+b<10000)
{
b=a+b;
printf("%-4d\t",b);
a=b-a;
}

      getch();
}