#include<stdio.h>
#include<conio.h>
void main()
{
    float temp;
    float temp_in_centigrade;
    fprintf(stdout,"enter the temperature in fahrenheit");
    fscanf(stdin,"%f",&temp);
    temp_in_centigrade = (5/9.0*(temp-32));
    fprintf(stdout,"\ntemp in %.2f%CC",temp_in_centigrade,248);
    fprintf(stdout,"\npress any key to exit");
    getch();


}

