Single File Programming Question
Problem Statement



Roy is building a Fibonacci number calculator for a programming competition.
  The competition requires participants to write a program that generates the first 'n' Fibonacci numbers 
and prints the sequence.



Participants are not allowed to use any pre-calculated Fibonacci numbers or 
predefined functions for Fibonacci calculations. His task is to implement the Fibonacci number calculator. Write a program using dynamic memory allocation to accomplish this task.



Company Tags: Deloitte

Input format :
The input consists of a single integer, n.

Output format :
If n is less than or equal to zero, print: "Number of Fibonacci numbers should be positive!"



If n is positive, print the Fibonacci sequence of n numbers in the format: "Fibonacci Sequence: " followed by the first n Fibonacci numbers, separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 28

Sample test cases :
Input 1 :
5
Output 1 :
Fibonacci Sequence: 0 1 1 2 3 
Input 2 :
-2
Output 2 :
Number of Fibonacci numbers should be positive!

Whitelist
Set 1:
new
delete



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Number of Fibonacci numbers should be positive!";
        return 0;
    }

    int* fib = new int[n];

    if (n >= 1) fib[0] = 0;
    if (n >= 2) fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Sequence: ";
    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }

    delete[] fib;
    return 0;
}
