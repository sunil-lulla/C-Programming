#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	       clrscr();
fstream fin;
fin.open("sam.txt",ios::out|ios::in|ios::binary);
cout<<"type a message";
char str[80];
cin.getline(str,80);
int i=0;

while(str[i]!='\0')
{
fin<<str[i++];
}

cout<<"file saved successfully\n";
cout<<"press any key to read data\n";
getch();
char ch;
int k=0;
fin.seekg(0);
while(1)
{
ch=fin.get();
if(fin.eof())
break;
cout<<ch;
if(ch!=32)
k++;
}
fin.close();
cout<<"readed"<<k<<"written"<<endl;
getch();

}
