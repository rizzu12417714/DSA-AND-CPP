Single File Programming Question
Problem Statement



Ashwin is tasked with writing a program to calculate the dot product of two vectors of varying data types: integers and double values. The program should prompt the user to enter the size of the vectors (number of elements) and then ask for the elements of both vectors.



After obtaining the input, the program should compute the dot product for both types of vectors and display the results separately. Write a program to accomplish this task.



Note: This kind of question will help in clearing HCL recruitment.

Input format :
The first line of the input represents the number of elements n.

The second line contains n space-separated integers representing the elements of the first vector, v1.

The third line contains n space-separated integers representing the elements of the second vector, v2.

The fourth line contains n space-separated double values representing the elements of the third vector, v3.

The fifth line contains n space-separated double values representing the elements of the fourth vector, v4.

Output format :
The output prints the dot product of an integer and double value vectors in separate lines.



Refer to the sample output for formatting specifications.

Code constraints :
1<=n<=100

Sample test cases :
Input 1 :
3
1 2 3
4 5 6
1.5 2.5 3.5
4.5 5.5 6.5
Output 1 :
Dot product of integer vectors: 32
Dot product of double value vectors: 43.25
Input 2 :
2
2 4
1 3
1.25 2.5
2.5 1.25
Output 2 :
Dot product of integer vectors: 14
Dot product of double value vectors: 6.25



#include <iostream>
using namespace std;

template <class T>
T dotProduct(T a[], T b[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int v1[n], v2[n];
    double v3[n], v4[n];

    for (int i = 0; i < n; i++)
        cin >> v1[i];

    for (int i = 0; i < n; i++)
        cin >> v2[i];

    for (int i = 0; i < n; i++)
        cin >> v3[i];

    for (int i = 0; i < n; i++)
        cin >> v4[i];

    cout << "Dot product of integer vectors: " << dotProduct(v1, v2, n) << endl;
    cout << "Dot product of double value vectors: " << dotProduct(v3, v4, n);

    return 0;
}
