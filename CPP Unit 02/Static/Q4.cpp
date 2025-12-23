Question ParagraphRekha is working on a software that calculates the area and perimeter of circles based on user input. She is using a class Circle to represent the circle, and the radius member variable is used to store the radius of the circle. The method calculate() computes the area and perimeter.Help her to implement the task using the this pointer to refer to the radius member while calculating the area and perimeter.Formulas:Area = π × radius²Perimeter = 2 × π × radiusπ = 3.14Here, radius refers to the radius member of the Circle class using the this pointer.Input format:The input consists of a float r, representing the radius of the circle.Output format:The first line of output prints:
"Area: " followed by the area rounded to two decimal places.The second line of output prints:
"Perimeter: " followed by the perimeter rounded to two decimal places.Sample Test CasesInput 15.0Output 1Area: 78.50
Perimeter: 31.40Input 29.235Output 2Area: 267.80
Perimeter: 58.00




  #include <iostream>
#include <iomanip>
using namespace std;

class Circle {
public:
    float radius;

    void calculate() {
        float area = 3.14 * (this->radius * this->radius);
        float perimeter = 2 * 3.14 * this->radius;

        cout << fixed << setprecision(2);
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter;
    }
};

int main() {
    Circle c;
    cin >> c.radius;
    c.calculate();
    return 0;
}
