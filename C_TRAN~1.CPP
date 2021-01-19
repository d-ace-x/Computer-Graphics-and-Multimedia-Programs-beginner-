/*COMPOSITE TRANSLATION*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int compTranslation(int xa, int ya, int xb, int yb)
{
  int y1a,y1b,x1a,x1b,tx,ty;
  printf("Enter 2 consecutivetranslation vector");
  scanf("%d%d%d%d",&x1a,&y1a,&x1b,&y1b);
  tx = x1a+x1b;
  ty = y1a+y1b;
  printf("After composite translation %d\t%d",tx,ty);
  xa = xa + tx;
  ya = ya + ty;
  xb = xb + tx;
  yb = yb + ty;
  setcolor(1);
  line(xa,ya,xb,yb);
}
int main(void)
{
int gdriver = DETECT, gmode,i,xa,xb,ya,yb;
initgraph(&gdriver, &gmode,"C:\\TurboC3\\BGI");
printf("\n\n Enter all coordinates values :");
scanf("%d %d %d %d",&xa,&ya,&xb,&yb);
printf("\n\n The original Image");
line(xa,ya,xb,yb);
compTranslation(xa,ya,xb,yb);
getch();
closegraph();
return 0;
}