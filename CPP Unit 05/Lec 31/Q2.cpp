Single File Programming Question
Problem Statement



Sheela needs to create a program that takes a list of integers and categorizes them into prime and non-prime numbers. Write a function isPrime to determine if a number is prime. The program should prompt the user to enter the count of integers (N), followed by N integers, and then display the prime and non-prime numbers separately.



Use dynamic arrays to store prime and non-prime numbers based on input size, ensuring correct memory allocation with new and delete. 

Input format :
The first line contains an integer N, representing the number of integers they want to classify.

The second line contains N integers, each separated by spaces.

Output format :
If there are prime numbers in the array, print them in line with the format: "Prime numbers: p1 p2 p3 ....".

If no prime numbers are found, print: "No prime numbers found."

Print the non-prime numbers in a line with the format: "Non-prime numbers: np1 np2 np3 ....".

If no non-prime numbers are found, print: "No non-prime numbers found."



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ N ≤ 35

-500 ≤ elements ≤ 500

Sample test cases :
Input 1 :
7
-12 15 19 -23 32 41 47
Output 1 :
Prime numbers: 19 41 47 
Non-prime numbers: -12 15 -23 32 
Input 2 :
8
1 4 6 8 9 0 12 15
Output 2 :
No prime numbers found.
Non-prime numbers: 1 4 6 8 9 0 12 15 
Input 3 :
4
17 29 31 73
Output 3 :
Prime numbers: 17 29 31 73 
No non-prime numbers found.


Whitelist
Set 1:
new
delete




#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int* prime = new int[N];
    int* nonPrime = new int[N];
    int pCount = 0, npCount = 0;

    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            prime[pCount++] = arr[i];
        } else {
            nonPrime[npCount++] = arr[i];
        }
    }

    if (pCount > 0) {
        cout << "Prime numbers: ";
        for (int i = 0; i < pCount; i++) {
            cout << prime[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No prime numbers found." << endl;
    }

    if (npCount > 0) {
        cout << "Non-prime numbers: ";
        for (int i = 0; i < npCount; i++) {
            cout << nonPrime[i] << " ";
        }
    } else {
        cout << "No non-prime numbers found.";
    }

    delete[] arr;
    delete[] prime;
    delete[] nonPrime;

    return 0;
}
