Single File Programming Question
Problem Statement



Nathan Lyon is managing a set of unique IDs for a database, and he's implementing a hash table using double hashing to store these IDs. When a new ID is inserted into the table, Nathan Lyon uses two hash functions: one to calculate the index and another to calculate the step size for probing when collisions occur. After inserting the keys, Nathan Lyon needs to know the position where each key is inserted. Once all IDs are inserted, he must print the final state of the hash table.



Help him implement the task.



FORMULA



Primary hash function: h1(key) = key % TABLE_SIZE

Secondary hash function (step size): h2(key) = 1 + (key % (TABLE_SIZE - 1))

Position calculation using double hashing: position = (h1(key) + i * h2(key)) % TABLE_SIZE

where i is the number of collisions encountered during insertion.

Input format :
The first line contains an integer n, which represents the number of keys to be inserted into the hash table.

The next n lines contain integers key (the IDs to be inserted into the hash table).

Output format :
or each key insertion, the program prints: The key <key> is inserted at position <index>.

After all insertions, the program prints: Final Hash Table: <value1> <value2> ... <valueN>,



where each value is either the key stored at that index or -1 if the position is empty.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 10 (number of keys to be inserted).
The key values are integers.
TABLE_SIZE = 11 (size of the hash table).
Sample test cases :
Input 1 :
5
12 26 33 50 7
Output 1 :
The key 12 is inserted at position 1.
The key 26 is inserted at position 4.
The key 33 is inserted at position 0.
The key 50 is inserted at position 6.
The key 7 is inserted at position 7.
Final Hash Table: 33 12 -1 -1 26 -1 50 7 -1 -1 -1 
Input 2 :
4
5 10 15 20
Output 2 :
The key 5 is inserted at position 5.
The key 10 is inserted at position 10.
The key 15 is inserted at position 4.
The key 20 is inserted at position 9.
Final Hash Table: -1 -1 -1 -1 15 5 -1 -1 -1 20 10




#include <bits/stdc++.h>
using namespace std;

int main() {
    const int TABLE_SIZE = 11;
    vector<int> table(TABLE_SIZE, -1);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int key;
        cin >> key;

        int h1 = ((key % TABLE_SIZE) + TABLE_SIZE) % TABLE_SIZE;
        int h2 = 1 + ((key % (TABLE_SIZE - 1)) + (TABLE_SIZE - 1)) % (TABLE_SIZE - 1);

        int j = 0;
        int index;

        while (true) {
            index = (h1 + j * h2) % TABLE_SIZE;
            if (table[index] == -1) {
                table[index] = key;
                cout << "The key " << key << " is inserted at position " << index << ".\n";
                break;
            }
            j++;
        }
    }

    cout << "Final Hash Table: ";
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << table[i] << " ";
    }

    return 0;
}
