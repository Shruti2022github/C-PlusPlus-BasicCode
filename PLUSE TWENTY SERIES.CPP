#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,j;
int s;
clrscr();
cout<<"\n Enter the no of terms:-";
cin>>n;
for(i=1;i<=n;i++)
{
s=12;
if(i>1)
{
cout<<"+";
cout<<"(";
}
for(j=1;j<=i;j++)
{
cout<<s;
if(j<i)
{
cout<<"+";
}
s=s+20;
}
if(i>1)
cout<<")";
}
getch();
}
