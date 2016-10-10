#include<iostream.h>
void main()
{

int n,a37,a32,a16,a8,a4,a2,a1;
cout<<"enter number";
cin>>n;
int k=n;
if(n<=100)
{
a37=n/37;
n=n%37;
a32=n/32;
n=n%32;
a16=n/16;
n=n%16;
a8=n/8;
n=n%8;
a4=n/4;
n=n%4;
a2=n/2;
n=n%2;
a1=n/1;
cout<<"number given by guru is 37 \n";
      cout<<"the combination of this values make"<<k<<" \n37 is "<<a37<<"\n32 is "<<a32<<"\n16 is "<<a16<<"\n8  is "<<a8<<"\n4  is "<<a4<<"\n2  is "<<a2<<"\n1  is "<<a1;
}
else
cout<<"\ntotal rs are only 100";

}