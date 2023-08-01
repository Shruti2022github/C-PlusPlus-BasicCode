#include<iostream.h>
#include<conio.h>
void main()
{
int base,pow;
long int power(int,int);
clrscr();
cout<<"\n Enter base no:-";
cin>>base;
cout<<"\n Enter power:-";
cin>>pow;
cout<<base<<"to the power"<<pow<<"is"<<power(base,pow);
getch();
}
long int power(int b,int p)
{
long int powv=1;
int i;
for(i=1;i<=p;i++)
{
powv=powv*b;
}
return(powv);
}