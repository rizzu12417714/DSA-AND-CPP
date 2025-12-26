Single File Programming Question
Problem Statement



Sandeep, a software developer, is working on a project to manage employee bonuses using a hash table. The employee IDs are mapped to their corresponding bonuses. He needs to implement a function to create a bonus table and retrieve the bonus for a specific employee by their ID. Help him implement this task.

Input format :
The first line of input consists of an integer n, representing the number of employees.

The second line of input consists of n integers, representing the employee IDs.

The third line of input consists of n integers, representing the bonuses for each employee.

The fourth line of input consists of an integer query, representing the employee ID for which the bonus is to be fetched.

Output format :
If the employee exists, print: "Bonus for employee ID <employeeID>: <bonus>".

If the employee doesn't exist, print: "Employee ID <employeeID> not found".



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

The number of employees n is between 1 and 1000.
The employee IDs and bonuses are positive integers.
MAX_SIZE = 1000
Sample test cases :
Input 1 :
5
101 102 103 104 105
2000 2500 3000 3500 4000
103
Output 1 :
Bonus for employee ID 103: 3000
Input 2 :
3
201 202 203
1500 1800 2100
202
Output 2 :
Bonus for employee ID 202: 1800
Input 3 :
3
1 2 3
120 130 140
4
Output 3 :
Employee ID 4 not found



#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ids[1000], bonuses[1000];
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> bonuses[i];
    }

    unordered_map<int, int> bonusTable;
    for (int i = 0; i < n; i++) {
        bonusTable[ids[i]] = bonuses[i];
    }

    int query;
    cin >> query;

    if (bonusTable.find(query) != bonusTable.end()) {
        cout << "Bonus for employee ID " << query << ": " << bonusTable[query];
    } else {
        cout << "Employee ID " << query << " not found";
    }

    return 0;
}
