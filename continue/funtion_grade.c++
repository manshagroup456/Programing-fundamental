#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
char grade(int x)
{
    if(x>=80)
    {
        return 'A';
    }else if((x>=70)&&(x<=79))
    {
        return 'B';
    }else if((x>=60)&&(x<=69))
    {
        return 'C';
    }else if((x>=50)&&(x<=59))
    {
        return 'D';
    }else if(x<50)
    {
        return 'F';
    }
}

int main()
{
int mark;
cout<<"Enter your marks : ";
cin>>mark;
char y=grade(mark);
cout<<"\nYour grade is : "<<y;
getch();
return 0;
}