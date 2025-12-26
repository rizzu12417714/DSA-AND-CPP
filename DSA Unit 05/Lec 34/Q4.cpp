Single File Programming Question
Problem Statement



Archer is implementing a hash table with quadratic probing for collision resolution. He has a list of integers that need to be inserted into the hash table. If a collision occurs while inserting a key, quadratic probing is used to find the next available position. Once all the elements are inserted,  Archer needs to print the final state of the hash table.



Help him implement the task.



FORMULA:

The formula used to calculate the hash table index is: index = (key + j * j) % TABLE_SIZE,

where key is the array element, j is the number of collisions that have occurred, and TABLE_SIZE is the size of the table.

Input format :
The first line of input consists of an integer tsize, the size of the hash table.

The second line contains an integer n, the number of elements in the array.

The third line contains n integers, the elements to be inserted into the hash table.

Output format :
For each index i in the hash table, print: Element at position <i>: <element>,

where <i> is the index of the hash table and <element> is the value stored at that index or -1 if the position is empty.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ tsize ≤ 20

1 ≤ n ≤ 10

Each element in the array is a positive integer.

Sample test cases :
Input 1 :
7
5
12 15 20 25 30
Output 1 :
Element at position 0: -1
Element at position 1: 15
Element at position 2: 30
Element at position 3: -1
Element at position 4: 25
Element at position 5: 12
Element at position 6: 20
Input 2 :
5
4
13 17 21 30
Output 2 :
Element at position 0: 30
Element at position 1: 21
Element at position 2: 17
Element at position 3: 13
Element at position 4: -1





#include <bits/stdc++.h>
using namespace std;

int main() {
    int tsize;
    cin >> tsize;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> table(tsize, -1);

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = 0;

        while (j < tsize) {
            int index = (key + j * j) % tsize;
            if (table[index] == -1) {
                table[index] = key;
                break;
            }
            j++;
        }
    }

    for (int i = 0; i < tsize; i++) {
        cout << "Element at position " << i << ": " << table[i] << "\n";
    }

    return 0;
}
