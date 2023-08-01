#include<iostream.h>
#include<conio.h>
void main()
{
int i;
int n;
clrscr();
cout<<"\n enter the no of terms:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i*i<<" ";
if(i<n)
{
cout<<"+";
}
}
getch();
}