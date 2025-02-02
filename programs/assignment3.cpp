#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    double a;
    double sum_n;
    float d;
    cout<<"Enter your number of terms in a series : ";
    cin>>n;
    cout<<"Enter your first term :  ";
    cin>>a;
    cout<<"Enter common difference between two consective terms : ";
    cin>>d;
    // Calculate the sum of the first n terms
     sum_n = (n / 2.0) * (2 * a + (n - 1) * d);
    cout<<"Sum of arthmetic series is : "<<sum_n; 
    
     int n;
    double a, r;
    double sum;


    cout << "Enter the number of terms (n): ";
    cin >> n;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common ratio (r): ";                                x^2
    cin >> r;
     if (r == 1) {
        // Special case when r = 1                                       1-x^n/1-r
        sum= n * a;
    } else {
        // General case for r ≠ 1
        sum= a * (1 - pow(r, n)) / (1 - r);
    }
cout << "The sum of the first " << n << " terms of the geometric series is: " << sum << endl; 

 int n;
 double sum;

    cout << "Enter the number of terms (n) for the harmonic series: ";
    cin >> n;
     double sum = 0.0;
    for (int i = 1; i <= n; i++) {
       { sum += 1.0 / i;}
        cout << "The sum of the first " << n << " terms of the harmonic series is: " << sum << endl;
       
         int n, choice, k;
    double sum = 0.0;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    cout << "Choose the type of series to sum:\n";
    cout << "1. Sum of squares of the first n natural numbers\n";
    cout << "2. Sum of cubes of the first n natural numbers\n";
    cout << "3. Sum of k-th power of the first n natural numbers\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        // Sum of squares
        for (int i = 1; i <= n; i++) {
            sum += i * i;
        }
        cout << "The sum of squares of the first " << n << " natural numbers is: " << sum << endl;
    } 
    else if (choice == 2) {
        // Sum of cubes
        for (int i = 1; i <= n; i++) {
            sum += i * i * i;
        }
        cout << "The sum of cubes of the first " << n << " natural numbers is: " << sum << endl;
    } 
    else if (choice == 3) {
        // Sum of k-th power
        cout << "Enter the power (k): ";
        cin >> k;
        for (int i = 1; i <= n; i++) {
            sum += pow(i, k);
        }
        cout << "The sum of " << k << "-th powers of the first " << n << " natural numbers is: " << sum << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

         
    getch();
    return 0;
}