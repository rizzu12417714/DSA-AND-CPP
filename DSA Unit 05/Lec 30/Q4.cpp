Single File Programming Question
Problem Statement



Kavya is organizing item codes in her database and wants them sorted first before separating them into odd and even categories. She uses Heap Sort to arrange all numbers in ascending order, then lists all odd numbers first and even numbers next. 



Help her generate the required output.

Input format :
The first line contains an integer n, representing the number of item codes.

The second line contains n space-separated integers, representing the item codes.

Output format :
The first line of output prints all odd numbers in ascending order.

The second line prints all even numbers in ascending order.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

1 ≤ item code ≤ 105

Sample test cases :
Input 1 :
5
9 4 2 7 3
Output 1 :
3 7 9 
2 4 
Input 2 :
6
10 21 3 14 7 8
Output 2 :
3 7 21 
8 10 14

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
