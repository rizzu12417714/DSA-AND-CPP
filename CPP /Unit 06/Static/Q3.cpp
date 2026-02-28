Single File Programming Question
Problem Statement



Spider-Man is testing the strength of his web shooters across New York City. He needs to calculate the strength of multiple web strands using the formula: Strength = Thickness × Length. 



To manage and analyze the web strengths, he stores them in a vector, passes the vector to a function to find the minimum strength, and displays all the strengths along with the minimum value. 



Help him to implement the task using vectors from the Standard Template Library (STL).

Input format :
The first line of input consists of an integer n representing the number of web strands.

The next n pairs of lines consist of a double thickness representing the thickness of the web in millimeters, followed by a double length representing the length of the web in meters.

Output format :
The first line of output prints "Web strengths:".

The subsequent lines print the strength of each web strand with two decimal places, one strength per line.

The last line of output prints "Minimum strength: " followed by the minimum strength value with two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

0.0 < thickness ≤ 100.0

0.0 < length ≤ 1000.0

Strength output is displayed with exactly 2 decimal places

Sample test cases :
Input 1 :
3
2.0
3.0
1.0
5.0
4.0
2.0
Output 1 :
Web strengths:
6.00
5.00
8.00
Minimum strength: 5.00
Input 2 :
2
5.0
2.0
3.0
4.0
Output 2 :
Web strengths:
10.00
12.00
Minimum strength: 10.00




#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double calculateStrength(double thickness, double length) {
    return thickness * length;
}

double findMinimum(vector<double> strengths) {
    double minVal = strengths[0];
    for (int i = 1; i < strengths.size(); i++) {
        if (strengths[i] < minVal) {
            minVal = strengths[i];
        }
    }
    return minVal;
}

int main() {
    int n;
    cin >> n;

    vector<double> strengths;

    for (int i = 0; i < n; i++) {
        double thickness, length;
        cin >> thickness >> length;
        double strength = calculateStrength(thickness, length);
        strengths.push_back(strength);
    }

    cout << fixed << setprecision(2);
    cout << "Web strengths:" << endl;

    for (int i = 0; i < strengths.size(); i++) {
        cout << strengths[i] << endl;
    }

    double minStrength = findMinimum(strengths);
    cout << "Minimum strength: " << minStrength << endl;

    return 0;
}
