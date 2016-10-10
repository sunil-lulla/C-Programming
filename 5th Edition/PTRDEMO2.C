main()
{
int a=10;
int *pa=&a;
int **ppa=&pa;
clrscr();
printf("%d",&a);
printf("%d",pa);
printf("%d",*ppa);
scanf("%d",-12);
printf("%d",a);
getch();

}