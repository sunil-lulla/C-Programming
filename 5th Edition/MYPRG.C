#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,roll=0,s1=0,s2=0,s3=0,tstd=0,toproll;
int toptot=0;
int total=0;
clrscr();
for(i=1;i<=10;)
{
printf("enter roll number");
scanf("%d",&roll);
if(roll<1000||roll>9999)
{
printf("pleas enter valid roll number\n");
continue;
}
++i;
printf("enter marks in all the subject");
scanf("%d %d %d",&s1,&s2,&s3);
if(!(s1>=40&&s2>=40&&s3>=40))
continue;


total=s1+s2+s3;
if(total==0||toptot<total)
{
toptot=total;
toproll=roll;
}
if(total>200)
tstd++;
}
printf("total no toppers %d",tstd);
printf("top scorer is %d",toproll);
getch();
}