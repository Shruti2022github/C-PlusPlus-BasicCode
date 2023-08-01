#include<iostream.h>
#include<conio.h>
void main()
{
int n[5];
int i;
int sum=0;
clrscr();
cout<<"\n enter5 nos:-";
for(i=0;i<5;i++)
{
cin>>n[i];
}
for(i=0;i<5;i++)
{
sum=sum+n[i];
cout<<"\n"<<n[i];
}
cout<<"\n sum of 5nos is"<<sum;
getch();
}