#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
};
struct node * createList(struct node *start)
{
   struct node *tmp,*p;
   int a,i,data;
   printf("enter the number of data u want to insert into list");
   scanf("%d",&a);
   if(a<=0)
   {
   return start;
   }
   p=start;
   printf("enter number");
   scanf("%d",&data);
   tmp=(struct node *)malloc(sizeof(struct node));
   p=tmp;
   start=tmp;
   tmp->data=data;
   for(i=2;i<=a;i++)
   {
   printf("enter data");
   scanf("%d",&data);
   tmp=(struct node *)malloc(sizeof(struct node));

   p=start;
   while(p!=NULL)
	p=p->next;

   tmp->data=data;
   p=tmp;
   tmp->next=NULL;
   }




return p;
}

void display(struct node *start)
{

struct node *p;
p=start;
printf("%p",p);
if(p==NULL)
{

printf("lsit is empty");
return;
}
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}




}














void main()
{

struct node *start=NULL;

clrscr();
printf("%p",start);
start=createList(start);
display(start);
printf("main:%p",start);
getch();






}