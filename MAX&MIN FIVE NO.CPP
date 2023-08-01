#include<iostream.h>
#include<conio.h>
void main()
{
int n[5];
int i;
int max,min;
clrscr();
cout<<"\n enter5 nos:-";
for(i=0;i<5;i++)
{
cin>>n[i];
}
max=n[0];
min=n[0];
for(i=0;i<5;i++)
{
if(max<=n[i])
{
max=n[i];
}
if(min>=n[i])
{
min=n[i];
}
}
cout<<"\n maximum no is"<<max;
cout<<"\n minimum no is"<<min;
getch();
}