#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
        delay(1);  
        putpixel(x,y,fillColor);  
        flood(x+1,y,fillColor,defaultColor);  
        flood(x-1,y,fillColor,defaultColor);  
        flood(x,y+1,fillColor,defaultColor);  
        flood(x,y-1,fillColor,defaultColor);
		  
        flood(x+1,y+1,fillColor,defaultColor);  
        flood(x-1,y+1,fillColor,defaultColor);  
        flood(x+1,y-1,fillColor,defaultColor);  
        flood(x-1,y-1,fillColor,defaultColor); 
    }  
}  
void main()  
{  
    int gd=DETECT,gm;  
    int x0,y0,x1,y1;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
	printf("Enter Rectangle Coordinates: ");
	scanf("%d %d %d %d",&x0,&y0,&x1,&y1);  
    rectangle(x0,y0,x1,y1);  
    flood(x0+5,y0+5,10,0);  
    getch(); 
	closegraph(); 
}  
  
