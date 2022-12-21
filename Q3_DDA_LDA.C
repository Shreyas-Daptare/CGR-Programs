#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void dda_line(int x1, int y1, int x2, int y2)
{
	float dx,dy,xinc,yinc;
	int x,y,step,counter=0;
	dx=(x2-x1);
	dy=(y2-y1);
	if(dx>dy)
		step=dx;
	else
		step=dy;
	xinc=dx/step;
	yinc=dy/step;

	x=x1;
	y=y1;

	while(counter<=step)
	{
		putpixel(round(x),round(y),RED);
		x=x+xinc;
		y=y+yinc;
		counter++;
	}
}
void main()
{
    int gd = DETECT ,gm, i;
    int x0,y0,xn,yn;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");

    printf("Enter x0 and y0: ");
    scanf("%d %d",&x0,&y0);
    printf("Enter xn and yn: ");
    scanf("%d %d",&xn,&yn);
    dda_line(x0,y0,xn,yn);
    getch();
    closegraph();
}
