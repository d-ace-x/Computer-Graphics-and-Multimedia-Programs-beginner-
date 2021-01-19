/*Translation*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void drawline(int x1,int y1,int x2,int y2,int t1,int t2)
{
	int x=x1;
	int y=y1;
	int s=x2;
	int p=y2;
	setcolor(1);
	line(x,y,s,p);
	x=x+t1;
	y=y+t2;
	s=s+t1;
	p=p+t2;
	cout<<"after translation %d %d"<<x<<y;
	setcolor(3);
	line(x,y,s,p);
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	drawline(150,150,120,120,50,50);
	getch();
	closegraph();
	return 0;
}