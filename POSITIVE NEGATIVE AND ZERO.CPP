#include<iostream.h>
#include<conio.h>
void main()
{
int num;
clrscr();
cout<<"Enter the number:-";
cin>>num;
if(num>0)
{
cout<<"Positive";
}else if(num<0)
{
cout<<"Negative";
}
else
{
cout<<"Zero";
}
getch();
}