#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){

    // int sum=0;
    // int i=1;
    // int  a,b,c,f;
    // cout<<"Enter fist term of series : ";
    // cin>>a;
    // cout<<"Enter second term of series : ";
    // cin>>b;
    // cout<<"How many terms you want : ";
    // cin>>f;
    // cout<<a<<" ,"<<b<<" ,";

    // while(i<=f){
    //      sum=a+b;
    //      a=b;
    //      b=sum ;
    //     cout<<sum<<" , ";

    //      ++i; 
    // }

    int a = 0 ;
    int b = 1 ;
    int sum = 0 ;
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<=n;i++)
    {
        sum = a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }

    getch();
    return 0;
}
