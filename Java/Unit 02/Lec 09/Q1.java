Single File Programming Question
Problem Statement



Arun is a mathematics enthusiast who enjoys solving unique mathematical puzzles. Recently, he came across a 
  problem that involves counting even digits in an integer and checking if the count itself is a divisor of the original number. 



Your task is to create a program for Arun that counts the even digits in an integer and checks for divisibility using a 'while' loop. 

Input format :
The input consists of a single integer N.

Output format :
If there are no even digits in N, print "There are no even digits in the number."

If the even digit count is a divisor of N, then print "It is a divisor of the original number."

If not, then print "It is not a divisor of the original number."


Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

1 ≤ N ≤ 109

Sample test cases :
Input 1 :
20
Output 1 :
It is a divisor of the original number.
Input 2 :
33
Output 2 :
There are no even digits in the number.
Input 3 :
5445
Output 3 :
It is not a divisor of the original number.
Whitelist
Set 1:
while
write java code


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long N = sc.nextLong();
        sc.close();

        int evenCount = 0;
        long temp = Math.abs(N);

        if (temp == 0) {
            evenCount = 1;
        } else {
            while (temp > 0) {
                int digit = (int)(temp % 10);
                if (digit % 2 == 0) {
                    evenCount++;
                }
                temp /= 10;
            }
        }

        if (evenCount == 0) {
            System.out.println("There are no even digits in the number.");
        } else if (N % evenCount == 0) {
            System.out.println("It is a divisor of the original number.");
        } else {
            System.out.println("It is not a divisor of the original number.");
        }
    }
}
