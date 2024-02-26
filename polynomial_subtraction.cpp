#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int a[10],b[10],diff[10];
int i,m,n;
int diffsize;
cout<<"enter the number  of 1st terms:";
cin>>m;
cout<<"enter the number of 2nd terms:";
cin>>n;
if(m>=n)
diffsize=m;
else
diffsize=n;
cout<<"enter 1st polynomial:";
for(i=0;i<m;++i)
cin>>a[i];
cout<<"enter 2nd polynomial:";
for(i=0;i<n;++i)
cin>>b[i];
for(i=0;i<diffsize;++i)
diff[i]=a[i];
for(i=0;i<diffsize;++i)
diff[i]-=b[i];
cout<<"subtract=";
for(i=diffsize-1;i>=0;--i)
{
if(i!=0)
cout<<diff[i]<<"×"<<i<<"+";
else
cout<<diff[i];
}
getch();
}

