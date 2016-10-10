#include<stdio.h>
#include<conio.h>
void main()
{
					   clrscr();
			    /* using 3 variables by while
			    int n,i=0,fact=1;
			      printf("enter any number");
			      scanf("%d",&n);
			      while(i++<n)
			      {
				 fact=fact*i;

			      }
			      printf("fact is :%d",fact);

			   */
			   //by 2 variables
		     /*	   int n,fact=1;
			   printf("enter any number");
			   scanf("%d",&n);
			   while(n>0)
			   {
			   fact=fact*n;
				    n--;
			   }
					printf("fact is :%d",fact);
		       */

		       // by do...while//
		    /*   int n,fact=1;
				  scanf("%d",&n);
				if(n>0) { do

				  {
				  fact=fact*n;
				  n--;
				  }
				      while(n>0); }

				      printf("fact is:%d",fact);
		    */
		     //Now by for loop//
		     int n;
		     scanf("%d",&n);

		     for(int fact=1;n>0;n--)
		     {
		     fact=fact*n;
		     }
				 printf("%d",fact);
		     getch();
}