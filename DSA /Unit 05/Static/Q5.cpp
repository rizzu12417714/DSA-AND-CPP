Single File Programming Question
Problem Statement



Noah is designing a system to manage and analyze a Min Heap of numerical data. The system allows users to input a set of integers, which are added to the Min Heap.



After all values have been inserted, the program will:

Display the elements of the Min Heap.
Calculate and display the cubes of each element in the Min Heap.
Input format :
The first line contains an integer n, representing the number of integers to insert into the Min Heap.

The second line contains n space-separated integers, representing the values to be inserted.

Output format :
The first line displays the elements of the Min Heap in the order they appear.

The second line displays the cubes of these elements, separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 10

1 ≤ values ≤ 50

Sample test cases :
Input 1 :
5
3 9 2 6 8
Output 1 :
2 6 3 9 8 
8 216 27 729 512 
Input 2 :
8
25 15 17 32 23 5 12 8
Output 2 :
5 8 12 23 25 17 15 32 
125 512 1728 12167 15625 4913 3375 32768







#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapifyUp(vector<int>& heap, int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (heap[index] < heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
        } else {
            break;
        }
    }
}

int main() {
    int n, val;
    cin >> n;
    vector<int> heap;
    
    for (int i = 0; i < n; i++) {
        cin >> val;
        heap.push_back(val);
        heapifyUp(heap, heap.size() - 1);
    }
    
    for (int i = 0; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < heap.size(); i++) {
        cout << heap[i] * heap[i] * heap[i] << " ";
    }
    
    return 0;
}
