#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
  int salary,percent,after_reduction,m,n,b,c;
  cout<<"Enter your salary ";
  cin>>salary;
  if(salary>=20000)
 { m=salary*0.07;
  n=salary-m;
  after_reduction=n;
  cout<<"Salary after Reduction = "<<after_reduction;}else
  if(10000<salary)
    {b=salary-1000;
  cout<<"Your salary after Reduction "<<b;}
  else
  cout<<"your salary is "<<salary;
    getch();
    return 0;
}