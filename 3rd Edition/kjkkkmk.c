#include<stdio.h>
#include<conio.h>
void main()
{

    int num;
	fprintf(stdout,"enter any number of five digit");
	fscanf(stdin,"%d",&num);
	int d1,d2,d3,d4,d5;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
	d3=num%10;
    num=num/10;
	d4=num%10;
    num=num/10;
	d5=num%10;
    num=num/10;
    fprintf(stdout,"enter any number of five digit %d",(d1+d2+d3+d4+d5));
	getch();


}
