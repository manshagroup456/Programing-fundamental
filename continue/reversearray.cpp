#include<iostream>
using namespace std;

int main() {
    int a[5], b[5];
    int i;

    // Input values for array a
    for(i = 0; i < 5; i++) {
        cout << "Enter value of index " << i << ": ";
        cin >> a[i];
    }

    // Display values of array a and copy them to array b
    cout << "a[5] = { ";
    for(i = 0; i < 5; i++) {
        cout << a[i] << " ";
        b[i] = a[i];
    }
    cout << "}";

    // Display values of array b in reverse order
    cout << "\nb[5] = { ";
    for(i = 4; i >= 0; i--) {
        cout << b[i] << " ";
    }
    cout << "}";

    // Pause the program (if needed)
    cin.get();  // Optional replacement for getch()
    return 0;
}
