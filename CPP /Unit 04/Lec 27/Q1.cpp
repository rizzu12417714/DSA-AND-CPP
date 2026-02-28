Problem Statement

Nandhini is tasked with creating a program to calculate and display 
the speed of a car based on the distance covered and the time taken. 
Write a program using two classes, where Vehicle is the base class and Car
is the derived class. The base class is responsible for fetching the input values as
floating-point numbers, while the derived class calculates the speed and displays the result.
The speed should be calculated in kilometres per hour and printed with two decimal places.


---

Input Format

The input consists of two double values separated by a space:

Distance travelled by the car

Time taken to cover that distance



---

Output Format

The output displays a double value showing the speed of the car in kilometres per hour,
rounded off to two decimal places, in the format:

Speed of car: <value>


---

Code Constraints

1.0 ≤ distance ≤ 10000.00

time > 0



---

Sample Test Cases

Input 1

15.0 5.0

Output 1

Speed of car: 3.00


---

Input 2

100.23 96.0

Output 2

Speed of car: 1.04


Code 


#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle {
public:
    double dist, tim;
    void fetchData() {
        cin >> dist >> tim;
    }
};

class Car : public Vehicle {
    double spd;
public:
    void calc() {
        spd = dist / tim;
    }
    void display() {
        cout << fixed << setprecision(2);
        cout << "Speed of car: " << spd;
    }
};

int main() {
    Car c;
    c.fetchData();
    c.calc();
    c.display();
    return 0;
}
