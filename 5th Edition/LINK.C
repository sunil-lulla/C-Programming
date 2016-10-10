#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
int data;
struct node *link;
};
void addAtEnd(struct node *start,int data)
{

struct node *tmp,*p;
p=start;
while(start->link!=NULL)
	start=start->link;

 tmp=(struct node *)malloc(sizeof(struct node));
 tmp->data=data;
 start->link=tmp;
 tmp->link=NULL;








}
void display(struct node *start)
{


while(start!=NULL)
{
printf("%d",start->data);

 start=start->link;
 }


}


struct node * addAtBeg(struct node *start,int data)
{
 struct node *tmp,*p;
 tmp=(struct node *)malloc(sizeof(struct node));
 tmp->data=data;
  tmp->link=start;
  start=tmp;

return start;
}
struct node * createlist(struct node *start)
{
 int n,k,i;
 if(start==NULL)
 {
	printf("enter the data");
	scanf("%d",&n);
	start = addAtBeg(start,n);
 }

 printf("enter the data u want to store");
 scanf("%d",&k);
 for(i=1;i<=k;i++)
 {

	printf("enter the data");
	scanf("%d",&n);
	addAtEnd(start,n);

 }





 return start;
}

void main()
{


struct node *start=NULL;
clrscr();
start = createlist(start);
display(start);


getch();

}