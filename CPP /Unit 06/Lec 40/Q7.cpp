Single File Programming Question
Problem Statement



In a talent show, you have a system that stores the scores given by judges for various performances in an integer vector called "performanceScores." The vector contains distinct elements, where each element represents the score given by a different judge for a specific performance. Now, the talent show organizers want to display the performance scores in reverse order to show the highest-rated performances first.



To achieve this, implement a function named "customReverse" that will reverse the elements of the "performanceScores" vector in place without using any pre-built STL algorithm like "reverse."



Note: This kind of question will be helpful in clearing CTS recruitment.

Input format :
The first line of the input contains an integer n, representing the number of performance scores.

The second line of the input contains n space-separated distinct integers, representing the performance scores given by different judges.

Output format :
The program displays the performance scores in reverse order, separated by spaces.

If the score is negative, print "Invalid input".

Code constraints :
1 <= n <= 1000 

0 <= performance score <= 103

Sample test cases :
Input 1 :
9
1 2 9 9 6 2 2 9 6
Output 1 :
6 9 2 2 6 9 9 2 1 
Input 2 :
-5
Output 2 :
Invalid input



#include <iostream>
#include <vector>
using namespace std;

void customReverse(vector<int>& v) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Invalid input";
        return 0;
    }

    vector<int> performanceScores(n);
    for (int i = 0; i < n; i++) {
        cin >> performanceScores[i];
        if (performanceScores[i] < 0) {
            cout << "Invalid input";
            return 0;
        }
    }

    customReverse(performanceScores);

    for (int i = 0; i < n; i++) {
        cout << performanceScores[i] << " ";
    }

    return 0;
}
