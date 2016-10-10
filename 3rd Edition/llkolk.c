#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
	fprintf(stdout,"enter any year");
	fscanf(stdin,"%d",&year);
    if(!(year%4) || !(year%400))
    {
        printf("leap");
    }


	getch();

}
