#include<stdio.h>
#include<conio.h>
#include<string.h>

 char * get(char *p)
    {
    static  int i=0;
 char arr1[20];
 int j;

    j=i;
    for(;p[i]!=' ';i++);
    strncpy(arr1,&p[j],i-j);
   // printf("--size of--%d",sizeof arr1);

    arr1[i-j]='\0';
    printf("%s",arr1);
    i++;
    return arr1;
	}
    void main()
    {
    char *a;
  char arr[]={"my name is shivam"}; // clrscr();
	     // printf("%dsizeof",strlen(arr));
     get(arr);
	     get(arr);
	     get(arr);
	     get(arr);

     //printf("%s",a);
    getch();
    }


/*
    char * get(char *p)
    {
    printf("a");
    j=i;
    for(;i!=' ';i++)
    strncpy(arr1,&p[i],i-j);
    arr1[i-j]='\0';
    printf("%s",arr1);
    i++;
    return arr1;
	} */