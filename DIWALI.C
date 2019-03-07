#include<stdio.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>
int limx,limy;
double xt,yt;
char msg[20];
void basics()
{
 setcolor(BROWN);
 line(limx/2-limx/40,limy-limy/20,limx/2,limy-limy/8);
 line(limx/2+limx/40,limy-limy/20,limx/2,limy-limy/8);
 line(limx/2-limx/40,limy-limy/20,limx/2+limx/40,limy-limy/20);
 setcolor(GREEN);
 sprintf(msg,"CRACKPOT ");
 outtextxy(limx/3,5*limy/6,msg);
}
double run(float x1[3],float y1[3],double t)
{
// while(!kbhit()a)
 {
  if(t<1.0)
  {
   xt = pow (1-t, 2) * x1[0] + 2 * t *(1-t) * x1[1]+pow (t, 2) * x1[2];
   yt = pow (1-t, 2) * y1[0] + 2 * t *(1-t) * y1[1] +pow (t, 2) * y1[2];
   putpixel (xt, yt, YELLOW);
   delay(5);
   t+=0.005;
  }
 }
 return t;
// getch();
}
void main()
{
 int gd=DETECT,gm,x,y;
 float x1[3],y1[3];
 double t1=0.0,t2=0.0,t3=0.0,t4=0.0,t5=0.0,t6=0.0,t7=0.0,t8=0.0;
 initgraph(&gd,&gm,"..//bgi");
 limx=getmaxx();
 limy=getmaxy();
 x=limx/2+70;
 y=limy-limy/8-70;
 while(x>limx/2)
 {
  cleardevice();
  x--;
  y++;
  setcolor(YELLOW);
  line(x,y-1,x+20,y-21);
  line(x,y,x+20,y-20);
  line(x,y+1,x+20,y-19);
  setcolor(RED);
  line(x,y,x-6,y-4);
  line(x,y,x-6,y+4);
  line(x,y,x-8,y-2);
  line(x,y,x-5,y+3);
  line(x,y,x-3,y+7);
  setcolor(WHITE);
  line(x+20,y-20,x+30,y-30);
  basics();
  delay(30);
 }
 cleardevice();
 basics();
 setcolor(GREEN);
 while(t1<1.0)
 {
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2+20;
  y1[1]=limy/4;
  x1[2]=limx/2+50;
  y1[2]=limy/2-10;
  t1=run(x1,y1,t1);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2-20;
  y1[1]=limy/4;
  x1[2]=limx/2-50;
  y1[2]=limy/2-10;
  t2=run(x1,y1,t2);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2+20;
  y1[1]=3*limy/8;
  x1[2]=limx/2+40;
  y1[2]=limy/2+15;
  t3=run(x1,y1,t3);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2-20;
  y1[1]=3*limy/8;
  x1[2]=limx/2-40;
  y1[2]=limy/2+15;
  t4=run(x1,y1,t4);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2+20;
  y1[1]=limy/8;
  x1[2]=limx/2+40;
  y1[2]=limy/2-20;
  t5=run(x1,y1,t5);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2-20;
  y1[1]=limy/8;
  x1[2]=limx/2-40;
  y1[2]=limy/2-20;
  t6=run(x1,y1,t6);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2+5;
  y1[1]=limy/8;
  x1[2]=limx/2+10;
  y1[2]=limy/4+25;
  t7=run(x1,y1,t7);
  x1[0]=limx/2;
  y1[0]=limy-limy/8;
  x1[1]=limx/2-5;
  y1[1]=limy/8;
  x1[2]=limx/2-10;
  y1[2]=limy/4+25;
  t8=run(x1,y1,t8);
 }
 sprintf(msg,"HAPPY DIWALI :)");
 outtextxy(3*limx/4,limy/2,msg);
 getch();
}