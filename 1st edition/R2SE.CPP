  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  clrscr();
  int n,x,rev=0;
  scanf("%d",&n);
  while(n>0)
  {         //543
  x=n%10; //    3

   //
   rev=rev*10+x;
     n=n/10;

  }
  printf("%d",rev);
  getch();

  }