#include"stdio.h"
void main()
{

    int a=9;
    float b=4;
    fscanf(stdin,"%d %f",&a,&b);
    fprintf(stdout,"%f",b/a);

}
