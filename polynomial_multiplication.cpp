#include<iostream>
#include<conio.h>
using namespace std;
void printpoly(int poly[],int s);
void main()
{
int i,j,a[10],b[10],m,n,size;
clrscr();
cout<<"Enter the size of 1st polynomial:";
cin>>m;
cout<<"Enter the coefficents of 1st polynomial(Ascending order of exponents):";
for(i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"Enter the size of 2nd polynomial:";
cin>>n;
cout<<"Enter the coefficents of 2nd polynomial(Ascending order of exponents):";
for(i=0;i<n;i++)
{
cin>>b[i];
}
cout<<"Polynomial 1:\n";
printpoly(a,m);
cout<<"\nPolynomial 2:\n";
printpoly(b,n);
size=m+n-1;
int *prod=new int[size];
for(i=0;i<m;i++)
{
prod[size]=0;
for(j=0;j<n;j++)
{
prod[i+j]=prod[i+j]+a[i]*b[j];
}
}
cout<<"\n\nProduct of two Polynomials:\n";
printpoly(prod,size);
getch();
}
void printpoly(int poly[],int s)
{
int i;
for(i=0;i<s;i++)
{
cout<<poly[i];
if(i!=0)
cout<<"x^"<<i;
if(i!=s-1)
cout<<" + ";
}
getch();
}


