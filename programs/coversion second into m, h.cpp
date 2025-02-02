#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 int main(){
    int s,h,t,w;
    cout<<"Enter your secound =";
    cin>>s;
    cout<<"your secound is = "<<s<<endl;
     h=s/(3600);
    cout<<"Hour in your given second ="<<h<<endl;
     s%=3600;
    t=s/(60);
    cout<<"minutes in your given second ="<<t<<endl;
     w=s%60;
    cout<< "Exact time = "<<h<<"."<<t<<"."<<w;
     getch();
     return 0;  
    }



    
