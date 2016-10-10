#include<stdio.h>
#include<conio.h>
void main()
{


unsigned int length=0,breadth=0;

printf("enter values of length and breadth");
scanf("%u %u",&length,&breadth);
fprintf(stdout,"\narea is %u",length*breadth);
fprintf(stdout,"\nparameter is %u",2*(length+breadth));



}
