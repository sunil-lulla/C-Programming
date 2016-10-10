#include<stdio.h>
#include<conio.h>
void main()
{

int a=0,b=0,c=0;
int sum=0; float average=0.0;
    fprintf(stdout,"enter any three nos");
    fscanf(stdin,"%d %d %d",&a,&b,&c);
sum=a+b+c;
average=sum/3.0;
fprintf(stdout,"\n sum is %d",sum);
fprintf(stdout,"\navg is:%f",average);

}
