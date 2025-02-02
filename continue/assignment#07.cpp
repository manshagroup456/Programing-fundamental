#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int arry[5],*p;
    p=arry;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter array value of :"<<i<<"  ";
        cin>>arry[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(*(p+i)>*(p+j))
            {
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    cout<<"-------------------Sorted array------------------ ";
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<" ";
    }
    getch();
    return 0;
}