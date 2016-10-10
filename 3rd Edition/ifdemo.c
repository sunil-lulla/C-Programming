#include<stdio.h>
#include<conio.h>
void main()
{
    int salary;
    int Hra,Da,gsalary;
	fprintf(stdout,"enter your basic salary");
	fscanf(stdin,"%d",&salary);
	if(salary<1500)
    {
        printf("\nsalary:%d",salary);
        Hra=10.0/100*salary;
        printf("\nHra:%d",Hra);
        Da=90.0/100*salary;
        printf("\nDa:%d",Da);
    }
    else
        {
            Hra=500;
            Da=98.0/100*salary;

        }

        gsalary=Hra+Da+salary;
        printf("\ngross salary%d",gsalary);

	getch();

}
