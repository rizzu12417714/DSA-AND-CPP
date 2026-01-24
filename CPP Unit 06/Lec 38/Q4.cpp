Single File Programming Question
Problem Statement



Help Julie to write a program to handle array operations gracefully using exception handling. The program takes an integer as input, representing the size of an array, and prints the same in the output.



-If the input is a non-positive number, it should display "Exception caught. Array size should be a positive number." and terminate gracefully.

-If the input is zero, it should display "Exception caught. Array is empty." and terminate gracefully.

-If the input is positive, the program dynamically allocates memory for the array, takes integer elements as input, and prints them separated by spaces.

-If any runtime error occurs during array processing, it should catch and display the exception message as "Exception caught. <error_message>". Ensure proper memory deallocation to avoid memory leaks.



Note: This kind of question will be helpful in clearing CTS recruitment.

Input format :
The first line of input consists of the size of the array, n.

The second line of input consists of n space-separated elements.

Output format :
The output displays the array of elements separated by a space.

If the size is either zero or a negative integer, the output displays the appropriate error message.



Refer to the sample outputs for the formatting specifications.

Code constraints :
Array size <= 105

Sample test cases :
Input 1 :
7
3 -36 15 35 -6 42 8
Output 1 :
3 -36 15 35 -6 42 8 
Input 2 :
0
Output 2 :
Exception caught. Array is empty.
Input 3 :
-5
Output 3 :
Exception caught. Array size should be a positive number.



#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = nullptr;

    try {
        if (n < 0) {
            throw invalid_argument("Array size should be a positive number.");
        }
        if (n == 0) {
            throw runtime_error("Array is empty.");
        }

        arr = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        delete[] arr;
    }
    catch (invalid_argument& e) {
        cout << "Exception caught. " << e.what();
    }
    catch (runtime_error& e) {
        cout << "Exception caught. " << e.what();
    }
    catch (...) {
        cout << "Exception caught. Unknown error.";
    }

    return 0;
}
