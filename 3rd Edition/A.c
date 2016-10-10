#include<stdio.h>
#include<conio.h>
void main()
{
    int num=0;
	int revnum=0;
	fprintf(stdout,"enter a five  number");
	fscanf(stdin,"%d",&num); //31456
	revnum=revnum*10+(num%10); //0*10+6=6
	num=num/10;//3145
	revnum=revnum*10+(num%10); //6*10+5=65
	num=num/10;//314
	revnum=revnum*10+(num%10); //650+4
	num=num/10;//31
	revnum=revnum*10+(num%10);//6540+1=6541
	num=num/10;//3
	revnum=revnum*10+(num%10);//65410+3=65413
	//num=num/10;
	fscanf("\nreversee number%d",revnum);
	getch();

}
