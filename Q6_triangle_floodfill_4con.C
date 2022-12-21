#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
        delay(5);  
        putpixel(x,y,fillColor);  
        flood(x+1,y,fillColor,defaultColor);  
        flood(x-1,y,fillColor,defaultColor);  
        flood(x,y+1,fillColor,defaultColor);  
	flood(x,y-1,fillColor,defaultColor);
    }
}
void main()
{
    int gd=DETECT,gm,choice;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    line(200,200,150,250);
    line(200,200,250,250);
    line(150,250,250,250);
    flood(200,220,3,0);
    getch();  
    closegraph();
}  
  
