main()
{

int n1=0,n2=0;char ch='\0';
lclrscr();
printf("enter any number,operation and 2nd number");
scanf("%d %c %d",&n1,&ch,&n2);
 printf("%d %c %d",n1,ch,n2);
switch(ch,ch)
{

case '+':
	printf("%d",n1+n2);
	break;
case '-':
	printf("%d",n1-n2);
	break;

case '/':
printf("%d",n1/n2);
	break;
case '%':
	printf("%d",n1%n2);
	break;
case '*':
printf("%d",n1*n2);
break;
default:
printf("Compilation Error");



}

 getch();
}