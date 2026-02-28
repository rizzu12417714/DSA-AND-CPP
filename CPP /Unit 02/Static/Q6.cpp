Question ParagraphRekha is working on a matrix sum calculation program for a project. She is using a class Matrix that contains a 2D array to store matrix elements. The matrix has dimensions defined by rows and cols.Help Rekha implement the functionality where the matrix is populated with user input, and the program calculates and outputs the sum of all elements in the matrix.Input format:The first line of input consists of two integers: r and c, representing the number of rows and columns of the matrix respectively.The next r lines contain c space-separated integers, representing the elements of the matrix.Output format:The output prints "Sum: " followed by the sum of all elements in the matrix.Code constraints:1 ≤ r, c ≤ 10The matrix elements will be integers.Sample Test CasesInput 12 2
1 2
3 4Output 1Sum: 10Input 23 3
5 10 15
20 25 30
35 40 45Output 2Sum: 225

 #include <iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int elements[10][10]; // as per constraints (1 ≤ r,c ≤ 10)

    void inputMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> elements[i][j];
            }
        }
    }

    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum += elements[i][j];
            }
        }
        return sum;
    }
};

int main() {
    Matrix m;
    cin >> m.rows >> m.cols;

    m.inputMatrix();

    cout << "Sum: " << m.calculateSum();
    return 0;
} 
