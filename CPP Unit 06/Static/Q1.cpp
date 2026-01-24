Single File Programming Question
Problem Statement



Hawkeye is practicing his archery skills at the Avengers training ground. He needs to calculate the flight time for multiple arrows using the formula: Time = Distance / Velocity. To store and display the flight times of all his arrows, he uses a list data structure.



Help him to implement the task using the list container from the Standard Template Library (STL).

Input format :
The first line of input consists of an integer n representing the number of arrows.

The next n pairs of lines consist of a double distance representing the distance to target in meters, followed by a double velocity representing the arrow velocity in meters per second.

Output format :
The first line of output prints "Flight times:".

The subsequent lines print the flight time for each arrow with two decimal places, one time per line.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

0.0 < distance ≤ 1000.0

0.0 < velocity ≤ 500.0

Sample test cases :
Input 1 :
2
10.0
2.0
20.0
4.0
Output 1 :
Flight times:
5.00
5.00
Input 2 :
3
5.0
1.0
8.0
2.0
12.0
3.0
Output 2 :
Flight times:
5.00
4.00
4.00




#include <iostream>
#include <list>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    list<double> flightTimes;

    for (int i = 0; i < n; i++) {
        double distance, velocity;
        cin >> distance >> velocity;
        flightTimes.push_back(distance / velocity);
    }

    cout << "Flight times:" << endl;
    cout << fixed << setprecision(2);

    for (double t : flightTimes) {
        cout << t << endl;
    }

    return 0;
}
