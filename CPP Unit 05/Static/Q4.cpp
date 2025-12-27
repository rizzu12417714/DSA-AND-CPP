Single File Programming Question
Problem Statement:



In a school competition, each Student object can have a friend (another Student object). The teacher wants to analyze pairs of friends by comparing their marks. Create a Student class that can point to another Student object (friend). 



For each student pair, calculate the absolute difference between their marks and determine who scored higher. If a student has no friend, simply indicate that condition.

Input format :
The first line of input consists of an integer representing the marks of student 1.

The second line consists of an integer (0 or 1) indicating whether student 1 has a friend (0 for no, 1 for yes).

If the second line is 1, the third line consists of an integer representing the marks of student 2.

Output format :
If the student has a friend:

The first line prints "Difference: " followed by the absolute difference between their marks
The second line prints "Student 1 higher", "Student 2 higher", or "Both equal" based on comparison
If the student has no friends:

The first line prints "No friend"


Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

Marks range from 0 to 100

The friend indicator is either 0 or 1

All inputs are valid integers

Sample test cases :
Input 1 :
60
1
40
Output 1 :
Difference: 20
Student 1 higher
Input 2 :
30
1
70
Output 2 :
Difference: 40
Student 2 higher
Input 3 :
45
1
45
Output 3 :
Difference: 0
Both equal
Input 4 :
100
0
100
Output 4 :
No friend


#include <iostream>
#include <cmath>
using namespace std;

class Student {
public:
    int marks;
    Student* frnd;

    Student(int m) {
        marks = m;
        frnd = nullptr;
    }
};

int main() {
    int m1;
    cin >> m1;

    int hasFriend;
    cin >> hasFriend;

    Student s1(m1);

    if (hasFriend == 0) {
        cout << "No friend";
        return 0;
    }

    int m2;
    cin >> m2;

    Student s2(m2);
    s1.frnd = &s2;

    int diff = abs(s1.marks - s1.frnd->marks);
    cout << "Difference: " << diff << endl;

    if (s1.marks > s1.frnd->marks) {
        cout << "Student 1 higher";
    } else if (s1.marks < s1.frnd->marks) {
        cout << "Student 2 higher";
    } else {
        cout << "Both equal";
    }

    return 0;
}
