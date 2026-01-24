Single File Programming Question
Problem Statement



Dr. Strange is analyzing his magical spells in the Sanctum Sanctorum. He needs to calculate the power of multiple spells using the formula: Power = Base × Multiplier. 



To organize and analyze the spell powers, he stores them in a vector, sorts them in ascending order using STL algorithms, and finds the maximum power using iterators. 



Help him to implement the task using vector, algorithms, and iterators from the Standard Template Library (STL).

Input format :
The first line of input consists of an integer n representing the number of spells.

The next n pairs of lines consist of a double base representing the base power value, followed by a double multiplier representing the multiplier factor.

Output format :
The first line of output prints "Sorted powers:".

The subsequent lines print the sorted spell powers in ascending order with two decimal places, one power per line.

The last line of output prints "Maximum power: " followed by the maximum power value with two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

0.0 < base ≤ 1000.0

0.0 < multiplier ≤ 100.0

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
Sorted powers:
5.00
6.00
8.00
Maximum power: 8.00
Input 2 :
2
5.0
2.0
3.0
4.0
Output 2 :
Sorted powers:
10.00
12.00
Maximum power: 12.00



#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> powers;

    for (int i = 0; i < n; i++) {
        double base, multiplier;
        cin >> base >> multiplier;
        powers.push_back(base * multiplier);
    }

    sort(powers.begin(), powers.end());

    cout << "Sorted powers:" << endl;
    cout << fixed << setprecision(2);

    for (auto it = powers.begin(); it != powers.end(); ++it) {
        cout << *it << endl;
    }

    cout << "Maximum power: " << *max_element(powers.begin(), powers.end());

    return 0;
}
