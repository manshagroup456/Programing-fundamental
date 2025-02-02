
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    int arry[n];
    int temp=0;
    cout<<"Enter how many entities you want to enter : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value of index  "<<i<< "  value :  ";
        cin>>arry[i];
    }
    for(int i=0;i<=(n-1);i++)
     {
        for(int j=i+1;j<=n;j++)
        {
            if(arry[i]>arry[j])
            {
                temp=arry[i];
                arry[i]=arry[j];
                arry[j]=temp;
            }
        } 
     }
     cout<<" { " ;  
        for(int i=0;i<n;i++)
        {
            cout<<arry[i]<<" ,";
            
        }
     cout<<" } " ;  
      for(int i=0;i<n;i++)
    {
        cout<<"Value in index  "<<i<< "  value :  ";
        cout<<arry[i];
        cout<<endl;
    }
     
    getch();
    return 0;
}
