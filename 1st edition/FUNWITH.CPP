#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{             int n;
       cout<<"enter no for mathews";
       int x;
       int power=0;
       cin>>n;
       while(n>0)
       {
      x=n%10;
power=power+pow(x,2);
	     n=n/10;
       }
   int    mathew =power%10;
   if(mathew==1)
   {
   cout<<"mathew no";
   }
  cout<<"enter number for john";
  int j;
  cin>>j;
  float john=(n*(n+1))/2;
getch();
}