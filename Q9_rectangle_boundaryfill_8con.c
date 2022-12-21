#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>

void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
    	delay(5);
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
        
        boundaryFill4(x + 1, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y + 1, fill_color, boundary_color);
        boundaryFill4(x + 1, y - 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y - 1, fill_color, boundary_color);
    }
}
void main()
{
    int gd = DETECT, gm;
    int x0,y0,x1,y1;
    initgraph(&gd, &gm, "C://TURBOC3//BGI");
    
    printf("Enter Rectangle Coordinates: ");
	scanf("%d %d %d %d",&x0,&y0,&x1,&y1);  
    rectangle(x0,y0,x1,y1);
    boundaryFill4(x0+5, y0+5, 5, 15);
   
    getch();
    closegraph();
}
