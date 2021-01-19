/*SCALLING*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void drawline(int x1,int y1,int x2,int y2,int s1,int s2)
{
	int x=x1;
	int y=y1;
	int s=x2;
	int p=y2;
	setcolor(1);
	line(x,y,s,p);
	x=x*s1;
	y=y*s2;
	s=s*s1;
	p=p*s2;
	cout<<"After Scalling %d %d"<<x<<y;
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