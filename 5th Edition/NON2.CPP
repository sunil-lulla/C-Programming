#include<fstream.h>
#include<conio.h>
class IES
{
int roll;
char grade;
float per;
public :
void getData()
{
cout<<"enter the roll,grade and per values";
cin>>roll>>grade>>per;
}
public void showData()
{

cout<<roll<<grade<<per;
}
};

void main()
{
clrscr();
IES aIES;
fstream f;
f.open("hw.txt",ios::out|ios::in|ios::binary);
char ch;
  do
  {
  s.getData();
  f.write((char *)&aIES,sizeof(aIES));
  cout<<"y/n";
  cin>>ch;
  }
  while(ch=='y');

  fin.read((char *)&aIES,sizeof(aIES));





getch();




















}