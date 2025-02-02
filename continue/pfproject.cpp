#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int fact(int n)
{
    if(n>1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
    cout<<"nnnnnnasdna"<<n;
}
int main()
{
    cout<<fact(5);
    return 0;
}