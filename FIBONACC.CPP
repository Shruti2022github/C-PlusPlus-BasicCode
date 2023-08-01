#include<iostream.h>
#include<conio.h>
void main()
{
int i;
int n;
int x=1;
int y=1;
int z=0;
clrscr();
cout<<"\n enter the no of terms:-";
cin>>n;
for(i=1;i<=n;i++)
{
x=y;
y=z;
z=x+y;
cout<<z<<" ";
if(i<n)
{
cout<<",";
}
}
getch();
}