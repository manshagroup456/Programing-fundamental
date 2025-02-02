#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;

int main()
 {
    int first_number,second_number,number,answer;
    float answer2;
    char op;
        cout<<"what operation do you want perform \n";
        cout<<"if you to perform Addition then press 1\n";
        cout<<"if you to perform Subtration then press 2\n";
        cout<<"if you to perform multiplication then press 3\n";
        cout<<"if you to perform Division then press 4\n";
    do{
        cout<<"Enter a operation number ";
        cin>>number;
         cout<<"Enter  1 number = ";
        cin>>first_number;
        cout<<"Enter 2 number = ";
        cin>>second_number;
        if(number==1)
        {
            answer=first_number+second_number;
            cout<<"your answer is = "<<answer<<endl;
        }
        else if(number==2)
        {
            answer=first_number-second_number;
            cout<<"your answer is = "<<answer<<endl;
        }
        else if(number==3)
        {
            answer=first_number*second_number;
            cout<<"your answer is = "<<answer2<<endl;
        }
        else if(number==4)
        {
            if(second_number==0)
              cout<<"-------infinity---------";
        
            else
            {
                answer2=first_number/second_number;
                cout<<"your answer is = "<<answer2<<endl;
            }
        }
        else
            cout<<"----------in valid operation---------";
           
        
        cout<<"do you want to continue ";
        cin>>op;
           
      }while(op!='n');
      cout<<"good bye";
    return 0;
}
