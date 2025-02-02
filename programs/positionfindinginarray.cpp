#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int array[5]={10,20,30,0,50};
    int i,n,loc;
    cout<<"Enter value to find : ";
    cin>>n;
    for(i=0;i<5;i++)
    {
        if(array[i]==n)
        {
            loc=i;
            cout<<"your number found in index : "<<loc;
        }
        else
        {
            cout<<"invlaid number ";
            break;
        }
    }
    
    getch();
    return 0;

}