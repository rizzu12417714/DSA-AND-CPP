Question Paragraph
Arjun is working on a program that updates the length of a rectangle based on a given factor. 
The class Rectangle contains two data members, length and width. 
He wants to use a pointer to the data member length and update it using a specified factor.
 Help Arjun implement the functionality using a pointer to the data member to access 
and modify the length of the rectangle.
Input format:
The first line of input consists of two integers: l and w, representing the length and width of the
rectangle respectively.The second line of input consists of an integer factor, which will be used to multiply the length of the rectangle.
 Output format:
The output prints the updated length of the rectangle after applying the factor.
Code constraints:The gi
ven test cases fall under the following constraints.
 Sample Test Cases
Input 12 32O

 output 14
 Input 26 45
 Output 230




 #include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
};

int main() {
    Rectangle rect;
    int factor;

    cin >> rect.length >> rect.width;
    cin >> factor;

    int Rectangle::*ptr = &Rectangle::length;  // pointer to data member 'length'

    rect.*ptr = rect.*ptr * factor;  // update length using pointer to data member

    cout << rect.length;
    return 0;
} 
