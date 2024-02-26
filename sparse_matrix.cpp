#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int i,j,a[10][10],b[10][10],m,n,x=0,y=0,count=0,sr,sc;
cout<<"Enter columns : ";
cin>>n;
cout<<"Enter the elements : ";
for(i=0;i<3;++i)
{
for(j=0;j<n;++j)
cin>>a[i][j];
}
cout<<"Matrix : \n";
for(i=0;i<3;++i)
{
for(j=0;j<n;++j)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
cout<<"Enter the rows and columns of sparse matrix : ";
cin>>sr;
cin>>sc;
for(i=0;i<sr;++i)
{
for(j=0;j<sc;++j)
{
b[i][j]=0;
}
}
for(i=0;i<3;++i)
{
for(j=0;j<n;++j)
{
x=a[0][j];
y=a[1][j];
b[x][y]=a[2][j];
}
}
cout<<"Matrix : \n";
for(i=0;i<sr;++i)
{
for(j=0;j<sc;++j)
cout<<b[i][j]<<" ";
cout<<"\n";
}
getch();
}

