Single File Programming Question
Problem Statement



Arjun is working on an electrical power calculator for his physics lab project. He needs to calculate the power output of various electrical devices using the voltage and resistance values. However, he must handle cases where resistance values are invalid (zero or negative) using exception handling. 



When an invalid resistance is detected, the program should throw an exception with the message "Invalid resistance". Help him to implement the task using exception handling.



Formula:

Power (P) = (Voltage² / Resistance)



Where:

Voltage is the electrical potential difference in volts
Resistance is the electrical resistance in ohms
Power is calculated in watts
Input format :
The first line of input consists of a double voltage representing the voltage in volts.

The second line of input consists of a double resistance representing the resistance in ohms.

Output format :
If the resistance is valid, the output prints "Power output: " followed by the power value with two decimal places.

If the resistance is invalid, the output prints "Invalid resistance".



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

-1000.0 ≤ voltage ≤ 1000.0

-100.0 ≤ resistance ≤ 100.0

Power output is displayed with exactly 2 decimal places

Sample test cases :
Input 1 :
12.0
4.0
Output 1 :
Power output: 36.00
Input 2 :
3.3
-1.1
Output 2 :
Invalid resistance



#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main() {
    double voltage, resistance;
    cin >> voltage;
    cin >> resistance;

    try {
        if (resistance <= 0) {
            throw runtime_error("Invalid resistance");
        }

        double power = (voltage * voltage) / resistance;
        cout << fixed << setprecision(2);
        cout << "Power output: " << power;
    }
    catch (...) {
        cout << "Invalid resistance";
    }

    return 0;
}
