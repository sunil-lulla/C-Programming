#include<stdio.h>
#include<conio.h>
void main()
{
    int hs,ts;
    float cc;
	fprintf(stdout,"enter hardness,carbon content & tensile strength");
	fscanf(stdin,"%d %f %d",&hs,&cc,&ts);
	printf("%d %.2f %d",hs,cc,ts);




	getch();

}
