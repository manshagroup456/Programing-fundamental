#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int calculator(int a, int b,char op)
{ int ans; 
    switch(op)
    {
        case '+':
        cout<<"sum is"<< a+b;break;
        case '-':
        cout<<"subtracton  is"<< a-b;break;
        case '*':
        cout<<"multiplication  is"<< a*b;break;
        case '/':{if(b==0){
        cout<<"division is "<<a/b;break;
        }else{
        cout<<"sum of operand";break;}
        default:cout<<"not a valid operand";
        }
    }
}

int main()
{
    int a,b,c;
    char op;
    do{
    cout<<"enter 2 numbers for calculation\n";
    cin>>a>>b;
    cout<<"enter oprator\n";
    cin>>op;
    calculator(a,b,op);
    cout<<"Do you want to continue?(n to exit)\n";
    cin>>op;
    }while(op!='n');
    getch();
    return 0;
}