Single File Programming Question
Problem Statement



Alex is conducting a study on different modes of transportation and their travel times. He has two vehicles: a car and a boat. Using the Vehicle class, he initializes the car with a specific number of wheels and a maximum speed. For the boat, he sets its maximum speed using the same class structure.



To calculate the time it takes for each vehicle to travel a specified distance, Alex uses the virtual function timeToTravel() defined in both the Car and Boat subclasses. He inputs the number of wheels and speed for the car, the speed for the boat, and the distance to travel.



Alex wants to know how long each vehicle will take to reach the destination, allowing him to compare the efficiency of each mode of transport.



Note:

Car Total time = Distance / Speed

Boat Total time = Distance / (Speed x 1.151)

The boat's time calculation should factor in that 1 knot is equivalent to 1.151 kilometers per hour.

Input format :
The first line contains two space-separated double values: the number of wheels for the car and its maximum speed (in km/h).

The second line contains two space-separated double values: the maximum speed of the boat (in km/h) and the distance to travel (in km).

Output format :
The first line displays a double representing the time taken by the car to travel the given distance (formatted to two decimal places).

The second line displays a double representing the time taken by the boat to travel the given distance (formatted to two decimal places).



Refer to the sample output for the formatting specifications.

Code constraints :
1.0 ≤ max speed of car and boat ≤ 100.0

1.0 ≤ distance of car and boat ≤ 1000.0

Sample test cases :
Input 1 :
120.0 60.0
30.2 50.3
Output 1 :
Car 0.50
Boat 1.45
Input 2 :
100.0 90.3
35.3 75.2
Output 2 :
Car 0.90
Boat 1.85




#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle {
public:
    virtual double timeToTravel(double value) = 0;
};

class Car : public Vehicle {
    double wheels;
    double speed;
public:
    Car(double w, double s) {
        wheels = w;
        speed = s;
    }

    double timeToTravel(double) {
        return speed / wheels;
    }
};

class Boat : public Vehicle {
    double speed;
public:
    Boat(double s) {
        speed = s;
    }

    double timeToTravel(double distance) {
        return distance / (speed * 1.151);
    }
};

int main() {
    double wheels, carSpeed;
    cin >> wheels >> carSpeed;

    double boatSpeed, distance;
    cin >> boatSpeed >> distance;

    Car car(wheels, carSpeed);
    Boat boat(boatSpeed);

    cout << fixed << setprecision(2);
    cout << "Car " << car.timeToTravel(0) << endl;
    cout << "Boat " << boat.timeToTravel(distance);

    return 0;
}
