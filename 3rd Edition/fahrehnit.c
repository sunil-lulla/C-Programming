#include<stdio.h>
#include<conio.h>
void main()
{

    float temp=0.0;
    fprintf(stdout,"enter the temperature in farenhit\n");
    fscanf(stdin,"%f",&temp);
    fprintf(stdout,"\ntemp is :%.2f%cc",(5.0/9)*(temp-32),248);



}
