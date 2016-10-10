#include<stdio.h>
#include<conio.h>
void main()
{
    int distance;
    printf("enter distance between 2 cities in km");
    scanf("%d",&distance);
    printf("the distance between them in metre is %d m. ",(distance*1000));
    printf("\nthe distance between them in feet is %lf feet. ",((distance*1000*3.2808399)));
    printf("\nthe distance between them in feet is %lf inch. ",((distance*1000*3.2808399*12)));
    printf("\nthe distance between them in feet is %lf cm. ",((distance*1000*3.2808399*2.54)));

}
