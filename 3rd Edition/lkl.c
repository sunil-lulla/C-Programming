#include<stdio.h>
#include<conio.h>
void main()
{

    float dist;
    fprintf(stdout,"enter the distance between cities in km");
    fscanf(stdin,"%f",&dist);
    float dist_metre=dist*1000;
    fprintf(stdout,"\ndistance in metres:%.2f metres",dist_metre);
    float dist_feet=dist_metre*3.2880840;
    fprintf(stdout,"\ndistance in feets :%.2f feet",dist_feet);
    float dist_inch=dist_metre*39.370;
    fprintf(stdout,"\ndistance in inch  :%.2f inch",dist_inch);
    float dist_cm=dist_metre*100;
    fprintf(stdout,"\ndistance in cm    :%.2f
             cm",dist_cm);
    fprintf(stdout,"\npress any key to exit!!!..");
    getch();

}


