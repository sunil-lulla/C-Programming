#include<stdio.h>
#include<conio.h>
void main()
{
    int num; int
    count =0;
	fprintf(stdout,"enter any number");
	fscanf(stdin,"%d",&num);

	do
    {
            num/=10;
            count++;

    }
    while(num>0);
    printf("%d",count);

	getch();

}
