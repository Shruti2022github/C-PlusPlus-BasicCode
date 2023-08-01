#include<iostream.h>
#include<conio.h>
void main()
{
int i;
int n;
 int gp=1;
 clrscr();
 cout<<"\n enter the no of terms:-";
 cin>>n;
 for(i=1;i<=n;i++)
 {
 cout<<gp<<" ";
 gp=gp*2;
 if(i<n)
 {
 cout<<"+";
 }
 }
 getch();
 }