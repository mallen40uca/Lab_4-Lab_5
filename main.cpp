#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string foodName;
    char itemCode;
    int quantity;
    double unitPrice;
    char member;

    cout << "Enter Food Name: ";
    getline(cin, foodName);

    cout << "Enter Item Code: ";
    cin >> itemCode;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    cout << "Member (y/n): ";
    cin >> member;

    double subtotal = quantity * unitPrice;

    cout << fixed << setprecision(2);

    cout << left << setw(12) << "Item:" << right << setw(10) << foodName << endl;
    cout << left << setw(12) << "Code:" << right << setw(10) << itemCode << endl;
    cout << left << setw(12) << "Quantity:" << right << setw(10) << quantity << endl;
    cout << left << setw(12) << "Price:" << right << setw(10) << unitPrice << endl;
    cout << left << setw(12) << "Subtotal:" << right << setw(10) << subtotal << endl;

    return 0;
}
