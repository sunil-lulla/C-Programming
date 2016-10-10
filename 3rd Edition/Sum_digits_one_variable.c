#include<stdio.h>
#include<conio.h>
void main()
{
     int num,digit=0;
	fprintf(stdout,"enter any number");
	fscanf(stdin,"%d",&num);//31212
    digit=digit+num%10;//0+2=2
	num=num/10;
	digit=digit+num%10;
	num=num/10;
	digit=digit+num%10;
	num=num/10;
	digit=digit+num%10;
	num=num/10;
	digit=digit+num%10;
	//num=num/10;
	fprintf(stdout,"\n\nsum of its digit is: %d",digit);

    getch();

}
