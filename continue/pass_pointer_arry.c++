 #include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void call(int arry[])
{
    for(int j;j<10;j++)
    {
       cout<<arry[j];
    }
}

int main()
{
    int *p,arr[10];
    for(int i=1;i<10;i++)
    {
        cin>>arr[i];
        p=&arr[i];
        call(p);
    }
}