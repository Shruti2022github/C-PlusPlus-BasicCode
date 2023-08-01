#include<iostream.h>
#include<conio.h>
void main()
{
int n;
long int fact(int);
clrscr();
cout<<"\n enter the no:-";
cin>>n;
cout<<"\n the factorial of"<<n<<"is"<<fact(n);
getch();
}
long int fact(int x)
{
int i;
long int f=1;
for(i=x;i>=1;i--)
{
f=f*i;
}
return(f);
}