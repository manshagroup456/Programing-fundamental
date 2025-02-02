#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

// void table(int x)
// {
//      for(int i=1; i<=10; i++)
//     {
//         cout<<x <<" x " << i <<" = "<<x*i<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter a number to print its table \n";
//     cin>>n;
//     table(n);
//     int m;
//     cout<<"Enter another number to print its table \n";
//     cin>>m;
//     table(m);

   
//     return 0;
//}
void evenOdd(int n)
{
    if(n%2 == 0)
    {
        cout<<n<< " is Even \n";
    }
    else
    {
        cout<<n<< " is Odd \n";
    }
}

int main()
{
    int a;
    cout<<"ENter a number to check whether it is even or odd \n";
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        evenOdd(i);
    }
    return 0;
}