/*ROTATION*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
	int gd = DETECT, gm, r, d, x1, y1, x2, y2, xn1, yn1, xn2, yn2;
	float ra, si, co;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	cout<<"\nEnter value of x1 and y1\n";
	cin>>x1>>y1;
	cout<<"\nEnter value of x2 and y2\n";
	cin>>x2>>y2;
	setcolor(1);
	line(x1,y1,x2,y2);
	cout<<"Enter the angle";
	cin>>d;

	xn1 = x1;
	yn1 = y1;
	r = x2-x1;
	ra = 0.0175 *d;
	si = sin(ra);
	co = cos(ra);
	xn2 = x1 + r*co + 1;
	yn2 = y1 + r*si + 1;
	setcolor(3);
	line(xn1,yn1,xn2,yn2);
	getch();
	closegraph();
	return 0;
}