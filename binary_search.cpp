
#include<stdio.h>
#include<iostream>
using namespace std ;
int main()
{
int a[10],i,n,k,m,l=0,h,j,t;
cout<<"Enter the limit : ";
cin>>n;
h=n-1;
cout<<"Enter the elements in sorted order: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"enter search key:";
cin>>k;
while(l<=h)
{
m=(l+h)/2;
if(k==a[m])
{
cout<<"\nElement found at pos \n"<<m+1;
break;
}
if(k>a[m])
{
l=m+1;
}
else
{
h=m-1;
}
}
if(l>h)
{
cout<<"Element not found";
}
getch();
}

