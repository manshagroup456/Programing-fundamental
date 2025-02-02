#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 int main(){
     int i=1,obtain_mark,sum=0,total;
     do
     {cout<<"enter your marks";
     cin>>obtain_mark;
     sum+=obtain_mark;
     
        i++;
     }
    while(i<=5);
        
     cout<<"Total mark is = "<<sum<<endl;
            float percent=(sum*100)/500;
               cout<<"percentage  = "<<percent;

     getch();
    return 0;
    }