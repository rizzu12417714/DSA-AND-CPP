Problem Statement

A company maintains a database that stores details of all its employees.
There are two levels of employees:

Level 1: Top management employees whose salary is more than 100 dollars

Level 2: Staff employees whose salary is less than or equal to 100 dollars


Create a class named Employee with attributes empId and salary.
Create another class named empLevel that inherits from the Employee class and categorizes the 
employee into different levels based on salary.

Use single inheritance to implement the solution.


---

Input Format

The input consists of employee ID and salary separated by a space.

Employee ID is of integer type

Salary is of float type



---

Output Format

The output displays:

Employee ID

Salary rounded to two decimal places

Level of the employee


Each output should be printed on a separate line.


---

Code Constraints







---

Sample Test Cases

Input 1

253 5.6

Output 1

Employee ID: 253
Salary: $5.60
Level: 2


---

Input 2

253 105.6

Output 2

Employee ID: 253
Salary: $105.60
Level: 1


---

Input 3

450 100.0

Output 3

Employee ID: 450
Salary: $100.00
Level: 2



code 



#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
public:
    int empId;
    float slry;

    Employee(int empId, float slry) {
        this->empId = empId;
        this->slry = slry;
    }
};

class empLevel : public Employee {
public:
    int level;

    empLevel(int empId, float slry) : Employee(empId, slry) {
        if (slry > 100)
            level = 1;
        else
            level = 2;

        cout << "Employee ID: " << empId << endl;
        cout << fixed << setprecision(2);
        cout << "Salary: $" << slry << endl;
        cout << "Level: " << level << endl;
    }
};

int main() {
    int empId;
    float slry;
    cin >> empId >> slry;
    empLevel e(empId, slry);
    return 0;
}
