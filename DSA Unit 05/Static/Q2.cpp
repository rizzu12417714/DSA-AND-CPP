Single File Programming Question
Problem Statement



Emma is designing a program to manage a list of square numbers for a mathematical simulation project. She needs to store these values in a Max Heap structure, which allows her to efficiently access the largest square number at any time.



For her simulation, Emma wants to insert the first N square numbers into the Max Heap and print the state of the heap after each insertion.



Help Emma create a program that accomplishes this task.

Input format :
The input consists of a single integer N, representing the number of square numbers to insert into the Max Heap.

Output format :
For each square number inserted, the output should be in the following format:

Heap after inserting <square_number>: <heap_elements>

Where <square_number> is the square number that was just inserted, and <heap_elements> are the elements in the Max Heap displayed in heap order, separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ N ≤ 10

Sample test cases :
Input 1 :
3
Output 1 :
Heap after inserting 1: 1 
Heap after inserting 4: 4 1 
Heap after inserting 9: 9 1 4 
Input 2 :
5
Output 2 :
Heap after inserting 1: 1 
Heap after inserting 4: 4 1 
Heap after inserting 9: 9 1 4 
Heap after inserting 16: 16 9 4 1 
Heap after inserting 25: 25 16 4 1 9



#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
public:
    vector<int> arr;

    void insert(int x) {
        arr.push_back(x);
        int i = arr.size() - 1;
        while (i > 0) {
            int parent = (i - 1) / 2;
            if (arr[parent] < arr[i]) {
                swap(arr[parent], arr[i]);
                i = parent;
            } else {
                break;
            }
        }
    }

    void printHeap() {
        for (int i = 0; i < (int)arr.size(); i++) {
            cout << arr[i];
            if (i != (int)arr.size() - 1) cout << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;

    MaxHeap heap;
    for (int i = 1; i <= N; i++) {
        int square = i * i;
        heap.insert(square);
        cout << "Heap after inserting " << square << ": ";
        heap.printHeap();
    }
    return 0;
  }
