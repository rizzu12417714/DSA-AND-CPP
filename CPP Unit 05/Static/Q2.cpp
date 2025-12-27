Paragraph
Vamsi is interested in finding the minimum value from a set of numbers that includes both integers and double-point values. To solve this, a program is designed using function overloading, where the same function name findMin is used with different parameter types. One overloaded function determines the minimum among three integers, while the other determines the minimum among three double-point values. This approach improves code clarity and demonstrates compile-time polymorphism.
Input Format
The first line consists of three space-separated integers.
The second line consists of three space-separated double-point values.
Output Format
The first line prints
Copy code

Minimum integer: <minimum integer>
The second line prints
Copy code

Minimum double-point value: <minimum double value rounded to two decimal places>
Sample Test Cases
Sample Input 1
Copy code

8 3 7
19.4 10.5 0.8
Sample Output 1
Copy code

Minimum integer: 3
Minimum double-point value: 0.80
Sample Input 2
Copy code

435 768 346
3.531 4.561 7.89
Sample Output 2
Copy code

Minimum integer: 346
Minimum double-point value: 3.53
Full C++ Code (Without Comments)
Copy code
Cpp
#include <iostream>
#include <iomanip>
using namespace std;

int findMin(int a, int b, int c) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}

double findMin(double a, double b, double c) {
    double m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}

int main() {
    int i1, i2, i3;
    double d1, d2, d3;

    cin >> i1 >> i2 >> i3;
    cin >> d1 >> d2 >> d3;

    cout << "Minimum integer: " << findMin(i1, i2, i3) << endl;
    cout << fixed << setprecision(2);
    cout << "Minimum double-point value: " << findMin(d1, d2, d3);

    return 0;
}
