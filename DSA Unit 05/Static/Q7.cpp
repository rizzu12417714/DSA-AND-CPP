Single File Programming Question
Problem Statement



Priya is developing a simple student management system. She wants to store roll numbers in a hash table using Linear Probing, and later search for specific roll numbers to check if they exist.



Implement a hash table using linear probing with the following operations:

Insert all roll numbers into the hash table.
For a list of query roll numbers, print "Value x: Found" or "Value x: Not Found" depending on whether it exists in the table.
Input format :
The first line of input contains two integers, n and table_size representing the number of roll numbers to insert and the size of the hash table.

The second line of input contains n space-separated integers representing the roll numbers to insert.

The third line of input contains an integer q representing the number of queries.

The fourth line of input contains q space-separated integers representing the roll numbers to search for.

Output format :
The output print q lines - for each query value x, print: "Value x: Found" or "Value x: Not Found"



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ table_size

1 ≤ table_size ≤ 100

1 ≤ roll_number ≤ 1000

1 ≤ q ≤ 20

Sample test cases :
Input 1 :
5 10
21 31 41 51 61
3
31 60 51
Output 1 :
Value 31: Found
Value 60: Not Found
Value 51: Found
Input 2 :
4 7
10 20 30 40
2
10 70
Output 2 :
Value 10: Found
Value 70: Not Found



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, table_size;
    cin >> n >> table_size;
    
    vector<int> hashTable(table_size, -1);
    
    for (int i = 0; i < n; i++) {
        int roll;
        cin >> roll;
        int index = roll % table_size;
        
        while (hashTable[index] != -1) {
            index = (index + 1) % table_size;
        }
        hashTable[index] = roll;
    }
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        int index = query % table_size;
        bool found = false;
        
        int start = index;
        do {
            if (hashTable[index] == query) {
                found = true;
                break;
            }
            if (hashTable[index] == -1) {
                break;
            }
            index = (index + 1) % table_size;
        } while (index != start);
        
        if (found) {
            cout << "Value " << query << ": Found" << endl;
        } else {
            cout << "Value " << query << ": Not Found" << endl;
        }
    }
    
    return 0;
}
