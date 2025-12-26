#include <bits/stdc++.h>
using namespace std;

int main() {
    const int TABLE_SIZE = 7;
    vector<int> table(TABLE_SIZE, -1);

    int n;
    cin >> n;

    int hashValue = n % TABLE_SIZE;
    int i = 0;

    while (i < TABLE_SIZE) {
        int index = (hashValue + i * i) % TABLE_SIZE;
        if (table[index] == -1) {
            table[index] = n;
            break;
        }
        i++;
    }

    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << table[i] << " ";
    }

    return 0;
}
