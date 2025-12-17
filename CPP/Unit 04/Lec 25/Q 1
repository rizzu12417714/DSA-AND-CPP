Single File Programming Question

Problem Statement

Jake is a customer at a bank, and he needs to manage his account balance. He initially 
deposits a specific amount into his account. Afterwards, he withdraws a certain amount. 
Implement a system where an Account class converts the initial deposit (an integer value) into 
a class object using basic to class type conversion and allows Jake to withdraw an amount
from his balance, ensuring that no overdraft occurs.


---

Input Format

The input consists of two space-separated integers:

The initial balance that Jake deposits into his account.

The amount Jake wants to withdraw.



---

Output Format

The output prints the updated balance amount after withdrawing the given amount.


---

Code Constraints

 amount to withdraw and deposit 



---

Sample Test Cases

Input 1

540 163

Output 1

377


---

Input 2

2850 1575

Output 2

1275


Code



#include <iostream>
using namespace std;

class Account {
    int balance;
public:
    Account(int b) {
        balance = b;
    }
    void withdraw(int amount) {
        if (amount <= balance)
            balance -= amount;
    }
    void display() {
        cout << balance;
    }
};

int main() {
    int deposit, withdrawAmount;
    cin >> deposit >> withdrawAmount;
    Account acc(deposit);
    acc.withdraw(withdrawAmount);
    acc.display();
    return 0;
}
