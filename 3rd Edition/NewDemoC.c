#include<stdio.h>
#include<conio.h>
void main()
{
    char ch,gender;
    int age;
	fprintf(stdout,"enter your marital status");
    fscanf(stdin,"%c",&ch);
    fprintf(stdout,"enter your age");
    fscanf(stdin,"%d",&age);
    fflush(stdin);
    fprintf(stdout,"enter your gender");
    fscanf(stdin,"%c",&gender);

    if(ch=='m'||(gender=='m'&& age>30)||(gender=='f' && age>25))
    {
        printf("u have got your loan");
    }
	getch();

}
