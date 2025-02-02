#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int arry[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter value of index { "<<i<<" } { "<<j<<" }  :";
            cin>>arry[i][j];
        }
    } 
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<(arry[i][j]*2)<<"\t";
            
        }
        cout<<endl;
    }
   
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<(arry[i][j]*arry[i][j])<<"\t";
            
        }
        cout<<endl;
    }
   
     getch();
    return 0;
}
