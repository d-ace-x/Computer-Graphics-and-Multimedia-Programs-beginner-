/*COMPOSITE SCALLING*/
#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void compScalling(int xa,int ya, int xb, int yb)
{
  int sx,sy,sx1,sx2,sy1,sy2;
  printf("Enter 2 consecutive scalling vectors:- \n");
  scanf("%d %d %d %d",&sx1,&sy1,&sx2,&sy2);
  sx = sx1*sx2;
  sy = sy1*sy2;
  xa = xa * sx;
  ya = ya * sy;
  xb = xb * sx;
  yb = yb * sy;
  printf("After composite scalling %d\t%d:",sx,sy);
  setcolor(1);
  line(xa,ya,xb,yb);
}
int main(void)
{
int gdriver = DETECT, gmode,xa,xb,ya,yb;
initgraph(&gdriver, &gmode,"C:\\TurboC3\\BGI"); /* request for auto detection*/
printf("\n\n Enter all coordinates values :");
scanf("%d %d %d %d",&xa,&ya,&xb,&yb);
printf("\n\n The original Image");
line(xa,ya,xb,yb);
compScalling(xa,ya,xb,yb);
getch();
closegraph();
return 0;
}