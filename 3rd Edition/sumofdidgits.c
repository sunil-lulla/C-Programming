#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=1;
	fprintf(stdout,"enter any number");
	fscanf(stdin,"%d",&num);
	while(num>0)
    {

        sum*=num%10;
        num/=10;


    }
    printf("\n%d",sum);
	getch();

}
