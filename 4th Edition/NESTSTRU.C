main()
{
struct day
{
int day;
};

struct date
{
int hour;
int minute;
int sec;
struct day newDay;
};

struct student
{
char name[20];
int roll;
struct date newDate;
};

 struct student std={"sam",23,{23,45,78,{23}}};
 clrscr();
 printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",std.name,std.roll,std.newDate.hour,\
 std.newDate.minute,std.newDate.sec);



 getch();
}