#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact=1;;
	fprintf(stdout,"enter any number whose factorial you want");
	fscanf(stdin,"%d",&num);
	if(num<0)
    {
        printf("not valid");
    }
    else
    {


	while(num>0)
    {
        fact*=num;
        num--;

    }

        printf("%d",fact);
    }
	getch();

}
