#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void EightWaySymmetricPlot(int xc,int yc,int x,int y)
{
	putpixel(y+xc,x+yc,CYAN);
	putpixel(x+xc,y+yc,CYAN);
	putpixel(-x+xc,y+yc,CYAN);
	putpixel(-y+xc,x+yc,CYAN);

	putpixel(-y+xc,-x+yc,CYAN);
	putpixel(-x+xc,-y+yc,CYAN);
	putpixel(x+xc,-y+yc,CYAN);
	putpixel(y+xc,-x+yc,CYAN);
}

void BresenhamCircle(int xc,int yc,int r)
{
	int x=0,y=r,d=3-(2*r);
	EightWaySymmetricPlot(xc,yc,x,y);

	while(x<=y)
	{
		if(d<0)
		{
		d=d+(4*x)+6;
		}
		else
		{
		d=d+(4*x)-(4*y)+10;
		y=y-1;
		}
	    x=x+1;
	    EightWaySymmetricPlot(xc,yc,x,y);
	}
}

int  main(void)
{
	int xc,yc,r,gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	printf("Enter the values of xc and yc :");
	scanf("%d%d",&xc,&yc);
	printf("Enter the value of radius  :");
	scanf("%d",&r);
	BresenhamCircle(xc,yc,r);

	getch();
	closegraph();
}