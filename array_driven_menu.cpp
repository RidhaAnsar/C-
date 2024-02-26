#include<iostream>
#include<conio.h>
using namespace std;

void Insertion(int a[],int N,int pos,int elem){
pos=pos-1;
for(int i=N;i>=pos;i--){
a[i+1]=a[i];
a[i]=elem;                   
}
N++;
cout<<"\nThe new array is:"<< endl;
for(int i=0;i<N;i++){
cout<<a[i]<<" ";
 }
}


void Delete(int a[],int pos, int n){
     pos = pos-1;
 
 int j = pos;
 while(j < n)
 {
    a[j] = a[j+1];
    j = j + 1;
 }
 n = n-1;
 cout<<" The new array is: ";
 for(int i=0;i<n;i++){
    cout<<" "<<a[i]<<" ";
 }
}

void Sort(int a[],int n){
 int i,J,temp;
 for(i=1;i<n;i++){
       for(J=0; J<n-1; J++)
              if(a[J] > a[J+1])
              {
              temp = a[J];
              a[J] = a[J+1];
              a[J+1] = temp;
              }
}        cout<<"Sorted array is :";
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";    
}

int main()
{
    int choice,h,q,i,j, a2[50], aM[100];
    char ch;
    cout<<"Enter the array limit: ";
    int n, a[10],s2,k;
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
        aM[i] = a[i];
    }
    k = i;
    c:
  do{
    cout<<"\n   Menu    "<<endl;
    cout<<" 1.Insert: "<<endl;
    cout<<" 2.Delete: "<<endl;
    cout<<" 3.Sort: "<<endl;
    cout<<" 4.Merge: "<<endl;
    cout<<" 5.Exit: "<<endl;
    cout<<" Enter your choice: "<<endl;
    cin>>choice;
    //while(choie<6 && choice!=0){
    z:
    int pos,elem;
    switch(choice){
        case 1: 
    {            //do{
                cout<<" \n      options     "<<endl;
                cout<<" 1.insert at the beginning "<< endl;
                cout<<" 2.insert at the end "<< endl; 
                cout<<" 3.insert at a specified position "<< endl;
                cout<<" 4.Back to the Main menu "<< endl;
                cout<<"Enter  the choice: ";
                cin>>h;
         switch(h){
             case 1:  
                 cout<<"Enter the element:"<<endl;
                 cin>>elem;
                 pos = 0;
                 for(i=n;i>=pos;i--){
                 a[i+1]=a[i];
                 a[i]=elem;
                
                 }
                 n++;
                 cout<<"\nThe new array is:"<< endl;
                 for(i=0;i<n;i++){
                    cout<<a[i]<<" ";
                 }    
                 break;
             case 2:
              cout<<"ENter the Element:"<<endl;
              cin>>elem;
              pos = n;
              for(i=n;i>=pos;i--){
              a[i+1]=a[i];
              a[i]=elem;
            }
             n++;
             cout<<"\nThe new array is:"<< endl;
             for(i=0;i<n;i++){
             cout<<a[i]<<" ";
            }
             break;
                
         case 3: cout<<" Enter the position to insert: "<<endl;
                cin>>pos;
                cout<<" Enter the  element: "<<endl;
                cin>>elem;
         Insertion(a,n,pos,elem);
                 break;
        case 4: goto c;
             default:cout<<" Invalid Entry ";
     }
}
   goto z;
        case 2:
        d:    
             cout<<" \n   options   "<<endl;
                cout<<" 1.Delete from the beginning "<<endl;
                cout<<" 2.Delete from the end "<<endl;
                cout<<" 3.Delete fromqa specified position"<<endl;
                cout<<" 4.Back to the Main menu"<<endl;
                cout<<"\n Enter option: "   ;                 
                cin>>q;
            
                switch(q){
                    case 1:
                            pos = 0;
                            //int item = a[pos];
                               j = pos;
                               while(j < n)
                               {
                                  a[j] = a[j+1];
                                  j = j + 1;
                               }
                               n = n-1;
                               cout<<" \n The new array is: ";
                               for(i=0;i<n;i++){
                                  cout<<" "<<a[i]<<" ";
                               }
                            break;
                    case 2: 
                          pos = n-1; 
                         //int item = a[pos];
                         j = pos;
                         while(j < n)
                         {
                            a[j] = a[j+1];
                            j = j + 1;
                         }
                         n = n-1;
                         cout<<" \n The new array is: ";
                         for(i=0;i<n;i++){
                            cout<<" "<<a[i]<<" ";
                         } 
                         break;
                    case 3:
                   cout<<"\n Enter the position to Delete: "<<endl;
                   cin>>pos;
                   Delete(a,pos,n);
                      break;
                    case 4:goto c;
                   break;
                   default:cout<<"Invalid Entry";
    }  
    goto d;          
              break;   
        case 3: Sort(a,n);
          goto c; 
           break;
        case 4:  
                cout<<"\nEnter the Size for Second Array: ";
                cin>>s2;
                cout<<"Enter "<<s2<<" Elements for Second Array: ";
                for(i=0; i<s2; i++)
                {
                    cin>>a2[i];
                    aM[k] = a2[i];
                    k++;
                }
                cout<<"\n The Merged Array:\n";
                for(i=0; i<k; i++)
                    cout<<aM[i]<<" ";
                cout<<endl;
               goto c;
               break;
        
 
        
    }
cout<<"\n Do you want to continue?";
        cout<<" (y/n) ";
        cin>>ch;
        }while(ch=='y');
    e:
    return 0; 
}


