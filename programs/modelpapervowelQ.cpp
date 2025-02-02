#include<iostream>
#include<conio.h>

using namespace std;
int main() {
    char ch,option;
    int count=0;
    int ccount=0;
      do{
        cout<<"Enter a Alphaphet : ";
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
            count++;
            break;
            default:
            ccount++;
        }
      cout<<"Do you want to continue(y/n) : ";
      cin>>option;
      }while(option!='n');
      cout<<"You Enter no. of vowel :"<<count<<endl;
      cout<<"you Enter no. of constant :"<<ccount<<endl;
    getch();
    return 0;
}