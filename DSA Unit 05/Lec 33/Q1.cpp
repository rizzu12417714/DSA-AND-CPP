Single File Programming Question
Problem Statement



Ben,a software developer, is working on a hash table implementation using linear probing for collision resolution. He needs to insert several keys into the hash table, display the final state of the hash table, and check if the 3rd position is empty or contains a value. If the position is empty, the program should print that it's empty; otherwise, it should print the value stored at that position.



Help him to implement the task.



FORMULA:

Primary hash function: hash(key) = key % TABLE_SIZE

Linear probing formula: index = (index + 1) % TABLE_SIZE

Input format :
The first line of input consists of integer numKeys, representing the number of keys to be inserted into the hash table.

The next numKeys lines each contain an integer key, representing the keys to be inserted into the hash table.

Output format :
The first line of output prints: Hash Table: <state_of_the_table>"

"The second line of output prints: Position 3 is Empty" or "Value at position 3: <value>



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

≤ numKeys ≤ 6

-10^6 ≤ key ≤ 10^6

The size of the hash table is fixed at 6.

Sample test cases :
Input 1 :
5
12 18 24 30 36
Output 1 :
Hash Table: [12] [18] [24] [30] [36] [ ] 
Value at position 3: 30
Input 2 :
4
5 10 15 20
Output 2 :
Hash Table: [ ] [ ] [20] [15] [10] [5] 
Value at position 3: 15
Input 3 :
4
10 20 30 40
Output 3 :
Hash Table: [30] [ ] [20] [ ] [10] [40] 
Position 3 is Empty


#include <bits/stdc++.h>
using namespace std;

int main() {
    int numKeys;
    cin >> numKeys;

    const int TABLE_SIZE = 6;
    vector<long long> table(TABLE_SIZE, LLONG_MIN);

    for (int i = 0; i < numKeys; i++) {
        long long key;
        cin >> key;

        int index = ((key % TABLE_SIZE) + TABLE_SIZE) % TABLE_SIZE;

        while (table[index] != LLONG_MIN) {
            index = (index + 1) % TABLE_SIZE;
        }
        table[index] = key;
    }

    cout << "Hash Table: ";
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] == LLONG_MIN)
            cout << "[ ] ";
        else
            cout << "[" << table[i] << "] ";
    }
    cout << "\n";

    if (table[3] == LLONG_MIN)
        cout << "Position 3 is Empty";
    else
        cout << "Value at position 3: " << table[3];

    return 0;
}
