Single File Programming Question
Problem Statement



Ravi is working on a class that models a bank account. To ensure that the account balance remains a positive value, he plans to handle situations where the user attempts to deposit a negative amount by throwing a custom exception named NegativeDepositException. Ravi intends to implement this using exception handling.



Note: This kind of question will be helpful in clearing Mettyl recruitment.

Input format :
The input consists of the deposit amount(double).

Output format :
The output displays the deposit status and the balance present.

If the user enters a negative deposit amount, it will display an error message indicating that depositing a negative amount is not allowed.



Refer to the sample outputs for the formatting specifications.

Code constraints :
Deposit amount <= 105

Sample test cases :
Input 1 :
1050.50
Output 1 :
Deposit successful. Balance: 1050.5
Input 2 :
0
Output 2 :
Exception caught: Error: Cannot deposit a negative amount or zero.
Input 3 :
-100
Output 3 :
Exception caught: Error: Cannot deposit a negative amount or zero.





#include <iostream>
#include <exception>
using namespace std;

class NegativeDepositException : public exception {
public:
    const char* what() const noexcept {
        return "Cannot deposit a negative amount or zero.";
    }
};

class BankAccount {
    double balance;
public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        if (amount <= 0) {
            throw NegativeDepositException();
        }
        balance += amount;
        cout << "Deposit successful. Balance: " << balance;
    }
};

int main() {
    double amount;
    cin >> amount;

    BankAccount account;
    try {
        account.deposit(amount);
    } catch (NegativeDepositException& e) {
        cout << "Exception caught: Error: " << e.what();
    }

    return 0;
}
