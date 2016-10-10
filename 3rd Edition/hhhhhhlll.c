#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    int i=1;
	fprintf(stdout,"enter the final digits u want");
	fscanf(stdin,"%d",&num);
	do
        {


        printf("%d\n",num);

        }
    while(num-->1);


	getch();

}
