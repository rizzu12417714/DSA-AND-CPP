QUESTION PARAGRAPH (FULL & CLEAN)

Mano recently opened a small grocery store called “Mano’s Mini Mart.”
To streamline billing at his counter, he wants to develop a simple C++ program that helps manage a fixed shopping cart with exactly 3 products per customer.

Each product in the cart has the following details:

1. Product name (a single word with no spaces)


2. Price per unit (a non-negative decimal number)


3. Quantity purchased (a non-negative integer)



For accurate billing, Mano needs the program to:

4. Accept input for 3 products from the customer


5. Calculate the total price for each product (price × quantity)


6. Use pointers to objects to manage and access product details


7. Display each product’s name along with its total price, formatted to two decimal places



This simple cart system will be used repeatedly at the checkout counter.


---

✅ INPUT FORMAT

The input consists of details for exactly 3 products.

For each product:

Line 1 → product name (string without spaces)

Line 2 → product price (double)

Line 3 → product quantity (integer)



---

✅ OUTPUT FORMAT

The output begins with:

Shopping Cart details:

For each product:

Product Name: <name>
Total Price: <price>

Where <price> is price × quantity, rounded to 2 decimal places.


---

✅ CODE CONSTRAINTS

Number of products = 3 (fixed)

1.0 ≤ price ≤ 10000.0

1 ≤ quantity ≤ 100



---

✅ SAMPLE TEST CASES

Input 1

Apple
0.99
5
Orange
1.50
3
Banana
0.50
10

Output 1

Shopping Cart details:
Product Name: Apple
Total Price: 4.95
Product Name: Orange
Total Price: 4.50
Product Name: Banana
Total Price: 5.00


---

Input 2

Grapes
0.75
3
Strawberry
1.80
5
Kiwi
2.30
7

Output 2

Shopping Cart details:
Product Name: Grapes
Total Price: 2.25
Product Name: Strawberry
Total Price: 9.00
Product Name: Kiwi
Total Price: 16.10



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product {
    string name;
    double price;
    int qty;

public:
    void input(string n, double p, int q) {
        name = n;
        price = p;
        qty = q;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Total Price: " << fixed << setprecision(2) << price * qty << endl;
    }
};

int main() {
    Product p1, p2, p3;
    Product* ptr1 = &p1;
    Product* ptr2 = &p2;
    Product* ptr3 = &p3;

    string name1, name2, name3;
    double price1, price2, price3;
    int qty1, qty2, qty3;

    cin >> name1 >> price1 >> qty1;
    cin >> name2 >> price2 >> qty2;
    cin >> name3 >> price3 >> qty3;

    ptr1->input(name1, price1, qty1);
    ptr2->input(name2, price2, qty2);
    ptr3->input(name3, price3, qty3);

    cout << "Shopping Cart details:" << endl;
    ptr1->display();
    ptr2->display();
    ptr3->display();

    return 0;
}



