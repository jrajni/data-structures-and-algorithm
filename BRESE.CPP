#include<iostream.h>
#include<conio.h>
int main(void)
{  clrscr();
    int dy,dx,x1,x2,x3=0,y1,y2,y3=0;
    cin>>x1>>y1>>x2>>y2;
    int d1,d2;
    dy=y2-y1;
    dx=x2-x1;
    d1=2*dy-dx;
    cout<<d1<<endl;
    	  x3=x1;
    while(x1!=x2&&y1!=y2)
    {if(d1>=0)
    {
	d2=d1+2*(dy-dx);
	y3=y1+1;
	x3++;
    }else
    {
	d2=d1+2*dy;
	y3=y1;
	x3++;
    }
    x1=x3;
    y1=y3;
    d1=d2;
    cout<<d1<<" "<<x1<<" "<<y1<<endl;
}
getch();
return 0;
}
