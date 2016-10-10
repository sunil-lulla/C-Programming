#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int info;
struct node *link;
};
int search(struct node *start,int data)
{
struct node *p;
int pos=1;
p=start;
do
{
if(p->info==data)
return pos;
++pos;
p=p->link;
}
while(p!=NULL);
return -1;
}





void addAtEnd(struct node * start,int data)
{
struct node *tmp=NULL,*p;
if(start==NULL)
{
printf("List is not created first create the list and then try\n");
return;
}
tmp=start;
while(tmp->link!=NULL)
tmp=tmp->link;
p=(struct node *)malloc(sizeof(struct node));
p->info=data;
tmp->link=p;
p->link=NULL;
clrscr();
printf("Added successfull press any key to continue");
getch();
}

void display(struct node * start)
{
struct node *p;
p=start;
while(p!=NULL)
{
printf("%d\t",p->info);
p=p->link;
}
}


struct node * insertBefore(struct node *start,int data,int item)
{
struct node *p,*temp;
if(start==NULL)
{
printf("List is empty\n");
return NULL;
}
p=start;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
if(p->info==item)
{
temp->link=p;
start=temp;
return start;
}



while(p->link!=NULL)
{
if(p->link->info==item)
{
temp->link=p->link;
p->link=temp;
return start;
}
p=p->link;
}
printf("NOt found");
return start;
}

void insertAt(struct node *start,int data,int pos)
{
int i=0;
struct node *tmp,*p;
tmp=start;
p=(struct node *)malloc(sizeof(struct node));
p->info=data;
if(pos==1)
{
p->link=tmp->link;
tmp->link=p;
return ;
}
while(tmp->link!=NULL)
{
++i;
if(i==pos)
break;
tmp=tmp->link;
}
if(i<pos)
{
printf("position not avilable");
return;
}
p->link=tmp->link;
tmp->link=p;
}


struct node * createList(struct node *start)
{
struct node *temp;
int size=0,i=0,data=0;
if(start!=NULL)
{
printf("List is alreday created\n");
return start;
}
printf("Enter the initial size of list");
scanf("%d",&size);
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&data);
temp->info=data;
temp->link=NULL;
start=temp;
for(i=2;i<=size;i++)
{
printf("Enter data");
scanf("%d",&data);
addAtEnd(start,data);
}
return start;
}


struct node* deleteLast(struct node *start)
{
struct node *temp;
if(start==NULL)
return NULL;
temp=start;
if(temp->link==NULL)
{
free(temp);
return NULL;
}
while(temp->link->link!=NULL)
temp=temp->link;
free(temp->link);
temp->link=NULL;
return start;
}


struct node *deleteAfter(struct node *start,int data)
{
struct node *temp,*p;
temp=start;
if(start==NULL)
{
printf("List is empty first create the list and try again");
return NULL;
}
do
{
if(temp->info==data)
{
if(temp->link==NULL)
{
printf("This is the last node");
return start;
}
p=temp->link;
temp->link=p->link;
free(p);
return start;
}


temp=temp->link;
}
while(temp!=NULL);
printf("data is not avilable");
return start;
}

int getSize(struct node * start)
{
struct node *tmp;
int i=0;
tmp=start;
while(tmp!=NULL)
{
++i;
tmp=tmp->link;
}
return i;
}


struct node * deleteBefore(struct node *start,int data)
{
struct node *tmp,*p;
if(start==NULL)
{
printf("The list is empty");
return NULL;
}
tmp=start;
if(tmp->info==data)
{
printf("This is the first node of the list");
return start;
}
while(tmp->link!=NULL)
{
if(tmp->link->link->info==data)
{
p=tmp->link;
tmp->link=p->link;
free(p);
return start;
}
tmp=tmp->link;
}




printf("data is not avilable");
return start;
}

struct node *deleteAtPos(struct node *start,int pos)
{
int i=0;
struct node *tmp,*p;
if(start==NULL)
{
printf("The list is empty");
return start;
}
tmp=start;
if(pos==1)
{
start=tmp->link;
free(tmp);
return start;


}

do
{
++i;
if(pos-1==i)
break;
tmp=tmp->link;
}
while(tmp->link!=NULL);
if(pos>i)
{
printf("Position is not avilable");
return start;
}
p=tmp->link;
tmp->link=p->link;
free(p);
return start;
}

struct node *reverse(struct node *start)
{
struct node *current,*previous,*next;
current=start;
previous=next=NULL;
while(current!=NULL)
{
next=current->link;
current->link=previous;
previous=current;
current=next;
}
start=previous;
return start;
}



void main()
{
struct node *start=NULL;
int choice=0,data=0,pos=0,_data=0;
char ch='\0';
clrscr();
while(1)
{
while(1)
    {
	printf("  1.  create Link list\n");
	printf("  2.  insert at last\n");
	printf("  3.  insert after\n");
	printf("  4.  insert before\n");
	printf("  5.  insert at position\n");
	printf("  6.  delete all\n");
	printf("  7.  delete at pos\n");
	printf("  8.  delete after\n");
	printf(" 18.  delete before\n");
	printf("  9.  delete last\n");
	printf(" 10.  display\n");
	printf(" 11.  exit\n");
	printf(" 12.  search\n");
	printf(" 13. size\n");
	printf(" 14. Reverse\n");
	printf("insert your choice");
	scanf("%d",&choice);
	clrscr();

	switch(choice)
	{
	case 14:
		start=reverse(start);
		break;


	case 18:
		printf("Enter data whom before you want to delete nodes");
		scanf("%d",&data);
		start=deleteBefore(start,data);

		break;

	case 13:
		printf("the size of list is %d",getSize(start));
		break;


	case 7:
		printf("Enter the position u want to delete");
		scanf("%d",&pos);
		start=deleteAtPos(start,pos);
		break;


	case 8:
		printf("Enter data whom after you want to delete nodes");
		scanf("%d",&data);
		start=deleteAfter(start,data);
		break;

	case 9:
		start = deleteLast(start);
		break;


	case 4:
		printf("Enter data whom before u want to add data");
		scanf("%d",&_data);
		printf("Enter data");
		scanf("%d",&data);
		start=insertBefore(start,data,_data);
		break;


	case 1:
	       start=createList(start);
	       break;

	case 2:
		printf("Enter data");
		scanf("%d",&data);
		addAtEnd(start,data)
		;break;

	case 10:
		display(start);
		break;

	case 11:
		clrscr();
		printf("Are you sure want to quit y/n");
		scanf("%c",&ch);
		if(ch=='y')
		exit(0);
		else
		continue;

	case 12:
		printf("Enter data to be search");
		scanf("%d",&data);
		pos=search(start,data);
		if(pos==-1)
		{
		printf("not avilable");
		continue;
		}
		printf("%d is avilable at %d pos\n",data,pos);
		break;

	 case 3:

		printf("Enter data whom after you want to add the data");
		scanf("%d",&data);
		pos=search(start,data);
		if(pos==-1)
		{
		 printf("Not avilable");
		 continue;
		}
		printf("Enter new data");
		scanf("%d",&data);
		insertAt(start,data,pos);
		break;

	case 5:
		printf("Enter position");
		scanf("%d",&pos);
		if(pos<1)
		{
		printf("Invalid position");
		continue;
		}
		printf("Enter data");
		scanf("%d",&data);
		insertAt(start,data,pos-1);
		break;


	}
	}


}








}