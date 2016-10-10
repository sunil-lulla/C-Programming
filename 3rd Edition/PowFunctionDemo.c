#include<stdio.h>
#include<math.h>
void main()
{
unsigned int radius=0;
float area;
fprintf(stdout,"enter value of radius");
fscanf(stdin,"%u",&radius);

area = powl(radius,0)*3.14;
printf("%g",area);


}
