#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct Node *next;


};
struct node *addAtBegin(struct node *start,int data)
{

struct node *tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->data=data;
tmp->next=start;
start=tmp;
return start;
}

void display(struct node *start)
{


if(start==NULL)
{
printf("empty");
return;
}







while(start!=NULL)
{
printf("%d",start->data);
start=start->next;


}


}


void main()
{
struct node *start=NULL;
int data=2;
clrscr();
start=addAtBegin(start,data);
start=addAtBegin(start,1);
start=addAtBegin(start,2);
display(start);
printf("\n");
display(start);


getch();
}