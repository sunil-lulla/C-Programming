#include<stdio.h>
#include<conio.h>
void main()
{

    float m1,m2,m3,m4,total,per;
	char grade;
	fprintf(stdout,"enter markx");
	fscanf(stdin,"%f %f %f %f",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;
	per=total/4;
	fprintf(stdout,"%.1f",per);

	/*
	if(per>=85)
            fprintf(stdout,"u have got A grade");

    else if(per>=70)

        fprintf(stdout,"u have got B grade");

    else if(per>=55)

        fprintf(stdout,"u have got C grade");

    else if(per>=40)

        fprintf(stdout,"u have got D grade");



    else
        fprintf(stdout,"u have got E grade");

	*/

	grade = per>=85?'A':(per>=70?'B':(per>=55?'C':(per>=40?'D':'E')));

    printf(" you have got %c",grade);



	getch();

}
