Single File Programming Question
Problem Statement



Emma, a mathematics enthusiast, frequently assists her friends with permutations and combinations, and to simplify her calculations, she decides to develop a program that dynamically computes these values based on user input.



The program is built around a class named PermutationsAndCombinations, which utilizes a dynamic constructor to allocate memory for the values of n and r. The class includes several key functions: a constructor that initializes n and r through dynamic memory allocation, a factorial(int num) method to compute the factorial of a number recursively, and methods to calculate permutations nPr and combinations nCr.



Permutation (nPr):

Formula: nPr = n! / (n - r)!



Combination (nCr): 

Formula: nCr = n! / (r! * (n - r)!)

Input format :
The input consists of two integers, n, and r separated by a space.

Output format :
The output displays integer with the results in the following format:

Permutations (nPr): <value of permutations>

Combinations (nCr): <value of combinations>



Refer to the sample output for formatting specifications.

Code constraints :
0 ≤ n, r ≤ 10

n ≥ r

Sample test cases :
Input 1 :
5 3
Output 1 :
Permutations (nPr): 60
Combinations (nCr): 10
Input 2 :
4 7
Output 2 :
Invalid input



#include <iostream>
using namespace std;

class PermutationsAndCombinations {
    int *n;
    int *r;

public:
    PermutationsAndCombinations(int nVal, int rVal) {
        n = new int;
        r = new int;
        *n = nVal;
        *r = rVal;
    }

    int factorial(int num) {
        if (num == 0 || num == 1)
            return 1;
        return num * factorial(num - 1);
    }

    int nPr() {
        return factorial(*n) / factorial(*n - *r);
    }

    int nCr() {
        return factorial(*n) / (factorial(*r) * factorial(*n - *r));
    }

    ~PermutationsAndCombinations() {
        delete n;
        delete r;
    }
};

int main() {
    int n, r;
    cin >> n >> r;

    if (n < 0 || r < 0 || n < r) {
        cout << "Invalid input";
        return 0;
    }

    PermutationsAndCombinations obj(n, r);

    cout << "Permutations (nPr): " << obj.nPr() << endl;
    cout << "Combinations (nCr): " << obj.nCr();

    return 0;
      }
