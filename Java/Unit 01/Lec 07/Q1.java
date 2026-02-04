Single File Programming Question
Problem Statement



Jones is developing a program that performs complex bitwise operations on three integer values: a, b, and c. The program calculates the result of the expression (a & b | c) ^ (~a & b | c) using the bitwise AND, OR, and NOT operators. 



Help Jones to develop this program.

Input format :
The first line of input consists of an integer representing a.

The second line of input consists of an integer representing b.

The third line of input consists of an integer representing c.

Output format :
The output prints "Result of (a & b | c) ^ (~a & b | c): " followed by an integer representing the result, where a, b, and c are replaced with the actual input values.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

-1000 ≤ a, b, c ≤ 1000

Sample test cases :
Input 1 :
5
3
7
Output 1 :
Result of (5 & 3 | 7) ^ (~5 & 3 | 7): 0
Input 2 :
-1
6
5
Output 2 :
Result of (-1 & 6 | 5) ^ (~-1 & 6 | 5): 2



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        int result = (a & b | c) ^ (~a & b | c);

        System.out.println("Result of (" + a + " & " + b + " | " + c + ") ^ (~" + a + " & " + b + " | " + c + "): " + result);
    }
}






  
