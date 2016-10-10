#include<stdio.h>
#include<conio.h>
void main()
{
    int num=0;
	fprintf(stdout,"enter any number");
	fscanf(stdin,"%d",&num);
   	//num = (((num%10)+0*(num=num/10))+((num%10)+0*(num=num/10))+((num%10)+0*(num=num/10))+((num%10)+0*(num=num/10))+(num%10));
	//num = ((num%10)+(0*(num/=10)));
//13=3+0*1
    
    //num=((num%10)+(0*(num/=10)));
	
	
	fprintf(stdout,"\n sum is:%d",num);
	getch();

}
