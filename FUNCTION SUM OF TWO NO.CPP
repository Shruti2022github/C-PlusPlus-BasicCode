#include<iostream.h>
#include<conio.h>
void main()
{
int n1,n2;
int addnum(int,int);
clrscr();
cout<<"\n enter two no:-";
cin>>n1>>n2;
cout<<"\n the sum of"<<n1<<"and"<<n2<<"is"<<addnum(n1,n2);
getch();
}
addnum(int x,int y)
{
int total;
total=x+y;
return(total);
}