#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int originalInventoryCount = 50; // for audit table
    const double orignalCashAmount = 200; // for audit table
    const double taxRate = 1.09125;  // for tax calculation
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

    /// Partner B Section

    // Member discount applied.
    if (member) {
        cout << "Member Discount (10%) activated!" << endl;
        subtotal *= .9;  // 10% discount applied.
    }
    else {
        cout << "Not a member" << endl;
    }

    cout << left << setw(20) << "Total (before tax):" << right << setw(10) << subtotal << endl;
    // Tax calculated
    subtotal *= taxRate;
    // Total after Tax amt displayed.
    cout << left << setw(20) << "Total (with tax):" << right << setw(10) << subtotal << endl;

    // Inventory Audit Table

    int currentInventory = originalInventoryCount - quantity;
    double currentCashAmount = orignalCashAmount + subtotal;

    cout << "Inventory Audit Table" << endl;
    cout << left;
    cout << setw(12) << "Item"
        << setw(15) << "Initial Count"
        << setw(15) << "After Transaction Count"
        << endl;

    cout << setw(12) << foodName
        << setw(15) << originalInventoryCount
        << setw(15) << currentInventory
        << endl;
    cout << setw(12) << "Cash"
        << setw(15) << orignalCashAmount
        << setw(15) << currentCashAmount
        << endl;


    return 0;
}