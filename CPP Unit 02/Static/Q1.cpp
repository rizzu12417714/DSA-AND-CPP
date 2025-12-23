Question ParagraphA statistician collected data on the heights of students in a class and wanted to visualize the distribution using a histogram. The data consists of the heights of a maximum of 20 students, with each height value ranging from 1 to 10 (inclusive).He decides to use a program to generate the histogram, using pointers.Function Specifications:
void printHistogram(int *, int)Input format:The first line of input consists of the number of histogram bars (maximum 20).The second line consists of the heights of students (values between 1 and 10), separated by space.Output format:If the input is valid, the program should output the histogram, with each row representing the given input value, using the 'x' format.If the input is invalid (i.e., not within the valid range), the program should output "Invalid".Sample Test CasesInput 15
1 4 5 3 2Output 1x
xxxx
xxxxx
xxx
xxInput 24
3 4 9 10Output 2xxx
xxxx
xxxxxxxxx
xxxxxxxxxxInput 30Output 3InvalidInput 421Output 4Invalid



#include <iostream>
using namespace std;

void printHistogram(int *ptr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < *(ptr + i); j++) {
            cout << "x";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    // Check range of number of bars
    if (n < 1 || n > 20) {
        cout << "Invalid";
        return 0;
    }

    int heights[20];
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Validate height range
    for (int i = 0; i < n; i++) {
        if (heights[i] < 1 || heights[i] > 10) {
            cout << "Invalid";
            return 0;
        }
    }

    // Call function
    printHistogram(heights, n);

    return 0;
}
