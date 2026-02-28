Question ParagraphYou are tasked with creating a program using class OnlineShop for an online shop to calculate the total number of items purchased for a single product.
The program should take the product name and the number of items purchased by three persons and then calculate and display the
total number of items for that product using member functions
Input format:
The first line of input consists of a string representing the product name.
The second line consists of three integers [ a, b, c ] representing the number of items purchased by three different persons.
Output format:
The first line of output prints "Product Name: " followed by the string representing the product name.The second
line of output prints "Total items: " followed by an integer representing the sum of the total number of
items purchased for the product.Sample Test CasesInput 1:Phone
2 5 4Output 1:Product Name: Phone
Total items: 11Input 2:Shirt
278 499 790Output 2:Product Name: Shirt
Total items: 1567


#include <iostream>
#include <string>
using namespace std;

class OnlineShop {
public:
    int total;
    void initialize() {
        total = 0;
    }
    void calculateTotalItems(int items) {
        total += items;
    }
    int getTotalItems() {
        return total;
    }
};

int main() {
    OnlineShop shop;
    string productName;
    int itemsPurchased;
    getline(cin, productName);
    shop.initialize();
    for (int i = 0; i < 3; i++) {
        cin >> itemsPurchased;
        shop.calculateTotalItems(itemsPurchased);
    }
    int totalItems = shop.getTotalItems();
    cout << "Product Name: " << productName << endl << "Total items: " << totalItems;
    return 0;
}
