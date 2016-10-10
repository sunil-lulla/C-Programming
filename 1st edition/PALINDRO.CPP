#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
unsigned int a,x,y,z;
printf("enter any 5 digit number");
scanf("%u",&a);          //21652      33333
x=a;
y=x%10; //                      2          3
x=x/10;  //                      2165      3333
z=y*10;    //                        20     30

y=x%10;      //                        5      3
x=x/10;        //                       216    333
z=(z+y)*10;        //                    250     330

y=x%10;            //                       6       3
x=x/10;              //                      21      33
z=(z+y)*10;              //                    2560   3330

y=x%10;                //                  1          3
x=x/10;               //                   2          3
z=(z+y)*10;            //                 25610       33330
y=x%10;      //     2                              3
z=z+y ;           //25612                          33333
if(a==z)

printf("both are equal%u %u",a,z);
else
printf("not equal%u %u",a,z);

getch();
}