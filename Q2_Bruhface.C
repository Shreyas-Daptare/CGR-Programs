#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
circle(200,200,100);
circle(160,155,15);
circle(240,155,15);
line(200,190,190,220);
line(200,190,210,220);
line(190,220,210,220);
rectangle(170,240,230,260);
getch();
closegraph();
}
