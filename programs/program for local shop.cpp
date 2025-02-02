#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
 int base_price,saling_price,sale_tax,final_price,mark_up;
 float b,c,s;
 cout<<"Enter your base price = ";
 cin>>base_price;
 cout<<"your base price is = "<<base_price<<endl;
 cout<<"Enter your mark_up ";
 cin>>mark_up;
 cout<<"your markup price"<<mark_up<<endl;
 b=(mark_up*100)/(base_price);//b=markup percentage
 cout<<"Your mark_up percentage = "<<b<<endl;
 cout<<"Enter your sale tax price";
 cin>>sale_tax;
 cout<<"sale price = "<<sale_tax<<endl;
 c=(sale_tax*100)/base_price;//c= sale tax percentage;
 cout<<"sale tax percentage = "<<c<<endl;
 s=base_price+mark_up+sale_tax;
 cout<<"your final price is = "<<s;
getch();
return 0;
}

