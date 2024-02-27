#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[50],n,i,x;
cout<<"enter the number of elements:";
cin>>n;
cout<<"\n enter the elements:";
for (int i=0;i<n;++i)
{
    cin>>a[i];
}
cout<<"\n enter the element to search:";
cin>>x;
for(int i=0;i<n;++i)
{
    if (a[i]==x)
    {
        cout<<"element found at position:"<<i+1;
        break;
    }
}
if (i==n)
{
cout<<"\n The element is not present in the array";
}
return 0;
}


