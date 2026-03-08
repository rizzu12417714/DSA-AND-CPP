Single File Programming Question
Problem Statement



﻿Arjun is working on a problem where he needs to find the length of the longest consecutive sequence of integers in an unsorted array. The sequence must consist of consecutive integers, and the order doesn't matter. Help Arjun implement this task efficiently.

Input format :
The first line of input consists of an integer n, representing the number of elements in the array.

The second line of input consists of n integers, representing the elements of the array.

Output format :
The first line of output prints: "Longest consecutive sequence length: " followed by the length of the longest consecutive subsequence in the array.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 1000
The array elements are integers that can range from -1000 to 1000.
MAX_SIZE = 1000
Sample test cases :
Input 1 :
6
100 4 200 1 3 2
Output 1 :
Longest consecutive sequence length: 4
Input 2 :
7
1 9 3 10 4 20 2
Output 2 :
Longest consecutive sequence length: 4


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> s(arr.begin(), arr.end());
    int longest = 0;

    for (int x : arr) {
        if (s.find(x - 1) == s.end()) {
            int current = x;
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << "Longest consecutive sequence length: " << longest;
    return 0;
}
