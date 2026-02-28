Question ParagraphAkil is a sales manager who wants to evaluate the performance of his sales team.
He wants to create a program that allows him to enter the details of a salesperson, including their 
name and the total sales achieved over a specific number of months. Calculate the average sales per month
and display the salesperson’s information using a pointer to the data member�.Input format:The first line of input consists of the salesperson's name as a string.The second line of input consists of the number of months n as an integer.The third line of input consists of n space separated integers representing the sales achieved for each month.Output format:The first line of output consists of the details of the salesperson as: “Salesperson Details:”The second line of output prints: “Name: ” followed by a string representing the salesperson's name.The third line of output prints “Total Sales: ” followed by an integer representing the total sales.The last line of output prints “Average Sales: ” followed by an integer representing the average sales (integer division).Sample Test CaseInput 1:John
5
1000 2000 1500 3000 2500Output 1:Salesperson Details:
Name: John
Total Sales: 10000
Average Sales: 2000Input 2:Emily
3
500 750 900Output 2:Salesperson Details:
Name: Emily
Total Sales: 2150
Average Sales: 716
#include <iostream>
#include <string>
using namespace std;

class SalesPerson {
public:
    string name;
    int n;
    int sales[10];

    void input() {
        cin >> name >> n;
        for(int i = 0; i < n; i++)
            cin >> sales[i];
    }

    void display() {
        int total = 0;
        for(int i = 0; i < n; i++)
            total += sales[i];
        cout << "Salesperson Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Sales: " << total << endl;
        cout << "Average Sales: " << total/n << endl;
    }
};

int main() {
    SalesPerson sp, *ptr;
    ptr = &sp;
    ptr->input();
    ptr->display();
    return 0;
}



