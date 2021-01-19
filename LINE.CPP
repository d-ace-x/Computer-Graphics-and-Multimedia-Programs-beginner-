/*LINE*/

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
for(i=1;i<15;i++)
putpixel(300*i,800+i,GREEN);
line(90,100,200,200);
getch();
}