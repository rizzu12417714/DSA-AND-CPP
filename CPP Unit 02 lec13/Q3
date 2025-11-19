Question ParagraphSena wants to upskill in C++ by learning about member functions. Help him solve the following question: Create a class called BankATM to represent an ATM machine having attributes: ATM ID (integer), location (string), and available cash (float).Implement member functions to withdraw cash, deposit cash, and display the current available cash in the ATM.Input format:An integer value for the ATM ID.A string for the location of the ATM.A floating-point value for the available cash in the ATM.A floating-point value representing the amount to withdraw.A floating-point value representing the amount to deposit��.Output format:For a successful withdrawal:
"Withdrawal successful. Available cash: [cash]"
where [cash] is updated available cash in the ATM, with one decimal place.For an unsuccessful withdrawal:
"Insufficient cash in the ATM"After a successful deposit:
"Deposit successful. Available cash: [cash]"
where [cash] is updated available cash in the ATM, again with one decimal.Finally:
"Available cash in ATM: [cash]"
where [cash] is the available cash in the ATM, with one decimal place.Sample Test CasesInput 1:1234
Main Street
1000.5
200.7
300.0Output 1:Withdrawal successful. Available cash: 799.8
Deposit successful. Available cash: 1099.8
Available cash in ATM: 1099.8Input 2:4321
High Street
1500.0
2000.5
3000.5Output 2:Insufficient cash in the ATM
Deposit successful. Available cash: 4500.5
Available cash in ATM: 4500.5

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankATM {
    int atmID;
    string location;
    float availableCash;

public:
    void initialize(int id, string loc, float cash) {
        atmID = id;
        location = loc;
        availableCash = cash;
    }

    void withdraw(float amount) {
        if (availableCash >= amount) {
            availableCash -= amount;
            cout << fixed << setprecision(1);
            cout << "Withdrawal successful. Available cash: " << availableCash << endl;
        } else {
            cout << "Insufficient cash in the ATM" << endl;
        }
    }

    void deposit(float amount) {
        availableCash += amount;
        cout << fixed << setprecision(1);
        cout << "Deposit successful. Available cash: " << availableCash << endl;
    }

    void displayCash() {
        cout << fixed << setprecision(1);
        cout << "Available cash in ATM: " << availableCash << endl;
    }
};

int main() {
    BankATM atm;
    int id;
    string location;
    float cash, withdrawAmount, depositAmount;
    cin >> id;
    cin.ignore();
    getline(cin, location);
    cin >> cash >> withdrawAmount >> depositAmount;

    atm.initialize(id, location, cash);
    atm.withdraw(withdrawAmount);
    atm.deposit(depositAmount);
    atm.displayCash();

    return 0;
}

