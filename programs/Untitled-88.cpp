#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int n, float a, float sum_n, float d;
    cout<<"Enter your number of terms in a series : ";
    cin>>n;
    cout<<"Enter your first term :  ";
    cin>>a;
    cout<<"Enter common difference between two consective terms : "
    cin>>d;
    // Calculate the sum of the first n terms
     sum_n = (n / 2.0) * (2 * a + (n - 1) * d);
    cout<<"Sum of arthmetic series is : "<<sum_n;
    getch();
    return 0;
}