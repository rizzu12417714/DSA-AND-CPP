Single File Programming Question
Problem Statement



David is establishing a furniture store and requires a program to compute the total cost of various furniture items based on user input. The program must include a base class called Furniture, which has a method named material() that returns a default material cost.



Two derived classes, Chair and Table, will override the material() method, returning specific costs of 500 for chairs and 1000 for tables, respectively.



The task is to create a program that prompts users to select a furniture type (1 for Chair, 2 for Table) and specify the quantity they wish to purchase, then Using early binding, calculate and display the total cost (Quantity x Specific Cost) of the selected furniture type based on the number of items.

Input format :
The input consists of space-separated two integers, choice (1 or 2) indicating the type of furniture and n representing how many items the user wants to purchase.

Output format :
If the choice is valid, output the total cost in the format: "The total cost: <totalCost>".

If the choice is invalid, output: "Invalid choice".



Refer to the sample output for specifications.

Code constraints :
choice will be either 1 or 2.

1 ≤ n ≤ 50

Sample test cases :
Input 1 :
1 3
Output 1 :
The total cost: 1500
Input 2 :
2 6
Output 2 :
The total cost: 6000
Input 3 :
3 7
Output 3 :
Invalid choice



#include <iostream>
using namespace std;

class Furniture {
public:
    int material() {
        return 0;
    }
};

class Chair : public Furniture {
public:
    int material() {
        return 500;
    }
};

class Table : public Furniture {
public:
    int material() {
        return 1000;
    }
};

int main() {
    int choice, n;
    cin >> choice >> n;

    if (choice == 1) {
        Chair c;
        cout << "The total cost: " << c.material() * n;
    }
    else if (choice == 2) {
        Table t;
        cout << "The total cost: " << t.material() * n;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
