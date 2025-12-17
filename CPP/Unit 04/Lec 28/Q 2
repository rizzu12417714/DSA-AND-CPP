Single File Programming Question

Problem Statement

You are developing a system for a furniture store that showcases various types of furniture. 
The store deals with different types of furniture items, including chairs, bookshelves, and general furniture.

Your task is to create a program that manages and displays information 
about different furniture items using multiple inheritance. The program should handle three types
of furniture: Chair, Bookshelf, and General Furniture.

The class relationships are defined as follows:

Furniture (Base Class)

Attributes: price, material

Methods: setInfo(double price, string material), displayInfo()


RecliningFeature

Attribute: isReclining

Method: setReclining(bool isReclining)


ShelvesFeature

Attribute: numShelves

Method: setShelves(int numShelves)


Chair (Derived Class)

Inherits from Furniture and RecliningFeature


Bookshelf (Derived Class)

Inherits from Furniture and ShelvesFeature




---

Input Format

First line: price (double)

Second line: material (string)

Third line: type (char)

'C' for Chair

'T' for General Furniture

'B' for Bookshelf



Additional inputs based on type:

For Chair (C):

Y for Reclining, N for Standard


For Bookshelf (B):

Number of shelves (integer)




---

Output Format

For Chair (C):


Price: [price]
Material: [material]
Chair Type: Reclining/Standard

For General Furniture (T):


Price: [price]
Material: [material]

For Bookshelf (B):


Price: [price]
Material: [material]
Number of Shelves: [numShelves]

For invalid type:


Invalid type!


---

Code Constraints

100.00 ≤ price ≤ 2000.00

material: non-empty string

type ∈ {C, T, B}

1 ≤ numShelves ≤ 7



---

Sample Test Cases

Input 1

250.34
Wood
C
Y

Output 1

Price: 250.34
Material: Wood
Chair Type: Reclining


---

Input 2

120.29
Glass
T

Output 2

Price: 120.29
Material: Glass


---

Input 3

400.09
metal
B
3

Output 3

Price: 400.09
Material: metal
Number of Shelves: 3


---

Input 4

120.98
Wood
N

Output 4

Invalid type!


---

code 





C++ Code (Without Comments)

#include <iostream>
#include <iomanip>
using namespace std;

class Furniture {
protected:
    double price;
    string material;
public:
    void setInfo(double p, string m) {
        price = p;
        material = m;
    }
    void displayInfo() {
        cout << fixed << setprecision(2);
        cout << "Price: " << price << endl;
        cout << "Material: " << material << endl;
    }
};

class RecliningFeature {
protected:
    bool isReclining;
public:
    void setReclining(bool r) {
        isReclining = r;
    }
};

class ShelvesFeature {
protected:
    int numShelves;
public:
    void setShelves(int n) {
        numShelves = n;
    }
};

class Chair : public Furniture, public RecliningFeature {
public:
    void display() {
        displayInfo();
        if (isReclining)
            cout << "Chair Type: Reclining" << endl;
        else
            cout << "Chair Type: Standard" << endl;
    }
};

class Bookshelf : public Furniture, public ShelvesFeature {
public:
    void display() {
        displayInfo();
        cout << "Number of Shelves: " << numShelves << endl;
    }
};

int main() {
    double price;
    string material;
    char type;

    cin >> price;
    cin >> material;
    cin >> type;

    if (type == 'C') {
        char r;
        cin >> r;
        Chair c;
        c.setInfo(price, material);
        c.setReclining(r == 'Y');
        c.display();
    }
    else if (type == 'T') {
        Furniture f;
        f.setInfo(price, material);
        f.displayInfo();
    }
    else if (type == 'B') {
        int n;
        cin >> n;
        Bookshelf b;
        b.setInfo(price, material);
        b.setShelves(n);
        b.display();
    }
    else {
        cout << "Invalid type!";
    }

    return 0;
}
