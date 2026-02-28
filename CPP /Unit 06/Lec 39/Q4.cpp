Single File Programming Question
Problem Statement



Sneha is developing a generic function to find the maximum value between two input values. Write a program to perform the following task:



Write a program that contains a function called maxValue, which accepts two arguments of the same data type and returns the maximum value of the two. The program should use templates to allow the function to work with both integers and double-point numbers.

Input format :
The first two lines contain two integers, a and b, on a separate line, representing the two integer values for which you want to find the maximum.

The next two lines contain two double values, c, and d, on a separate line, representing the two double values for which you want to find the maximum.

Output format :
The first line will display the maximum value of the two integers a and b in the following format: "Maximum value: [value]".

The second line will display the maximum value of the two double values c and d in the following format: "Maximum value: [value]".



Refer to the sample output for the formatting specifications.

Code constraints :
For integer values, -109 <= a, b <= 109.

For double values, -109 <= c, d <= 109.

The program assumes that the user will provide valid integer and double values input.

The data type of the inputs will be either int or double.

Sample test cases :
Input 1 :
250
789
596.285
879.485
Output 1 :
Maximum value: 789
Maximum value: 879.485
Input 2 :
256
485
632.45
879.63
Output 2 :
Maximum value: 485
Maximum value: 879.63


#include <iostream>
using namespace std;

template <class T>
T maxValue(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Maximum value: " << maxValue(a, b) << endl;

    double c, d;
    cin >> c >> d;
    cout << "Maximum value: " << maxValue(c, d) << endl;

    return 0;
}
