#include<stdio.h>
#include<conio.h>
void main()
{
    char sex;
    int yoh,q;
	fprintf(stdout,"enter sex m for male f for female");
	fscanf(stdin,"%c",&sex);
	fprintf(stdout,"years of services");
    fscanf(stdin,"%d",yoh);
    fprintf(stdout,"qualification 1 for pg 0 for g");
    fscanf(stdin,"%d",&q);
    if(sex=='m')
    {

        if(yoh>=10)
        {


            if(q==1)
            {
                salary=15000;
            }
            else
            {

                salary=10000;

            }

        }
        else
            {

                if(q==1)
                {
                    salary=10000;
                }
                else
                {
                    salary=7000;
                }


            }


    }
    else
    {

        if(yoh>=10)
        {
        if(q==1)
        {
            salary=12000;
        }
        }
        else
        {
            salary=9000;
        }

            else
        {

            if()
        }

    }




	getch();

}
