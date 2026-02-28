Single File Programming Question
Problem Statement



A building has multiple elevators, and the task is implementing a simple elevator control system. 



Create a base class Elevator with a virtual function moveToFloor(), and derive classes PassengerElevator and FreightElevator to implement this function. 



The program should display elevator movements, including elevator type, initial floor, and target floors, based on user inputs.

Input format :
The first line of the input consists of an integer N, representing the number of elevators in the building.

For each elevator, input the following three space-separated information:

A character 'P/p' for Passenger and 'F/f' for Freight, representing the Elevator type.
A positive integer represents the initial floor where the elevator is located.
A positive integer represents the target floor to which the elevator should move.
Output format :
For N lines, the output displays the elevator type (Passenger or Freight), the initial floor, and the target floor to which it moves for each elevator in the below format.

"Elevator Type: X, Initial Floor: Y, Target Floor: Z" where

X represents elevator type(Freight or Passenger)
Y represents the initial floor.
Z represents the target floor.


Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ N ≤ 10

1 ≤ initial floor ≤ 10

1 ≤ target floor ≤ 10

Sample test cases :
Input 1 :
2
P 1 5
F 3 10
Output 1 :
Elevator Type: Passenger, Initial Floor: 1, Target Floor: 5
Elevator Type: Freight, Initial Floor: 3, Target Floor: 10
Input 2 :
1
p 3 7
Output 2 :
Elevator Type: Passenger, Initial Floor: 3, Target Floor: 7
Input 3 :
3
F 5 3
P 2 8
f 7 2
Output 3 :
Elevator Type: Freight, Initial Floor: 5, Target Floor: 3
Elevator Type: Passenger, Initial Floor: 2, Target Floor: 8
Elevator Type: Freight, Initial Floor: 7, Target Floor: 2



#include <iostream>
using namespace std;

class Elevator {
protected:
    int initialFloor;
    int targetFloor;
public:
    Elevator(int i, int t) {
        initialFloor = i;
        targetFloor = t;
    }
    virtual void moveToFloor() = 0;
    virtual ~Elevator() {}
};

class PassengerElevator : public Elevator {
public:
    PassengerElevator(int i, int t) : Elevator(i, t) {}
    void moveToFloor() {
        cout << "Elevator Type: Passenger, Initial Floor: "
             << initialFloor << ", Target Floor: " << targetFloor << endl;
    }
};

class FreightElevator : public Elevator {
public:
    FreightElevator(int i, int t) : Elevator(i, t) {}
    void moveToFloor() {
        cout << "Elevator Type: Freight, Initial Floor: "
             << initialFloor << ", Target Floor: " << targetFloor << endl;
    }
};

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char type;
        int init, target;
        cin >> type >> init >> target;

        Elevator* e;
        if (type == 'P' || type == 'p') {
            e = new PassengerElevator(init, target);
        } else {
            e = new FreightElevator(init, target);
        }

        e->moveToFloor();
        delete e;
    }

    return 0;
}
