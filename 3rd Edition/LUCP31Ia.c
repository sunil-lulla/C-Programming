#include<stdio.h>
#include<conio.h>
void main()
{

int basicSalary,dearnessAllowance,grossSalary,houseRentAllowance;
printf("enter your basic salary");
scanf("%d",&basicSalary);
dearnessAllowance=40*basicSalary/100;
printf("\n ypur dearness allowance is %d",dearnessAllowance);
houseRentAllowance=20*basicSalary/100;
printf("\n  hosuserent allownace %d",houseRentAllowance);
grossSalary=houseRentAllowance+dearnessAllowance+basicSalary;
printf("\ntotal salary is%d",grossSalary);









}
