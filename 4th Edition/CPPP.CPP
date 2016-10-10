#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
fstream fin;
fin.open("sam.txt",ios::out|ios::in|ios::binary);
float b=23.678;
fin.write((char *)&b,sizeof(float));
				 cout<<"saved";
				 getch();

}