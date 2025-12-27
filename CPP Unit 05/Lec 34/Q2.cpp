Single File Programming Question
Problem Statement



Akshitha is tasked with developing a program to determine the day of the week based on a given integer input representing a day number (1 to 7). In this scenario, each integer from 1 to 7 corresponds to a specific day of the week, as follows:



1: Sunday

2: Monday

3: Tuesday

4: Wednesday

5: Thursday

6: Friday

7: Saturday



The program should take an integer input from the user representing the day number and output the corresponding day of the week. If the input is not within the range of 1 to 7, the program should print "Invalid."



You need to create a class named Main that handles this functionality. The constructor of the class Main takes an integer argument representing the day number. The class should then determine the day of the week based on the input and print the result to the console.



You should also ensure that the class Main has a virtual destructor to allow for proper cleanup when deleting objects through a base-class pointer.

Input format :
The input is a single integer d, representing the day number.

Output format :
The output displays a string representing the corresponding day of the week. If the input d is within the range of 1 to 7, the program should output the day of the week.

If the input d is outside this range, the program should output "Invalid".



Refer to the sample output for the formatting specification.

Code constraints :
1 ≤ d ≤ 7

Sample test cases :
Input 1 :
7
Output 1 :
Saturday
Input 2 :
0
Output 2 :
Invalid
Input 3 :
9
Output 3 :
Invalid

Whitelist
Set 1:
virtual





#include <iostream>
using namespace std;

class Main {
public:
    Main(int d) {
        if (d == 1) cout << "Sunday";
        else if (d == 2) cout << "Monday";
        else if (d == 3) cout << "Tuesday";
        else if (d == 4) cout << "Wednesday";
        else if (d == 5) cout << "Thursday";
        else if (d == 6) cout << "Friday";
        else if (d == 7) cout << "Saturday";
        else cout << "Invalid";
    }

    virtual ~Main() {}
};

int main() {
    int d;
    cin >> d;
    Main obj(d);
    return 0;
}
