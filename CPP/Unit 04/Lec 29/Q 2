Problem Statement

Avinash has hired you to develop a student processing system for his university. 
The system is designed such that student details and their marks are stored in separate classes.
Academic marks and sports-related marks are maintained in different classes to ensure modularity.

To generate a final performance report for each student, another class must be created that combines all
these classes and calculates the total score obtained by the student. The design should use virtual base
classes to avoid duplication of student data and to ensure proper inheritance.

The final report should display the student ID, individual academic marks, sports
score, and the total score. If any mark or score is 
invalid, the program should display the appropriate error message.
Student
           (student id)
           /          \
     TestMarks      SportsMarks
 (mark1, mark2)     (PE score)
           \          /
              Result
        (total score display)


---

Input Format

First line: An integer representing the student ID

Second line: A float value representing mark1

Third line: A float value representing mark2

Fourth line: A float value representing the sports score



---

Output Format

First line displays the student ID

Second line displays mark1

Third line displays mark2

Fourth line displays the sports score

Fifth line displays the total score


If any mark or score is outside the valid range, the corresponding error message is 
displayed instead.

All output values except student ID are printed as float values rounded to one decimal place.


---

Code Constraints

0.0 ≤ marks, score ≤ 100.0



---

Sample Test Cases

Input 1

48293
45.7
69.3
70.0

Output 1

ID: 48293
Mark 1: 45.7
Mark 2: 69.3
Score: 70.0
Total score: 185.0


---

Input 2

353335
-1
35.6
22.5

Output 2

Invalid mark 1


---

Input 3

534324
100.0
200.9
53.8

Output 3

Invalid mark 2


---

Input 4

1234
100.0
100.0
200.0

Output 4

Invalid score




Code



#include <iostream>
#include <iomanip>
using namespace std;

class Student {
protected:
    int id;
public:
    Student(int i) {
        id = i;
    }
};

class TestMarks : virtual public Student {
protected:
    float mark1, mark2;
public:
    TestMarks(int i, float m1, float m2) : Student(i) {
        mark1 = m1;
        mark2 = m2;
    }
};

class SportsMarks : virtual public Student {
protected:
    float score;
public:
    SportsMarks(int i, float s) : Student(i) {
        score = s;
    }
};

class Result : public TestMarks, public SportsMarks {
public:
    Result(int i, float m1, float m2, float s)
        : Student(i), TestMarks(i, m1, m2), SportsMarks(i, s) {}

    void display() {
        if (mark1 < 0 || mark1 > 100) {
            cout << "Invalid mark 1";
            return;
        }
        if (mark2 < 0 || mark2 > 100) {
            cout << "Invalid mark 2";
            return;
        }
        if (score < 0 || score > 100) {
            cout << "Invalid score";
            return;
        }

        cout << fixed << setprecision(1);
        cout << "ID: " << id << endl;
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
        cout << "Score: " << score << endl;
        cout << "Total score: " << mark1 + mark2 + score;
    }
};

int main() {
    int id;
    float m1, m2, s;

    cin >> id >> m1 >> m2 >> s;

    Result r(id, m1, m2, s);
    r.display();

    return 0;
}
