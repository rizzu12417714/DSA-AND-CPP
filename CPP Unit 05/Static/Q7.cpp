Single File Programming Question
Problem Statement:



Rahul is a class teacher who needs to analyze the performance of his students in the final exam. He wants to calculate the class average and find out how many students have passed the exam (scoring 40 marks or more). Since the number of students varies each year, he needs a flexible solution using dynamic memory allocation. 



Help him to implement the task using new and delete operators for arrays.

Input format :
The first line of input consists of an integer students representing the total number of students in the class.

The second line consists of students integers separated by spaces representing the final exam marks of each student.

Output format :
The first line of output prints "Average: " followed by the average marks of the class with two decimal places.

The second line of output prints "Passed: " followed by the count of students who scored 40 marks or more.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

The class has between 1 and 100 students

Each student's marks range from 0 to 100

All inputs are valid integers

Sample test cases :
Input 1 :
2
30 70
Output 1 :
Average: 50.00
Passed: 1
Input 2 :
3
39 40 41
Output 2 :
Average: 40.00
Passed: 2
image
Whitelist
Set 1:
new
delete




#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int students;
    cin >> students;

    int* marks = new int[students];
    for (int i = 0; i < students; i++) {
        cin >> marks[i];
    }

    int sum = 0;
    int passed = 0;

    for (int i = 0; i < students; i++) {
        sum += marks[i];
        if (marks[i] >= 40) {
            passed++;
        }
    }

    double average = (double)sum / students;

    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Passed: " << passed;

    delete[] marks;
    return 0;
}
