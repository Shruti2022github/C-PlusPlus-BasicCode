#include<iostream.h>
#include<conio.h>
void main()
{
int num1;
int num2;
clrscr();
cout<<"enter the first no:-";
cin>>num1;
cout<<"enter the secound no:-";
cin>>num2;
cout<<"\n before swap num1 is"<<num1<<"and num2 is"<<num2;
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout<<"\n after swap num1 is"<<num1<<"and num2 is"<<num2;
getch();
}