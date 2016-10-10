#include<stdio.h>
#include<conio.h>
void main()
{

	fprintf(stdout,"enter all five subject marks out of 100");
	int sub1,sub2,sub3,sub4,sub5;
	fscanf(stdin,"%d %d %D %D %D",&sub1,&sub2,&sub3,&sub4,&sub5);
	int total =sub1+sub2+sub3+sub4+sub5;
	fprintf(stdout,"\ntotal markx u have got: %d",total);



	getch();


}
