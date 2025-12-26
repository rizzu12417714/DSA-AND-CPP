Single File Programming Question
Problem Statement



Rohit is analyzing performance scores and needs to find the top K highest scores from a list. He decides to use Heap Sort to arrange the scores efficiently and extract the best performers. 



Help him retrieve the top K scores in descending order.

Input format :
The first line contains an integer n, representing the number of scores.

The second line contains n space-separated integers, representing the scores.

The third line contains an integer k, representing how many top scores to display.

Output format :
The output prints the top k highest scores, separated by spaces.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 100

1 ≤ k ≤ n

1 ≤ score ≤ 105

Sample test cases :
Input 1 :
5
9 1 4 7 3
2
Output 1 :
9 7 
Input 2 :
6
20 15 30 5 10 25
4
Output 2 :
30 25 20 15 

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;

    sort(a, a + n, greater<int>());

    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
