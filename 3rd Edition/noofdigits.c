#include<stdio.h>
#include<conio.h>
void main()
{
    long int num;
    int count=0;
	fprintf(stdout,"enter any number");
	fscanf(stdin,"%ld",&num);

	while(num>0)
    {

        num/=10;
        count++;
    }
    printf("%d",count);
	getch();

}
