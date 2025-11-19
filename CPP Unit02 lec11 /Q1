QUESTION PARAGRAPH (FULL & CLEAN)

Peter is developing a program to filter out non-Fibonacci numbers from a list of integers.
He has created a class named NonFibonacciElements to achieve this task.

Given an array of integers, write a program inside this class to identify and print all the elements that are not Fibonacci numbers.


---

✅ INPUT FORMAT

The first line contains an integer N, the number of elements in the array.

The second line contains N space-separated integers, representing the array elements.



---

✅ OUTPUT FORMAT

Print all the elements from the input array that are not Fibonacci numbers, separated by a space.

(No extra spaces at the end)


---

✅ CODE CONSTRAINTS

1 ≤ N ≤ 10

1 ≤ array elements ≤ 1000



---

✅ SAMPLE TEST CASES

Input 1

7
1 5 3 8 9 13 4

Output 1

9 4


---

Input 2

8
53 68 94 91 95 2 97 82

Output 2

53 68 94 91 95 97 82


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class NonFibonacciElements {
public:

    bool isPerfectSquare(long long n) {
        long long s = sqrt(n);
        return s * s == n;
    }

    bool isFibonacci(int n) {
        return isPerfectSquare(5LL * n * n + 4) || isPerfectSquare(5LL * n * n - 4);
    }

    void printNonFibonacci(const vector<int>& arr) {
        for (int x : arr) {
            if (!isFibonacci(x))
                cout << x << " ";
        }
    }
};

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    NonFibonacciElements obj;
    obj.printNonFibonacci(arr);

    return 0;
}








