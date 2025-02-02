#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

// find factorials by recurrence

long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}   

// find combinations by recurrence  

long long combination(int n, int r) {
    if(r == 0 || r == n)
        return 1;
    else
        return (factorial(n) / (factorial(r) * factorial(n - r)));
}
 //sort of arrays
 void sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
//find prime numbers



int main() {    
    int n, r, choice;
    long long result;
    char repeat;
    
    do {
        cout << "\n1. Factorial\n2. Combination\n3. Sort array\nEnter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> n;
                result = factorial(n);
                cout << "Factorial of " << n << " is: " << result << endl;
                break;
            case 2:
            cout << "Enter two numbers (n and r): ";
                cin >> n >> r;
                result = combination(n, r);
                cout << "Combination of " << n << " choose " << r << " is: " << result << endl;
                break;
            case 3:
            {
            cout << "Enter an array of integers (minimum 2): ";
                cin >> n;
                int arr[n];
                for(int i = 0; i < n; i++)
                    cin >> arr[i];
                
                if(n < 2)
                    cout << "Array should have at least 2 elements." << endl;
                else {
                    sort(arr, n);
                    cout << "Sorted array is: ";
                    for(int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                    cout << endl;
                }}
                break;
                
            default:
            cout << "Invalid choice. Please try again." << endl;
        }
        
        cout << "Do you want to perform another operation? (Y/N): ";
        cin >> repeat;
        
    } while(repeat == 'Y' || repeat == 'y');
    
    return 0;
}