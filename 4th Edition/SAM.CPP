main()
{


int *p,*q,i;
i=&i;
p=(int *)malloc(6*sizeof(int));
	clrscr();	q=p;
for( i=0;i<6;i++)
scanf("%d",p+i);
for(i=0;i<6;i++)
printf("%d\t",*(p+i));
	p=&p;
free(q);
for(i=0;i<6;i++)
printf("%d\t",*(p+i));
 getch();
}