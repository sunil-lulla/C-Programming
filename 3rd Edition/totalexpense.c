#include<stdio.h>
#include<conio.h>
void main()
{
    int items,cost,totalcost;
	fprintf(stdout,"enter the total items and its cost");
	fscanf(stdin,"%d %d",&items,&cost);
    totalcost=items*cost;
    if(items>=1000)
    {
        totalcost=  totalcost - (10.0/100)*totalcost;
    }

        printf(" your total cost :%d",totalcost);








}
