#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10],a2[10],am[10];
    cout<<"Enter the size of 1st array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        am[i]=a[i];
    }
    int k;
    k=i;
    cout<<"\n Enter the size of 2nd array:"<<endl;
    int s2;
    cin>>s2;
    cout<<"Enter the elements of 2nd array:"<<endl;
    for(i=0; i<s2; i++){
     cin>>a2[i];
     am[k]=a2[i];
     k++;
}
         
        cout<<"\n The Merged Array:\n";
                for(i=0; i<k; i++){
                    cout<<am[i]<<" ";
                 cout<<endl;    
                }
   int temp=0;
   for(i=1; i<k; i++){
       for(j=0; j<k-1; j++)
              if(am[j] > am[j+1])
              {
              temp = am[j];
              am[j] = am[j+1];
              am[j+1] = temp;
              }       
    }
        cout<<"Sorted array is :";
        for(i=0;i<k;i++)
        cout<<am[i]<<" ";
        return 0;
}


