#include<iostream.h>
#include<conio.h>
void main()
{

   clrscr();
   int i;
int a[5];
cout<<"enter value fro 1st array";
for(i=0;i<5;i++)
{
cout<<"enter value for"<<i<<"index\n";
cin>>a[i];
}
int b[5];
cout<<"enter value fro 2nd array";
for(i=0;i<5;i++)
{
cout<<"enter value for"<<i<<"index\n";
cin>>b[i];
}
      int j=0;
int c[10];
for(i=0;i<10;i++)
{

if(i<5)
{
  c[i]=a[i];
  continue;
}
c[i]=b[j];
j++;
}
cout<<"\n values of 3rd array";
for(i=0;i<10;i++)
{
cout<<c[i];
}

getch();

}