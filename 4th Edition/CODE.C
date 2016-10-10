main()
{
int i,j,k;
char a[]={"i have many books"};
      i=0,j=0,k=0;
      clrscr();


      for(;a[i]!='\0';i++)
      {

       if(a[i]==' ')
       continue;
       j=i;
      for(;a[i]!=32&&a[i]!='\0';i++);

       k=i-1;
       i--;
       for(;k>=j;k--)
       {
       printf("%c",a[k]);
       }



      }





			getch();




return 0;
}