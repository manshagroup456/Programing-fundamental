#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int number;
    char op;
    int price_pizza = 1000, price_pessi = 200, price_fries = 200;
    int quantity_pizza = 0, quantity_pessi = 0, quantity_fries = 0; // quantity for each item
    int total_pizza = 0, total_pessi = 0, total_fries = 0; // subtotal for each item

    cout << "If you want a pizza then press 1" << endl;
    cout << "If you want a pessi then press 2" << endl;
    cout << "If you want fries then press 3" << endl;

    do {
        cout << "Enter your dish number: ";
        cin >> number;

        if (number == 1) {
            quantity_pizza++;
            total_pizza = quantity_pizza * price_pizza; // update subtotal for pizza
        } 
        else if (number == 2) {
            quantity_pessi++;
            total_pessi = quantity_pessi * price_pessi; // update subtotal for pessi
        } 
        else if (number == 3) {
            quantity_fries++;
            total_fries = quantity_fries * price_fries; // update subtotal for fries
        } 
        else {
            cout << "Invalid menu option" << endl;
            continue; // ask for another input if the menu option is invalid
        }

        cout << "Do you want to continue (y/n): ";
        cin >> op;

    } while (op == 'y'); // loop continues if 'y' is entered

    // Calculate total bill
    int total_bill = total_pizza + total_pessi + total_fries;

    // Display the quantity, subtotal, and total bill
    cout << "\nSummary of your order:\n";
    cout << "----------------------------------\n";
    cout << "Dish        Quantity    Subtotal\n";
    cout << "----------------------------------\n";
    cout << "Pizza       " << quantity_pizza << "           " << total_pizza << endl;
    cout << "Pessi       " << quantity_pessi << "           " << total_pessi << endl;
    cout << "Fries       " << quantity_fries << "           " << total_fries << endl;
    cout << "----------------------------------\n";
    cout << "Total Bill: " << total_bill << endl;

    getch();
    return 0;
}
