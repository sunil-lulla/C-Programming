#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
	fprintf(stdout,"enter any thing");
	fscanf(stdin,"%c",&a);
	if(a>=65 && a<=90)
        printf("capital letter %c",a);
    else if(a>=97 && a<=122)
        printf("small letter %c",a);

	else if(a>=48 && a<=57)
        printf("its a didgi %c",a);
	else
        printf("special symbol %c",a);

	getch();

}
