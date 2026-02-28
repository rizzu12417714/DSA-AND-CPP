Single File Programming Question
Problem Statement



You have been asked to create a program that calculates the sum of digits for a three-digit number provided by the user. The program should handle exceptional situations when the input number is not a valid three-digit number. Print the sum if it is a three-digit number, else print the error message.

Input format :
The input consists of a positive integer.

Output format :
The output prints the sum of the given positive number.

The output throws the message if the given number is not a three-digit or negative integer.



Refer to the sample output for the formatting specifications.

Code constraints :
The input should be a positive three-digit number.

Sample test cases :
Input 1 :
567
Output 1 :
Sum of the digits is 18
Input 2 :
1234
Output 2 :
It's not a three digit Number or valid number
Input 3 :
-88
Output 3 :
It's not a three digit Number or valid number


#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int n;
    cin >> n;

    try {
        if (n < 100 || n > 999) {
            throw invalid_argument("invalid");
        }

        int sum = 0;
        int temp = n;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        cout << "Sum of the digits is " << sum;
    }
    catch (...) {
        cout << "It's not a three digit Number or valid number";
    }

    return 0;
}
