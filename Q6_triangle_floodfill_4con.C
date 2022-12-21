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
    int x,y,x1,y1,x2,y2;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    printf("\n Please enter first coordinate of the triangle= ");
	scanf("%d %d", &x,&y);
	printf("\n Enter second coordinate of the triangle = ");
	scanf("%d %d",&x1,&y1);
	printf("\n Enter third coordinate of the triangle = ");
	scanf("%d %d",&x2,&y2);
    
    line(x,y,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x,y);	
	
    flood(x,y+5,3,0);
    getch();  
    closegraph();
}  
  
