#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;
struct DOB {
    int day;
    int month;
    int year;
};
int main()
{   DOB id;
    cout<<"Enter your DOB (day) :\t";
    cin>>id.day;
    cout<<"Enter your DOB (month) : ";
    cin>>id.month;
    cout<<"Enter your DOB (year) :  ";
    cin>>id.year;
    cout<<"your Date of Birth is :\t"<<id.day<<"-"<<id.month<<"-"<<id.year;
    getch();
    return 0;
}