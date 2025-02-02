#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 int main()
 {
     int r,l,b,a,p;
     float c,m;
     int carton=3;
     int bottle=12;
     float per_bottle=1.5;
     int cost_per_bottle=330;
     float total;
     total= carton*bottle*cost_per_bottle;
     cout<<"Enter radius of your circle = ";
     cin>>r;
     while(r>1){
     c=2*(22/7)*r;
     cout<<endl;
     cout<<"cercumference of your disire circle = "<<c;
     cout<<endl;
     m=(22/7)*(r*r);
     cout<<"Area of your circle = "<<m<<endl;
     cout<<"Enter length of rectangle = ";
     cin>>l;
     cout<<"Enter width of your rectangle";
     cin>>b;
     a=l*b;
     p=2*(l+b);
     cout<<"Area of your rectangle is ="<<a<<endl;
     cout<<"Perimeter of your circle is ="<<p<<endl;

     cout<<"Post of per bottle ="<<cost_per_bottle<<endl;
     cout<<"Total cost of carton and bottle = "<<total;
     }


    getch();
    return 0;

 }