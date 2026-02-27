Single File Programming Question
Problem Statement



In a coding competition, you are tasked with a unique problem. You need to write a program that calculates 
  the sum of the squares of the odd digits in a given integer. 

Input format :
The input consists of a single integer N, representing the number whose odd digits will be squared and summed.

Output format :
The output prints an integer, representing the sum of the squares of the odd digits in the given integer.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ N ≤ 106

Sample test cases :
Input 1 :
12345
Output 1 :
35
Input 2 :
2085
Output 2 :
25
Input 3 :
2468
Output 3 :
0

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long N = sc.nextLong();
        sc.close();

        long sumSquares = 0;
        long temp = Math.abs(N);

        // Process digits and accumulate squares of odd digits
        if (temp == 0) {
            // If N could be 0 (not in constraints), 0 is even, so sum is 0
            sumSquares = 0;
        } else {
            while (temp > 0) {
                int digit = (int)(temp % 10);
                if (digit % 2 != 0) { // digit is odd
                    sumSquares += (long)digit * digit;
                }
                temp /= 10;
            }
        }

        System.out.println(sumSquares);
    }
}
