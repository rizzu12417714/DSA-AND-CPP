Single File Programming Question
Problem Statement



Hulk is testing his strength levels in the Avengers training facility. He needs to measure his strength using the formula: Strength = Force × Distance. However, negative force values are invalid and must be handled using exception handling with rethrowing. 



When a negative force is detected, the program should catch the exception in an intermediate function, display an error message, and rethrow it to the main function for final handling. 



Help him to implement the task using exception handling with rethrowing.

Input format :
The first line of input consists of a double force representing the force applied in newtons.

The second line of input consists of a double distance representing the distance in meters.

Output format :
If the force is valid, the output prints "Strength value: " followed by the strength value with two decimal places.

If the force is negative, the output prints "Error detected in handleStrength" on the first line and "Caught in main: Negative force" on the second line.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

-1000.0 ≤ force ≤ 1000.0

0.0 < distance ≤ 1000.0

Strength value output is displayed with exactly 2 decimal places

Sample test cases :
Input 1 :
10.0
5.0
Output 1 :
Strength value: 50.00
Input 2 :
-12.0
12.0
Output 2 :
Error detected in handleStrength
Caught in main: Negative force


#include <iostream>
#include <stdexcept>
#include <iomanip>
using namespace std;

void calculateStrength(double force, double distance) {
    if (force < 0) {
        throw invalid_argument("Negative force");
    }
    double strength = force * distance;
    cout << fixed << setprecision(2);
    cout << "Strength value: " << strength << endl;
}

void handleStrength(double force, double distance) {
    try {
        calculateStrength(force, distance);
    } catch (invalid_argument &e) {
        cout << "Error detected in handleStrength" << endl;
        throw;
    }
}

int main() {
    double force, distance;
    cin >> force;
    cin >> distance;

    try {
        handleStrength(force, distance);
    } catch (invalid_argument &e) {
        cout << "Caught in main: " << e.what() << endl;
    }

    return 0;
}
