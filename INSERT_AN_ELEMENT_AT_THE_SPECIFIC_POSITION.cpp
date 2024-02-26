#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,pos,n,a[100];
cout<<"enter size of the array:";
cin>>n;
cout<<"enter the elements of array:";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"enter the number to be inserted:";
cin>>x;
cout<<"enter the position of number to be inserted:";
cin>>pos;
a[n]=0;
for(int i=n;i>pos-1;i=i-1)
{
a[i]=a[i-1];
}
a[pos-1]=x;
cout<<"array elements are:";
for(int i=0;i<n+1;i++)
{
cout<<a[i]<<" ";
}
getch();
}
