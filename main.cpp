#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int originalInventoryCount = 50;
    const double originalCashAmount = 200.0;

    // display menu 
    cout << "Drink             Small (S)   Medium (M)   Large (L)" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "A. Apple Juice     $2.50       $3.50        $4.50" << endl;
    cout << "B. Beer            $5.00       $7.00        $9.00" << endl;
    cout << "C. Coffee          $2.00       $2.75        $3.25" << endl;
    cout << "D. Lemonade        $2.25       $3.00        $3.75" << endl;
    cout << "------------------------------------------------------" << endl;

    // item choice/size
    char itemChoice;
    char sizeChoice;

    cout << "\nSelect an item (A, B, C, D): ";
    cin >> itemChoice;

    cout << "Select a size (s, m, l): ";
    cin >> sizeChoice;

    string foodName = ""; 
    string sizeLabel = "";
    double unitPrice = 0.0;
    
    // apple juice
    if (itemChoice == 'A' || itemChoice == 'a') {
        foodName = "Apple Juice";
        if (sizeChoice == 's' || sizeChoice == 'S') {
            sizeLabel = "Small";
            unitPrice = 2.50;
        }
        else if (sizeChoice == 'm' || sizeChoice == 'M') {
            sizeLabel = "Medium";
            unitPrice = 3.50;
        }
        else if (sizeChoice == 'l' || sizeChoice == 'L') {
            sizeLabel = "Large";
            unitPrice = 4.50;
        }
    }
    // beer
    else if (itemChoice == 'B' || itemChoice == 'b') {
        foodName = "Beer";
        if (sizeChoice == 's' || sizeChoice == 'S') {
            sizeLabel = "Small";
            unitPrice = 5.00;
        }
        else if (sizeChoice == 'm' || sizeChoice == 'M') {
            sizeLabel = "Medium";
            unitPrice = 7.00;
        }
        else if (sizeChoice == 'l' || sizeChoice == 'L') {
            sizeLabel = "Large";
            unitPrice = 9.00;
        }
    }
    // coffee 
    else if (itemChoice == 'C' || itemChoice == 'c') {
        foodName = "Coffee";
        if (sizeChoice == 's' || sizeChoice == 'S') {
            sizeLabel = "Small";
            unitPrice = 2.00;
        }
        else if (sizeChoice == 'm' || sizeChoice == 'M') {
            sizeLabel = "Medium";
            unitPrice = 2.75;
        }
        else if (sizeChoice == 'l' || sizeChoice == 'L') {
            sizeLabel = "Large";
            unitPrice = 3.25;
        }
    }
    // lemonade
    else if (itemChoice == 'D' || itemChoice == 'd') {
        foodName = "Lemonade";
        if (sizeChoice == 's' || sizeChoice == 'S') {
            sizeLabel = "Small";
            unitPrice = 2.25;
        }
        else if (sizeChoice == 'm' || sizeChoice == 'M') {
            sizeLabel = "Medium";
            unitPrice = 3.00;
        }
        else if (sizeChoice == 'l' || sizeChoice == 'L') {
            sizeLabel = "Large";
            unitPrice = 3.75;
        }
    }

    int quantity;
    char member;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Member (y/n): ";
    cin >> member;

    double subtotal = quantity * unitPrice;

    // 10% member discount
    if (member == 'y' || member == 'Y') {
        cout << "\nMember Discount (10%) applied!" << endl;
        subtotal = subtotal * 0.90; 
    }
    else {
        cout << "\nNot a member." << endl;
    }

    // receipt
    cout << fixed << setprecision(2);
    cout << "\n--- Order Summary ---" << endl;
    cout << "Item:      " << sizeLabel << " " << foodName << endl;
    cout << "Quantity:  " << quantity << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Subtotal:   $" << subtotal << endl;


    return 0;
}
