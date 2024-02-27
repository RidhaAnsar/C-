#include<iostream>
#include<conio.h>
using namespace std;
int main ()  
{  
    int i, j,temp,n,a[50];
    cout<<"enter the number of elements";
    cin>>n;      
    cout<<"enter the elements:\n";
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i = 0; i<n; i++)  
    {  
        for(j = i+1; j<n; j++)  
        {  
            if(a[j]<a[i])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;  
            }  
        }  
    }  
    cout<<"Printing Sorted Element List ...\n";  
    for(i = 0; i<n; i++)  
    {  
        cout<<a[i];  
    }  
getch;
}

