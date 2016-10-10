


main()
{


struct student
{
char name[20];
int roll;
int marks[4];
};
struct student std[3];
int i=0,j=0,sum=0;
clrscr();



for(i=0;i<3;i++)
{ clrscr();
printf("enter name of student no: %d",i+1);
scanf("%s",std[i].name);
printf("enter roll no of %s",std[i].name);
scanf("%d",&std[i].roll);
for(j=0;j<4;j++)
{
printf("enter marks of %s in subject no %d",std[i].name,j+1);
	       scanf("%d",&std[i].marks[j]);
}
}



clrscr();
for(i=0;i<3;i++)
{
sum=0;
for(j=0;j<4;j++)
{sum+=std[i].marks[j];}
printf("%c%-10s%c%-5d%c%-4.2f%%%c\n",186,std[i].name,186,std[i].roll,186,sum/4.0f,186);
}
for(i=0;i<20;i++)
printf("%c",205);

getch();
return 0;
}