#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c,min;
	fprintf(stdout,"enter any 3 numbers");
	fscanf(stdin,"%d %d %d",&a,&b,&c);
    min=(a<b?(a<c?a:c):(b<c?b:c));
    printf("%d min ",min);









	getch();

}
