#include <graphics.h> /* include the necessary header files*/  
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h>  
void draw(int xa,int ya,int xb,int yb); void main()  
{  
int xa,ya,xb,yb;  
clrscr();  
printf("Line DDA algorithm");  
printf("\n Enter the value of xa, ya:");  
scanf("%d%d",&xa,&ya);  
printf("\n Enter the value of xb, yb:");  
scanf("%d%d",&xb,&yb);  
draw(xa,ya,xb,yb);  
}  
void draw(int xa,int ya,int xb,int yb)  
{  
int xin,yin,x,y,dx,dy,steps,k; /* request auto detection */  
int gdriver=DETECT,gmode,errorcode; /* initialize graphics and local variables */  
initgraph(&gdriver,&gmode, "c:\\tc\\bgi")   /* read result of initialization */  
errorcode=graphresult(); /* an error occurred */   
   
if (errorcode!=grOk)  
{  
printf("Graphics error: %s\n", grapherrormsg(errorcode)); 
printf("Press any key to halt:");  
getch();  
exit(1);  
}  
dx=xb-xa; dy=yb-ya;  
if(abs(dx)>abs(dy)) /* if the condition is satisfied */  
{ /* calculate the value of the condition variable*/  
steps=abs(dx);  
}  
else  
{  
steps=abs(dy);  
}  
xin=dx/steps;  
yin=dy/steps;  
x=xa;  
y=ya;  
putpixel(x,y,1); /* draw the first pixel for the line*/ for(k=1;k<=steps;k++) /* for each value of the condition variable, */  
{  
x=x+xin; /* calculate the values of (x,y) and draw the pixel*/  
y=y+yin;  
putpixel(x,y,1);  
} /* clean up */  
getch();  
closegraph();  
} 