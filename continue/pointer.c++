#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void point (int q,float w);

int main()
{
    // int x=5,*y,arr[10],z;
    // y=&arr[10];
    // arr[10]=89;
    // z=arr[10];
    // int *p;  // pointer declaration, * is dereference operator
    // p = &x;  //& is reference operators
    // cout<<"Value of x = "<<x<<endl;
    // cout<<"Value of p = "<<p<<endl;
    // cout<<"The address of x = "<<&x<<endl;
    // cout<<"The value of x = "<<*p<<endl;  // Extracts value of variable x by using its address.
    
    //     cout<<"Value of y = "<<y<<endl;

int a,*x;
x=&a;
float b,*y;
y=&b;
//char c,*z;
cout << "Enter value of an integer, a float and character: ";
cin>>a>>b;
point(*x,*y);

getch();
    return 0;
}
void point (int q,float w){

cout<<"integer value is : "<<q;
cout<<"loating  value is : "<<w;
//cout<<"character value is :"<<e;
}