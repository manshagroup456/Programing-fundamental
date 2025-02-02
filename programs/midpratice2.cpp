#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
series program
int i,n,sum=0;
cout<<"Enter a number in b/w operation will be done: ";
cin>>n;
for(i=2;i<=n;i++)
{
    if((i%5==0)||(i%2==0))
    {
        continue;
    }
    cout<<i<<" ";
    sum=sum+i;
}
cout<<"sum is :"<<sum;
int aplha=0,constant=0;
char ch,option;
do{
    cout<<"Enter Alphaphet :";
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        aplha++;
    default:
        constant++;
    }
    cout<<"Do you want to continue(y/n) : ";
    cin>>option;
  }while(option!='n');
   cout<<"You enter vowel  "<<aplha<<"  times"<<endl;
   cout<<"You enter constant  "<<constant<<"  times";


//reverse and sum program


// int i,n,sum=0;
// cout<<"How many number you want to enter : ";
// cin>>n;
// int array[n];
// for(i=1;i<=n;i++)
// {
//     cout<<"Enter you "<<i<<" number ";
//     cin>>array[i];
//     sum+=array[i];
// }
//   cout<<"Rverse of your numbers : ";
// for(i=5;i>=1;i--)
// {
//     cout<<array[i];
// }

// cout<<"\nSum of your numbers : "<<sum;
 
 

    getch();
    return 0;
}
