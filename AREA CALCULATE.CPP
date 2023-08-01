#include<iostream.h>
#include<conio.h>
void main()
{
float r;
float areacircle(float);
clrscr();
cout<<"\n enter the radius of the circle";
cin>>r;
cout<<"\n the area of the circle is:-"<<areacircle(r);
areacircle(r);
getch();
}
float areacircle(float rad)
{
float pi=3.141;
float area;
area=pi*rad*rad;
return(area);
}