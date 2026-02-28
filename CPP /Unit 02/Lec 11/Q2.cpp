QUESTION PARAGRAPH (FULL & CLEAN)

Ellis is working on a program to analyze an array of numbers.
She needs to find the sum, count, and average of numbers in the array that are not divisible by 4.

If all numbers in the array are divisible by 4, the program must display:

All elements are divisible by 4

Help Ellis by writing a program that performs this task.


---

✅ INPUT FORMAT

The first line contains an integer N, the number of elements in the array.

The second line contains N space-separated integers.



---

✅ OUTPUT FORMAT

If there are elements not divisible by 4, print:

Elements not divisible by 4: <numbers>
Sum: <sum>
Average: <avg upto 2 decimals>
Count: <count>

If all elements are divisible by 4, print:

All elements are divisible by 4


---

✅ CODE CONSTRAINTS

1 ≤ N ≤ 10

0 ≤ element ≤ 100



---

✅ SAMPLE TEST CASES

Input 1

5
11 12 23 44 51

Output 1

Elements not divisible by 4: 11 23 51
Sum: 85
Average: 28.33
Count: 3


---

Input 2

4
4 8 2 5

Output 2

Elements not divisible by 4: 2 5
Sum: 7
Average: 3.50
Count: 2


---

Input 3

2
48 52

Output 3

All elements are divisible by 4





#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[10];
    bool allDiv4 = true;

    int sum = 0, count = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] % 4 != 0)
            allDiv4 = false;
    }

    if (allDiv4) {
        cout << "All elements are divisible by 4";
    } 
    else {
        cout << "Elements not divisible by 4: ";
        for (int i = 0; i < N; i++) {
            if (arr[i] % 4 != 0) {
                cout << arr[i] << " ";
                sum += arr[i];
                count++;
            }
        }
        cout << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << fixed << setprecision(2) << (double)sum / count << endl;
        cout << "Count: " << count;
    }

    return 0;
}




