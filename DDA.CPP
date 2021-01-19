/*DDA*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void DDA(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0,i;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
    float X = X0;
    float Y = Y0;
    for(i=0; i <= steps; i++)
    {
	putpixel (X,Y,RED);
	X += Xinc;
	Y += Yinc;
    delay(150);
    }
}
int main()
{
    int gd = DETECT, gm, i;
    int X0 = 2, Y0 = 2, X1 = 14 , Y1 = 14;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    DDA(200, 200, 300, 400);
    scanf("%d",&i);
    getch();
    return 0;
}
