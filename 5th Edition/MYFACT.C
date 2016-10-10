main()
{

unsigned long  num,fact=1;
clrscr();
scanf("%lu",&num);
while(num>0)
{

fact*=num,--num;

}

	  printf("%lu",fact);
	  getch();


}