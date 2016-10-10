#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next;
};
struct node *createList(struct node *start);
struct node * addAtLast(struct node *start,int data);
void show(struct node *);
void main()
{
    int choice=0;
    struct node *start=NULL;
    clrscr();
    printf("Pick the below options\n");
    while(1)
    {
	printf(" 1.  create Link list\n");
	printf(" 2.  insert data\n");
	printf(" 3.  insert after\n");
	printf(" 4.  insert before\n");
	printf(" 5.  insert at position\n");
	printf(" 6.  delete all\n");
	printf(" 7.  delete at pos\n");
	printf(" 8.  delete after\n");
	printf(" 8.  delete before\n");
	printf(" 9.  delete last\n");
	printf("10.  display\n");
	printf("11.  exit\n");
	printf("insert your choice");
	scanf("%d",&choice);
	clrscr();
	switch(choice)
	{

    case 1:
	start=createList(start);
	break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
		show(start);
		printf("gom");
		break;
    case 11:
    case 12:
	exit(1);
    default:
	printf("wrong");

	}

    }

}


struct node *createList(struct node *start)
{
struct node *p;
int n=0,data=0,i;
printf("enter how many data u want to insert");
scanf("%d",&n);
if(n<=0)
return start;
p=(struct node *)malloc(sizeof(struct node));
printf("enter  data");
scanf("%d",&data);
p->info=data;
start=p;
p->next=NULL;
for(i=2;i<=n;i++)
{
scanf("%d",&data);
addAtLast(p,data);
p=p->next;
}
return start;
}

struct node * addAtLast(struct node *start,int data)
{
struct node *p,*t;
p=start;
while(p->next!=NULL)
p=p->next;
t=(struct node *)malloc(sizeof(struct node));
t->info=data;
t->next=NULL;
p->next=t;
return start;
}
void show(struct node *start)
{
struct node *p;
p=start;
printf("\n");
while(p!=NULL)
{
printf("%d\t",p->info);
p=p->next;
}
printf("\n");
}




