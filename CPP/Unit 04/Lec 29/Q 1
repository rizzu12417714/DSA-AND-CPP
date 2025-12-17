Single File Programming Question

Problem Statement

In this scenario, a program is developed to manage a vehicle fleet for a car rental company. 
The fleet consists of cars and bicycles, each having specific attributes such as brand. 
Cars have an additional attribute representing the number of doors, while bicycles have an attribute representing the number of gears.

To maintain a clean and structured design, a virtual base class named Vehicle is used. 
The derived classes Car and Bicycle inherit from the Vehicle class and store their respective details. The program captures
the required input details and displays the complete information of both the car and bicycle.


---

Input Format

First line: A string representing the car brand

Second line: An integer representing the number of doors in the car

Third line: A string representing the bicycle brand

Fourth line: An integer representing the number of gears in the bicycle



---

Output Format

First line displays the car brand

Second line displays the number of doors in the car

Third line displays the bicycle brand

Fourth line displays the number of gears in the bicycle



---

Code Constraints

Length of brand string ≤ 20

1 ≤ number of doors ≤ 10

1 ≤ number of gears ≤ 10



---

Sample Test Cases

Input 1

Toyota
5
Yamaha
6

Output 1

Brand: Toyota
Number of Doors: 5
Brand: Yamaha
Number of Gears: 6


---

Input 2

Hyundai
4
Bajaj
4

Output 2

Brand: Hyundai
Number of Doors: 4
Brand: Bajaj
Number of Gears: 4




Code



#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
    int doors;
public:
    Car(string b, int d) : Vehicle(b) {
        doors = d;
    }
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

class Bicycle : public Vehicle {
    int gears;
public:
    Bicycle(string b, int g) : Vehicle(b) {
        gears = g;
    }
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Number of Gears: " << gears << endl;
    }
};

int main() {
    string carBrand, bicycleBrand;
    int carDoors, bicycleGears;

    cin >> carBrand;
    cin >> carDoors;
    cin >> bicycleBrand;
    cin >> bicycleGears;

    Car myCar(carBrand, carDoors);
    Bicycle myBicycle(bicycleBrand, bicycleGears);

    myCar.displayInfo();
    cout << endl;
    myBicycle.displayInfo();

    return 0;
}
