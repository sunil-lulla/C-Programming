#include<stdio.h>
#include<conio.h>
void main()
{

	fprintf(stdout,"enter marks in 5 subjects out of 100 marks");
	int sub1,sub2,sub3,sub4,sub5;
	fscanf(stdin,"%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    int total=sub1+sub2+sub3+sub4+sub5;
    fprintf(stdout,"\ntotal :%d",total);
    float percentile=total/5.0;
    fprintf(stdout,"\n percentile:%.2f",percentile);
	getch();

}
