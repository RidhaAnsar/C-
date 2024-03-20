#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	
    int a[100],n,i;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elements:\n";
    for(i=0;i<n;i=i+1)
    {
        cin>>a[i];
    }
    for (i=n-1;i<=0;i=i-1)
    {
        a[i]=a[i-1];
    }
    cout<<"\n the elements after deletion are:";
    for(i=0;i<n-1;++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}
