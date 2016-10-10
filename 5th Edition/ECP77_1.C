#include<stdio.h>
#include<conio.h>
void main()
{
char ctype='\0';
int stype=0;
unsigned int amount=0;
float discount=0;
clrscr();
printf("enter the type of customer u are i:industrial g:government u:university");
scanf("%c",&ctype);
printf("\ntype of semiconductor 8 bit,16 bit 32 bit");
scanf("%d",&stype);
printf("\nentre amount");
scanf("%d",&amount);

if((ctype!='i'&& ctype!='u' && ctype!='g')||(stype!=16&&stype!=8&&stype!=32))
{
printf("please give valid details");
exit(0);
}


if(stype==32)
{
if(ctype=='u')
discount=7.5f;
else if(amount<=50000)
{
if(ctype=='i')
discount=5;
if(ctype=='g')
discount=6.5f;
}
else
{
if(ctype=='i')
discount=7.5;
if(ctype=='g')
discount=8.5f;
}
}

else if(stype==16)
{
if(amount<=10000)
discount=0;
else
{
if(ctype=='u'||ctype=='i')
discount=5;
else
discount=6;
}
}

else
discount=10;



printf("\nCustomertype: %c\tproduct: %d bit\tamount:\n",ctype,stype,amount);
printf("discount:%.0f\n",discount);
printf("%.2f",((100-discount)/100.0)*amount);







getch();
}