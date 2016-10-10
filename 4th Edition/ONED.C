int num(int []);
main()
{
int i=-1;
int a[10]={0,1,2,32,43,4,4,4,4};
   clrscr();
   while(i++<9)
   {
   printf("%d\t",a[i]);
   }
   i=-1;
   printf("\n");
   num(a);
   while(i++<9)
   {

   printf("%d\t",a[i]);
   }
   getch();
return 0;

}
int num(int a[1])
{
int i=-1;
while(i++<9)
{
a[i]+=1;
}
return 0;
}