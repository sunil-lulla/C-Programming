#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
	fprintf(stdout,"enter any number");
	fscanf(stdin,"%d",&num);

	while(num>=0)
	{
	    printf("\n%d",num);
        num-=2;
	}
	getch();

}
