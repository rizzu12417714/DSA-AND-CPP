QUESTION PARAGRAPH (FULL & CORRECT)

You are tasked with creating a program to manage the coordinates of two points in a two-dimensional space.
Each point is represented by its x and y coordinates.
The program should allow the user to input the coordinates for both points and then display the coordinates of these two points.
Use the this pointer to accomplish the given task.


---

✅ INPUT FORMAT

The first line of input contains the x and y coordinates of point A separated by space.

The second line of input contains the x and y coordinates of point B separated by space.



---

✅ OUTPUT FORMAT

The first line prints:

Coordinates:

The next line prints point A in the format:

(x, y) = (<value>, <value>)

The next line prints point B in the format:

(x, y) = (<value>, <value>)

(Exactly same formatting as sample output.)


---

✅ CODE CONSTRAINTS

Coordinates range:
−10^5 ≤ x, y ≤ 10^5



---

✅ SAMPLE TEST CASES

Input 1

3 4
5 6

Output 1

Coordinates:
(x, y) = (3, 4)
(x, y) = (5, 6)


---

Input 2

-6 7
3 -8

Output 2

Coordinates:
(x, y) = (-6, 7)
(x, y) = (3, -8)



#include <iostream>
using namespace std;

class Coordinate {
    int x, y;

public:
    void setCoordinate(int a, int b) {
        this->x = a;
        this->y = b;
    }

    void printCoordinate() {
        cout << "(x, y) = (" << this->x << ", " << this->y << ")" << endl;
    }
};

int main() {
    Coordinate pointA, pointB;
    int x, y;

    cin >> x >> y;
    pointA.setCoordinate(x, y);

    cin >> x >> y;
    pointB.setCoordinate(x, y);

    cout << "Coordinates:\n";
    pointA.printCoordinate();
    pointB.printCoordinate();

    return 0;
}






