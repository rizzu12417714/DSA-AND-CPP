Single File Programming Question

Problem Statement

Your university wants you to create a management system that stores employee data in a
hierarchical structure.
You are required to design and implement the necessary classes based on the following hierarchy:

Staff is the base class that stores the employee code and employee name.

Teacher, Management, and Admin are derived classes of Staff.

An additional class Education stores the educational qualification and is associated only with Teacher and Management.


The system must be menu-driven, allowing the user to choose the type of employee and enter the corresponding details.
After storing the data, the program should display the employee information in a formatted manner.

Once the data is displayed, the program must print
"Staff being deleted..."
from the destructor of the Staff class.


---

Class Details

Staff

Employee code (string)

Employee name (string)


Teacher

Subject (string)

Educational qualification (integer)


Management

Management grade (integer)

Educational qualification (integer)


Admin

Department (string)


Education

Qualification (integer)




---

Input Format

The input consists of an integer choice, followed by data related to the selected employee type.

Choice Options

1 → Teacher

2 → Management

3 → Admin



---

For Teacher (choice = 1)

1. Employee code (string)


2. Employee name (string)


3. Educational qualification (integer)

1 → Undergraduate

2 → Graduate

3 → Masters Degree

4 → PhD



4. Subject (string)




---

For Management (choice = 2)

1. Employee code (string)


2. Employee name (string)


3. Educational qualification (integer)


4. Management grade (integer)




---

For Admin (choice = 3)

1. Employee code (string)


2. Employee name (string)


3. Department (string)




---

Output Format

The first line displays the employee type.

The next lines display the employee information entered by the user.

After displaying the information, the message

Staff being deleted...

is printed from the destructor.


Refer to the sample output for exact formatting.


---

Code Constraints

Educational qualification must be between 1 and 4

Choice must be between 1 and 3

Employee code, name, subject, and department have a maximum length of 20 characters



---

Sample Test Cases

Sample Input 1

1
ABC3343
HarryPotter
2
Wizardry

Sample Output 1

TEACHER
The given information:
Employee code: ABC3343
Employee name: HarryPotter
Educational Qualification: Graduate
Subject: Wizardry
Staff being deleted...
Staff being deleted...
Staff being deleted...


---

Sample Input 2

2
KLD34
RonWeasley
3
4

Sample Output 2

MANAGEMENT
The given information:
Employee code: KLD34
Employee name: RonWeasley
Educational Qualification: Masters Degree
Management Grade: 4
Staff being deleted...
Staff being deleted...
Staff being deleted...


---

Sample Input 3

3
CMS34343
Hermione
Compsci

Sample Output 3

ADMIN
The given information:
Employee code: CMS34343
Employee name: Hermione
Department: Compsci
Staff being deleted...
Staff being deleted...
Staff being deleted...


---

Sample Input 4

4

Sample Output 4

Invalid choice
Staff being deleted...
Staff being deleted...
Staff being deleted...




code 



#include <iostream>
#include <string>
using namespace std;

class Education {
protected:
    int qualification;
public:
    void getQualification() {
        cin >> qualification;
        while (qualification < 1 || qualification > 4) {
            cout << "Invalid Educational Qualification\n";
            cout << "Qualification. Try one more\n";
            cin >> qualification;
        }
    }
    string showQualification() {
        if (qualification == 1) return "Undergraduate";
        if (qualification == 2) return "Graduate";
        if (qualification == 3) return "Masters Degree";
        return "PhD";
    }
};

class Staff {
protected:
    string code, name;
public:
    void getStaff() {
        cin >> code >> name;
    }
    void showStaff() {
        cout << "Employee code: " << code << endl;
        cout << "Employee name: " << name << endl;
    }
    ~Staff() {
        cout << "Staff being deleted...\n";
    }
};

class Teacher : public Staff, public Education {
    string subject;
public:
    void getdata() {
        getStaff();
        getQualification();
        cin >> subject;
    }
    void showdata() {
        showStaff();
        cout << "Educational Qualification: " << showQualification() << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Management : public Staff, public Education {
    int grade;
public:
    void getdata() {
        getStaff();
        getQualification();
        cin >> grade;
    }
    void showdata() {
        showStaff();
        cout << "Educational Qualification: " << showQualification() << endl;
        cout << "Management Grade: " << grade << endl;
    }
};

class Admin : public Staff {
    string department;
public:
    void getdata() {
        getStaff();
        cin >> department;
    }
    void showdata() {
        showStaff();
        cout << "Department: " << department << endl;
    }
};

int main() {
    int choice;
    cin >> choice;

    Teacher teacher;
    Management mgmt;
    Admin admin;

    if (choice == 1) {
        cout << "TEACHER\n";
        teacher.getdata();
        cout << "The given information:\n";
        teacher.showdata();
    }
    else if (choice == 2) {
        cout << "MANAGEMENT\n";
        mgmt.getdata();
        cout << "The given information:\n";
        mgmt.showdata();
    }
    else if (choice == 3) {
        cout << "ADMIN\n";
        admin.getdata();
        cout << "The given information:\n";
        admin.showdata();
    }
    else {
        cout << "Invalid choice\n";
    }
    return 0;
}
