Problem Description (Paragraph)
Harry wants to design a program to compute important vehicle parameters for Emily’s car using object-oriented programming. The program uses multi-level inheritance.
The base class Vehicle stores fuel efficiency and maximum fuel tank capacity.
The derived class Car calculates the maximum range of the car.
The final derived class EmilyCar calculates the payload capacity and fully loaded weight of the car using the values obtained from the previous classes.
Input Format
First line contains a double value representing fuel efficiency.
Second line contains a double value representing maximum fuel tank capacity.
Output Format
First line prints: Maximum Range: X km where X is rounded to two decimal places.
Second line prints: Payload Capacity: Y kg where Y is rounded to two decimal places.
Third line prints: Fully loaded Weight: Z kg where Z is rounded to two decimal places.
Code Constraints
0.01 ≤ fuel efficiency ≤ 100.00
1.00 ≤ maximum capacity ≤ 100.00

Sample Test Case 1
Input
Copy code

10.0
80.0
Output
Copy code

Maximum Range: 800.00 km
Payload Capacity: 64.00 kg
Fully loaded Weight: 864.00 kg
Sample Test Case 2
Input
Copy code

15.0
60.7
Output
Copy code

Maximum Range: 910.50 km
Payload Capacity: 48.56 kg
Fully loaded Weight: 959.06 kg
Sample Test Case 3
Input
Copy code

18.5
55.0
Output
Copy code

Maximum Range: 1017.50 km
Payload Capacity: 44.00 kg
Fully loaded Weight: 1061.50 kg

Code

#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle {
protected:
    double fuelEfficiency;
    double maximumCapacity;

public:
    Vehicle(double efficiency, double capacity) {
        fuelEfficiency = efficiency;
        maximumCapacity = capacity;
    }
};

class Car : public Vehicle {
protected:
    double maxRange; 

public:
    Car(double efficiency, double capacity) : Vehicle(efficiency, capacity) {
        maxRange = fuelEfficiency * maximumCapacity;
    }

    void calculateMaxRange() {
        cout << "Maximum Range: " << fixed << setprecision(2) << maxRange << " km" << endl;
    }
};

class EmilyCar : public Car {
public:
    EmilyCar(double efficiency, double capacity) : Car(efficiency, capacity) {}

    void calculatePayloadCapacity() {
        double payloadFactor = 0.8;
        double payloadCapacity = payloadFactor * maximumCapacity; 
    
        double totalWeight = payloadCapacity + (fuelEfficiency * maximumCapacity); 
        cout << "Payload Capacity: " << fixed << setprecision(2) << payloadCapacity << " kg" << endl;
        cout << "Fully loaded Weight: " << fixed << setprecision(2) << totalWeight << " kg" << endl;
    }
};

int main() {
    double efficiency, capacity;
    cin >> efficiency >> capacity;

    EmilyCar emilysCar(efficiency, capacity);

    emilysCar.calculateMaxRange();
    emilysCar.calculatePayloadCapacity();

    return 0;
}
