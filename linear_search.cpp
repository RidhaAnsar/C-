#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
int a[10],i,n,s=0;
cout<<"Enter the limit : ";
cin>>n;
cout<<"Enter the elements : \n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nEnter the search element :";
cin>>s;
for(i=0;i<n;i++)
{
if(a[i]==s)
  {
  cout<<"Element found at pos "<<i+1;
  break;
  }
}
if(i==n)
cout<<"\nElement not found";
getch();
}

