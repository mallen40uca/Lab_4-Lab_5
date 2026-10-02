#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int originalInventoryCount = 50;
    const double originalCashAmount = 200.0;

    // display menu 
    cout << "Drink              Small (s)   Medium (m)   Large (l)" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "A. Apple Juice     $2.50       $3.50        $4.50" << endl;
    cout << "B. Beer            $5.00       $7.00        $9.00" << endl;
    cout << "C. Coffee          $2.00       $2.75        $3.25" << endl;
    cout << "D. Lemonade        $2.25       $3.00        $3.75" << endl;
    cout << "------------------------------------------------------" << endl;

    char itemChoice;
    char sizeChoice;

    cout << "\nSelect an item (A, B, C, D): ";
    cin >> itemChoice;

    cout << "Select a size (s, m, l): ";
    cin >> sizeChoice;

    string foodName = "";
    string sizeLabel = "";
    double unitPrice = 0.0;

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

    //PHASE 5: Taxes and Tips  
    double arStateTax = subtotal * 0.065;
    double faulknerTax = subtotal * 0.005;
    double conwayTax = subtotal * 0.02125;
    double totalTax = arStateTax + faulknerTax + conwayTax;

    cout << "\n=== Tax Breakdown Table ===" << endl;
    cout << left << setw(25) << "Tax Name" << setw(10) << "Rate" << setw(10) << "Amount" << endl;
    cout << "=============================================" << endl;
    cout << left << setw(25) << "Arkansas State Tax" << setw(10) << "6.500%" << "$" << setw(9) << arStateTax << endl;
    cout << left << setw(25) << "Faulkner County Tax" << setw(10) << "0.500%" << "$" << setw(9) << faulknerTax << endl;
    cout << left << setw(25) << "Conway Municipal Tax" << setw(10) << "2.125%" << "$" << setw(9) << conwayTax << endl;
    cout << "=============================================" << endl;
    cout << left << setw(25) << "Total Tax" << setw(10) << "9.125%" << "$" << setw(9) << totalTax << endl;

    double tip15 = subtotal * 0.15;
    double tip20 = subtotal * 0.20;
    double tip25 = subtotal * 0.25;

    cout << "\nTip Selection          Amount" << endl;
    cout << "=============================" << endl;
    cout << "A. 15%                 $" << tip15 << endl;
    cout << "B. 20%                 $" << tip20 << endl;
    cout << "C. 25%                 $" << tip25 << endl;
    cout << "D. Other Amount" << endl;

    char tipChoice;
    cout << "\nWhat tip do you choose? ";
    cin >> tipChoice;

    double tipAmount = 0.0;
    if (tipChoice == 'A' || tipChoice == 'a') {
        tipAmount = tip15;
    }
    else if (tipChoice == 'B' || tipChoice == 'b') {
        tipAmount = tip20;
    }
    else if (tipChoice == 'C' || tipChoice == 'c') {
        tipAmount = tip25;
    }
    else if (tipChoice == 'D' || tipChoice == 'd') {
        cout << "How much would you like to tip? $";
        cin >> tipAmount;
    }
    else {
        cout << "Invalid choice. Tip set to $0.00." << endl;
        tipAmount = 0.0;
    }

    double finalTotal = subtotal + totalTax + tipAmount;

    cout << "\n==========================================" << endl;
    cout << left << setw(25) << "Subtotal:" << "$" << right << setw(10) << subtotal << endl;
    cout << left << setw(25) << "Sales Tax:" << "$" << right << setw(10) << totalTax << endl;
    cout << left << setw(25) << "Tip Amount:" << "$" << right << setw(10) << tipAmount << endl;
    cout << "==========================================" << endl;
    cout << left << setw(25) << "TOTAL DUE:" << "$" << right << setw(10) << finalTotal << endl;
    cout << "==========================================" << endl;

    int currentInventory = originalInventoryCount - quantity;
    double currentCashAmount = originalCashAmount + finalTotal;

    cout << "\n=== Inventory Audit Table ===" << endl;
    cout << left << setw(15) << "Item" << setw(16) << "Initial Count" << setw(22) << "After Transaction" << endl;
    cout << left << setw(15) << foodName << setw(16) << originalInventoryCount << setw(22) << currentInventory << endl;
    cout << left << setw(15) << "Cash ($)" << setw(16) << originalCashAmount << setw(22) << currentCashAmount << endl;

    return 0;
}
