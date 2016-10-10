#include<stdio.h>
#include<conio.h>
void main()
{
int inKm,inM,inCM;
float inIN,inFT;
printf("enter the disdtance in kms");
scanf("%d",&inKm);
inM=inKm*1000;
printf("\nin metres%d",inM);
inCM=inM*100;
printf("\nin centimetres%d",inCM);
inIN=inCM/2.54;
printf("\nin inches %f",inIN);
inFT=inIN/12;
printf("\nin feet%f",inFT);

}
