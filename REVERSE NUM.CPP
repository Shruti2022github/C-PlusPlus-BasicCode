#include<iostream.h>
#include<conio.h>
void main()
{
int n;
int sum=0;
int r;
clrscr();
cout<<"\n Enter a no:-";
cin>>n;
while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
cout<<"\n Reverse no is:-"<<sum;
getch();
}