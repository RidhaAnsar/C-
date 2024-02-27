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
    cout<<"enter the element to be deleted:";
    cin>>x;
    cout<<"enter the position of number to be deleted:";
    cin>>pos;
    for(int i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"array elements are:";
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    getch();
}
    

