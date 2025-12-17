Question Paragraph

A teacher implements a program to manage the coordinates of a point in a 2D plane. The program defines a class named Coordinates that stores the X and Y values of a point. To update the position, the unary increment operator (++) is overloaded so that applying it increases both X and Y coordinates by 1 unit.

The program takes user input for the initial coordinates, applies the increment operator, and displays the updated coordinates.


---

Input Format

Two space-separated integers representing X and Y coordinates.



---

Output Format

After applying the increment operation, display the updated coordinates separated by a space.



---

Constraints

1 ≤ X, Y ≤ 100



---

Sample Test Case

Input

10 9

Output

11 10



Code 



#include <iostream>
using namespace std;

class Coordinates {
    int x, y;
public:
    Coordinates(int a, int b) {
        x = a;
        y = b;
    }

    void operator++() {
        x++;
        y++;
    }

    void display() {
        cout << x << " " << y;
    }
};

int main() {
    int x, y;
    cin >> x >> y;
    Coordinates c(x, y);
    ++c;
    c.display();
    return 0;
}
