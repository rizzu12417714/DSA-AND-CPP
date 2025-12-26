Single File Programming Question
Problem Statement

Rohan is arranging different box numbers using a Max Heap so that the largest box always stays on top.
  He inserts each number one by one into the heap and wants to know which box becomes the root after all insertions.

After inserting all the elements in the Max Heap, help him find and print the root.

Input format :
The first line of input consists of an integer n, representing the number of box labels.

The second line contains n space-separated integers, representing the box labels to be inserted into the Max Heap.

Output format :
The output prints an integer representing the root element of the Max Heap.

Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

1 ≤ box labels ≤ 100

Sample test cases :
Input 1 :
6
5 12 3 20 8 15
Output 1 :
20
Input 2 :
5
4 7 2 9 1
Output 2 :
9


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxVal = -1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > maxVal) {
            maxVal = x;
        }
    }
    cout << maxVal;
    return 0;
}
