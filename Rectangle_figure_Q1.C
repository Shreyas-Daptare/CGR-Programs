#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
rectangle(50,50,350,250);
rectangle(100,100,300,200);
rectangle(25,400,400,300);
line(320,250,360,300);
line(80,250,65,300);
getch();
closegraph();
}