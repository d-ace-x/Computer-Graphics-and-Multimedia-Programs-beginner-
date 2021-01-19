/* C program to draw a rectangle*/
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd = DETECT, gm;
	int left = 150, top = 150;
	int right = 450, bottom = 450;
	initgraph(&gd, &gm, "C:/TurboC3/BGI");
	//setcolor(1);
	rectangle(left, top, right, bottom);
	getch();
	closegraph();
	return 0; 
} 
