#include<iostream>
#include<conio.h>
using namespace std;
void printpoly(int poly[],int s);
void main()
int i,a[10],m,size;
clsrcr();
cout<<"enter the size of the polynomial:";
cin>>m;
cout<<"enter the coefficient of polynomial:";
for(i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"polynomial:";
printpoly(a,m);
getch();
}
void printpoly(int poly[],int s)
{
int i,ra=s-1;
for(i=0;i<s;i++)
{
cout<<poly[i];
if(i!=s-1)
cout<<"x"<<ra;
if(i!=s-1)
cout<<"+";
ra--;
}
getch();
}

