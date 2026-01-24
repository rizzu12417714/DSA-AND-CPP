Single File Programming Question
Problem Statement



Black Widow is analyzing her mission performance statistics for the Avengers headquarters. She needs to track her mission success rate using the formula: Success Rate = (Completed / Total) × 100. 



To handle different types of mission counts (integers, decimals, etc.), she decides to create a template class called MissionTracker that works with any numeric type. 



Help her to implement the task using class templates.

Input format :
The first line of input consists of an integer completed representing the number of completed missions.

The second line of input consists of an integer total representing the total number of missions.

Output format :
The output prints "Success rate: " followed by the success rate value with two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

0 ≤ completed ≤ 1000

1 ≤ total ≤ 1000

completed ≤ total

Sample test cases :
Input 1 :
5
10
Output 1 :
Success rate: 50.00
Input 2 :
7
7
Output 2 :
Success rate: 100.00



#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class MissionTracker {
    T completed, total;
public:
    MissionTracker(T c, T t) {
        completed = c;
        total = t;
    }

    double calculateSuccessRate() {
        return (static_cast<double>(completed) / total) * 100;
    }
};

int main() {
    int completed, total;
    cin >> completed;
    cin >> total;

    MissionTracker<int> mission(completed, total);

    cout << fixed << setprecision(2);
    cout << "Success rate: " << mission.calculateSuccessRate();

    return 0;
}
