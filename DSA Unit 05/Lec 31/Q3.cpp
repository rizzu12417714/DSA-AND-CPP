Single File Programming Question
Problem Statement



﻿Hema, a software developer, is working on a problem where she needs to find the length of the longest subarray with distinct elements in a given array. The subarray should not have any repeated elements, and Hema needs to implement a solution using a sliding window technique. Help her implement this task.

Input format :
The first line of input consists of an integer n, representing the number of elements in the array.

The second line of input consists of n integers, representing the elements of the array.

Output format :
The first line of output prints: "Longest subarray length: " followed by the length of the longest subarray with distinct elements.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 1000
The elements in the array are integers.
MAX_SIZE = 1000
Sample test cases :
Input 1 :
7
1 2 3 4 5 6 7
Output 1 :
Longest subarray length: 7
Input 2 :
8
1 2 2 3 4 5 6 7
Output 2 :
Longest subarray length: 6



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> window;
    int left = 0, longest = 0;

    for (int right = 0; right < n; right++) {
        while (window.find(arr[right]) != window.end()) {
            window.erase(arr[left]);
            left++;
        }
        window.insert(arr[right]);
        longest = max(longest, right - left + 1);
    }

    cout << "Longest subarray length: " << longest;
    return 0;
}
