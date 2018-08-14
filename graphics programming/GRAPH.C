#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){

   int gm=DETECT,gd,i;
   initgraph(&gm,&gd,"C:\\Turboc3\\bgi");
   cleardevice();
     setfillstyle(1,6);
     rectangle(100,100,400,150);
     floodfill(150,140,15);

     setfillstyle(1,7);
     circle(100,100,5);
     floodfill(101,101,15);
     floodfill(99,99,15);


     rectangle(100,151,400,200);
     setfillstyle(1,7);
     floodfill(150,180,15);

     for(i=0;i<20;i++){
	setcolor(1);
	circle(250,176,1+i);
     }
     setcolor(WHITE);
     setfillstyle(1,2);
     rectangle(100,200,400,250);
     floodfill(150,220,15);
     line(100,100,100,400);

     setfillstyle(1,4);
     rectangle(80,400,120,420);
     floodfill(90,401,15);

     setfillstyle(1,3);
     rectangle(60,420,140,440);
     floodfill(70,421,15);

//     arc(120,100,150,350,50);

      getch();
}