#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int i,j;
    int array[i][j];
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            cout<<"Enter values ";
            cin>>array[i][j];
        }    
    }
       for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
           cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }
    getch();
    return 0;

}