#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
 int main()
 { 
  int count;
  int cons;
  char str[100];
  cout<<"Enter your two sentences : ";
  cin.get(str,100);
   int size=sizeof(str);
   for(int i=1;i<size;i++)
   {
    if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='U'))
    count++;
    else
    cons++;
   }
   cout<<"You enter  "<<count<<" vowels."<<endl;
   cout<<"You enter  "<<cons<<" consonant.";

  getch();
  return 0;

 }