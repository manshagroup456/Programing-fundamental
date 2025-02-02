#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
    float sum=0;

int biggest(int a,int b,int c)
{
    int max=a;
    if ((b>a)&&(c<b))
    {
        max=b;
    }else if((c>b)&&(c>a))      
    {
        max=c;
    }
    return max;

}

int adder(int x)
{
    float i,fac=1;
    cout<<"1";
     for(i=1;i<=x;i++)
    {
        fac*=i;
        cout<<"  +  1/"<<fac<<"!   ";
        sum+=(1/fac);
    }
    
    return sum;
}
int main()
{
    int first_num,second_num,third_num;
    cout<<"Enter first_number : ";
    cin>>first_num;
    cout<<"Enter second_number : ";
    cin>>second_num;
    cout<<"Enter third_number : ";
    cin>>third_num;
    int y=biggest(first_num,second_num,third_num);
    cout<<"Greater number btw three numbers is : "<<y<<endl;
    int j;
    cout<<"Enter a last number of series number :: ";
    cin>>j;
    int g=adder(j);
    cout<<"\nSum of series is : "<<sum+1;
    getch();
    return 0;


}

