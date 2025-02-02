#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int i;
   long array[10];
   int sum=0;
   
   for(i=0;i<=10;i++)
   {
     cout<<"Enter index "<<i<<" value  ";
     cin>>array[i];
     
   }for(i=0;i<=10;i++){

   cout<<"vlaue of index "<<i<<" is  "<<array[i]<<endl;
   sum+=array[i];
   }
   cout<<"Sum of array is  "<<sum;
    getch();
    return 0;

}