#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
     int n,m;
     cout<<"Enter your number ";
     cin>>n;
     if((n%5)==0)
     cout<<"your number is divisible by 5 ";
    else if((n%3)==0)
    cout<<"your number is divisible by 3";
    else
    cout<<"your number is not divisible by both 5 & 3";
     
    
    getch();
    return 0;

}