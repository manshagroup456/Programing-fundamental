#include <iostream>
#include <math.h>
using namespace std;

// struct customer {
//     int custnum;
//     int salary;
//     float commission;
// };
//--------------------------------------------
struct book
{
    int id;
    int issn;
    int price;
};

int main() {
    int max;
    // customer c, c1, c2;

    // cout << "Enter customer number: ";
    // cin >> c.custnum;
    
    // cout << "Enter salary for customer 1: ";
    // cin >> c.salary;
    
    // cout << "Enter salary for customer 2: ";
    // cin >> c1.salary;
    
    // cout << "Enter salary for customer 3: ";
    // cin >> c2.salary;

    // c.commission = 199.0;

    // cout << "Customer number: " << c.custnum << endl;
    // cout << "First customer salary: " << c.salary << endl;
    // cout << "Second customer salary: " << c1.salary << endl;
    // cout << "Third customer salary: " << c2.salary << endl;
    // cout << "Commission: " << c.commission << endl;
// -----------------------------------------------------------
     book b[5];
     cout<<"Enter data of book";
     for(int i=0;i<5;i++)
     {
        cout<<"Book id"<<i<<"   :  ";
        cin>>b[i].id;
         cout<<"Book Issn n"<<i<<"   :  ";
        cin>>b[i].issn;
          cout<<"Book price n"<<i<<"   :  ";
        cin>>b[i].price;
        cout<<endl;
     }
       for(int i=0;i<5;i++)
     {
        cout<<"Book id"<<i<<" : "<<b[i].id<<"   :  ";
        cout<<"Book Issn "<<i<<" : "<<b[i].issn<<"   :  ";
        cout<<"Book price price "<<i<<" : "<<b[i].price<<"   :  ";
        if(){

        }
     }
     


    
    return 0;
}
