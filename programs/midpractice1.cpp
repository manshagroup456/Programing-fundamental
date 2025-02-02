#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    //decode program


    int array[4];
    int decode[4];
    int i,j;
    cout<<"Enter your array element :";
    for(i=0;i<4;i++)
    {
        cin>>array[i];
        cout<<endl;
    }
    // decode process
    for(j=0;j<4;j++)
    {
        decode[j]=(array[j]+7)%10;
    }
    cout<<"your decode digitd are";
       for(i=0;i<4;i++)
    {
        cout<<decode[i];
    }


// paramid program



int i,j,k,m;
char ch='A';
for(i=0;i<=5;i++)
{     ch='A';
    for(k=1;k<=5-i;k++)
    cout<<" ";
for(j=0;j<=i;j++)
{
    cout<<" "<<ch<<" ";
    ch++;
}
ch-=2;
for(m=1;m<=i;m++)
{
    cout<<" "<<ch<<" ";
    ch--;
}
cout<<endl;
}

// feul program


int com,deom,new_price;
char ch;
cout<<"Enter your your type(c/d)  : ";
cin>>ch;
int i;
cout<<"Enter your quantity in cubic meter :";
cin>>i;
if(ch=='c')
{
    deom=i*0.4;
    deom+=i;
    cout<<"Your amount will be : "<<deom;
}
else if(ch=='d')
{
    if(i<50)
    {
        new_price=4*0.1;
        new_price+=4;
        com=i*new_price;
         cout<<"Your amount will be : "<<com;
    }
    if((i>50)&&(i<100))
    {
        new_price=5*0.15;
        new_price+=5;
        com=i*new_price;
         cout<<"Your amount will be : "<<com;


    } if((i>100)&&(i<300))
    {
         new_price=10*0.2;
        new_price+=10;
        com=i*new_price;
         cout<<"Your amount will be : "<<com;


    }
}

    getch();
    return 0;
}
