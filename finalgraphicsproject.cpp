#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h> //for producting sound,date and time functions handling interrupts
void windmill1(float x[7], float y[7]);
void windmill2(float x[7], float y[7]);
void windmill3(float x[7], float y[7] );

void delay1(int a)
{
	int add;
	int time;
	int i;
	time= a*1000000000000;
	for(i=0;i<=time;i++)
	{
		add*=add;
		add++;
		add++;
	}
}
void bulbdark(void)
{
		//setcolor(BLACK);
	//setfillstyle(SOLID_FILL,BLACK);
	circle(300,200,30);
    //floodfill(302,202,WHITE);
    //outtextxy(290,100,op);
    //setcolor(RED);
    //setfillstyle(SOLID_FILL,RED);
    rectangle(284,225,315,250);
    //floodfill(286,227,15);
    line(300,230,295,205);
    line(300,230,305,205);
    
 	//delay1(5);
 	
	//setcolor(YELLOW);
	//setfillstyle(SOLID_FILL,YELLOW);
	
	//circle(300,200,30);
	//floodfill(300,200,YELLOW);
	//setcolor(WHITE);
	//rectangle(284,225,315,250);
	//line(300,230,295,205);
   // line(300,230,305,205);
}
void bulblight(void)
{
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	
	circle(300,200,30);
	floodfill(300,200,YELLOW);
	setcolor(WHITE);
	rectangle(284,225,315,250);
	line(300,230,295,205);
    line(300,230,305,205);
}
int main()
{
int gd=DETECT,gm;
float x[7],y[7],maxx,maxy,xw1,yw1,xw2,yw2;
float theta=30;
initwindow(1000,900,"DISPLAY");
maxx=getmaxx();
maxy=getmaxy();
x[0]=maxx/2;
y[0]=maxy/2;
x[1]=y[4]=x[2]=-90;
y[6]=y[5]=y[1]=60;
y[2]=35;
y[3]=-100;
x[4]=20;
x[3]=0;
x[5]=90;
x[6]=65;
theta=theta*22/7/180;
bulbdark();
delay1(5);
//bulblight();
//delay1(5);
while(kbhit()==0)
{
windmill1(x,y);
windmill2(x,y);
windmill3(x,y);
xw1=cos(theta)*x[1]+sin(theta)*y[1];
yw1=-sin(theta)*x[1]+cos(theta)*y[1];
xw2=cos(theta)*x[2]+sin(theta)*y[2];
yw2=-sin(theta)*x[2]+cos(theta)*y[2];
x[1]=xw1;
y[1]=yw1;
x[2]=xw2;
y[2]=yw2;
xw1=cos(theta)*x[3]+sin(theta)*y[3];
yw1=-sin(theta)*x[3]+cos(theta)*y[3];
xw2=cos(theta)*x[4]+sin(theta)*y[4];
yw2=-sin(theta)*x[4]+cos(theta)*y[4];
x[3]=xw1;
y[3]=yw1;
x[4]=xw2;
y[4]=yw2;
xw1=cos(theta)*x[5]+sin(theta)*y[5];
yw1=-sin(theta)*x[5]+cos(theta)*y[5];
xw2=cos(theta)*x[6]+sin(theta)*y[6];
yw2=-sin(theta)*x[6]+cos(theta)*y[6];
x[5]=xw1;
y[5]=yw1;
x[6]=xw2;
y[6]=yw2;
delay(75);
cleardevice();
}
closegraph();
getch();
//bulblight();
//delay1(5);
}
void windmill1(float x[7],float y[7])
{
	bulblight();
	x[0]=1000/2.5;
	y[0]=975/2;
//cleardevice();
line(x[0],y[0],x[0]-50,y[0]+200);//left slant line
line(x[0],y[0],x[0]+50,y[0]+200);//right slant line
line(x[0]-60,y[0]+200,x[0]+60,y[0]+200);//bottom line
line(x[0],y[0],x[0]+x[1],y[0]-y[1]);//turbine left 1
line(x[0],y[0],x[0]+x[2],y[0]-y[2]);//turbine left 2
line(x[0]+x[1],y[0]-y[1],x[0]+x[2],y[0]-y[2]);//turbine left closing
line(x[0],y[0],x[0]+x[3],y[0]-y[3]);//turbine bottom 1 vertical
line(x[0],y[0],x[0]+x[4],y[0]-y[4]);//turbine 2 vertical
line(x[0]+x[3],y[0]-y[3],x[0]+x[4],y[0]-y[4]);//turbine 2 closing
line(x[0],y[0],x[0]+x[5],y[0]-y[5]);//turbine right up
line(x[0],y[0],x[0]+x[6],y[0]-y[6]);//turbine right bottom
line(x[0]+x[5],y[0]-y[5],x[0]+x[6],y[0]-y[6]);//right closing


}

//windmill2
void windmill2(float x[7],float y[7])
{
	float theta,xw1,yw1,xw2,yw2;
	x[0]=1000/9;
	y[0]=975/2;
	theta=theta*22/7/180;
	//cleardevice();
line(x[0],y[0],x[0]-50,y[0]+200);//left slant line
line(x[0],y[0],x[0]+50,y[0]+200);//right slant line
line(x[0]-60,y[0]+200,x[0]+60,y[0]+200);//bottom line
line(x[0],y[0],x[0]+x[1],y[0]-y[1]);//turbine left 1
line(x[0],y[0],x[0]+x[2],y[0]-y[2]);//turbine left 2
line(x[0]+x[1],y[0]-y[1],x[0]+x[2],y[0]-y[2]);//turbine left closing
line(x[0],y[0],x[0]+x[3],y[0]-y[3]);//turbine bottom 1 vertical
line(x[0],y[0],x[0]+x[4],y[0]-y[4]);//turbine 2 vertical
line(x[0]+x[3],y[0]-y[3],x[0]+x[4],y[0]-y[4]);//turbine 2 closing
line(x[0],y[0],x[0]+x[5],y[0]-y[5]);//turbine right up
line(x[0],y[0],x[0]+x[6],y[0]-y[6]);//turbine right bottom
line(x[0]+x[5],y[0]-y[5],x[0]+x[6],y[0]-y[6]);//right closing

}

void windmill3(float x[7],float y[7])
{
	float theta,xw1,yw1,xw2,yw2;
	x[0]=1000/4;
	y[0]=975/2;
	theta=theta*22/7/180;
	//cleardevice();
line(x[0],y[0],x[0]-50,y[0]+200);//left slant line
line(x[0],y[0],x[0]+50,y[0]+200);//right slant line
line(x[0]-60,y[0]+200,x[0]+60,y[0]+200);//bottom line
line(x[0],y[0],x[0]+x[1],y[0]-y[1]);//turbine left 1
line(x[0],y[0],x[0]+x[2],y[0]-y[2]);//turbine left 2
line(x[0]+x[1],y[0]-y[1],x[0]+x[2],y[0]-y[2]);//turbine left closing
line(x[0],y[0],x[0]+x[3],y[0]-y[3]);//turbine bottom 1 vertical
line(x[0],y[0],x[0]+x[4],y[0]-y[4]);//turbine 2 vertical
line(x[0]+x[3],y[0]-y[3],x[0]+x[4],y[0]-y[4]);//turbine 2 closing
line(x[0],y[0],x[0]+x[5],y[0]-y[5]);//turbine right up
line(x[0],y[0],x[0]+x[6],y[0]-y[6]);//turbine right bottom
line(x[0]+x[5],y[0]-y[5],x[0]+x[6],y[0]-y[6]);//right closing

}
