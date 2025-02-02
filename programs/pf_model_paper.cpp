#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i,j,k,m;
 char ch='A';
 for(i=1;i<=5;i++)
 {   ch='A';
    for(k=1;k<=5-i;k++)
    cout<<" ";
for(j=1;j<=i;j++)
   {
   cout<<" "<<ch<<" ";
   ch++;
   }
   ch-=2;
   for(m=1;m<i;m++)
   {
    cout<<ch<<" ";
    ch--;
   }
   
   cout<<endl;

 }   
 getch();
 return 0;
}