/*COMPOSITE ROTATION*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void compRotation(int xa, int ya, int xb, int yb, float ang1, float ang2)
{
  float ang, can, san;
  ang = ang1+ang2;
  can = cos(ang1*3.14/180);
  san = sin(ang2*3.14/180);
  xa = floor(xa*can+ya*san);
  ya = floor(-xa*san+ya*can);
  xb = floor(xb*can+yb*san);
  yb = floor(-xb*san+yb*can);
  printf("After composite rotation new points:- \n %d\t%d\t%d\t%d\t",xa,ya,xb,yb);
  setcolor(1);
  line(xa,ya,xb,yb);
}

int main(void)
{
int gdriver = DETECT, gmode,xa,xb,ya,yb,ang1,ang2;
initgraph(&gdriver, &gmode,"C:\\TurboC3\\BGI");
printf("\n\n Enter all coordinates values :");
scanf("%d %d %d %d",&xa,&ya,&xb,&yb);
printf("\n\n The original Image");
line(xa,ya,xb,yb);
printf("\n\n Enter 2 rotation angle :");
scanf("%f %f",&ang1, &ang2);
compRotation(xa,ya,xb,yb,ang1,ang2);
getch();
closegraph();
return 0;
}