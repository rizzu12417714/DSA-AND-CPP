Single File Programming Question
Problem Statement



Mitchell Starc  is implementing a hash table using double hashing for collision resolution. He needs to insert a key into the table and handle collisions using a second hash function. If a collision occurs, double hashing will be used to find the next available position. After inserting the key, Mitchell Starc needs to know the position where the key was placed.



Help him implement the task.



The first hash function is: h1(key) = key % TABLE_SIZE.

The second hash function is: h2(key) = 1 + (key % (TABLE_SIZE - 1)).

The position is calculated as: position = (h1(key) + i * h2(key)) % TABLE_SIZE,

where i is the number of collisions that have occurred.

Input format :
The first line of input consists of an integer key, representing the value to be inserted into the hash table.

Output format :
The output should print: The key <key> is inserted at position <position>.,

where <key> is the key inserted and <position> is the position in the hash table where the key was placed.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

TABLE_SIZE = 7.

The key is an integer.

Sample test cases :
Input 1 :
42
Output 1 :
The key 42 is inserted at position 0.
Input 2 :
59
Output 2 :
The key 59 is inserted at position 3



#include <bits/stdc++.h>
using namespace std;

int main() {
    const int TABLE_SIZE = 7;

    int key;
    cin >> key;

    int h1 = ((key % TABLE_SIZE) + TABLE_SIZE) % TABLE_SIZE;
    int h2 = 1 + ((key % (TABLE_SIZE - 1)) + (TABLE_SIZE - 1)) % (TABLE_SIZE - 1);

    int i = 0;
    int position = (h1 + i * h2) % TABLE_SIZE;

    cout << "The key " << key << " is inserted at position " << position << ".";
    return 0;
}
