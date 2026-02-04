
Single File Programming Question
Problem Statement



Sandeep is working on a program to showcase the use of unary plus and unary minus operators. The program is intended to receive an integer input from the user, apply the unary plus and unary minus operations, and then print the results.



Your task is to help Sandeep complete this program.

Input format :
The input consists of an integer N.

Output format :
The first line of output prints "Unary Plus: " followed by an integer value, which represents the result of the unary plus operation.

The second line prints "Unary Minus: " followed by an integer value, which represents the result of the unary minus operation.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 100000

Sample test cases :
Input 1 :
12
Output 1 :
Unary Plus: 12
Unary Minus: -12
Input 2 :
629
Output 2 :
Unary Plus: 629
Unary Minus: -629




import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        int plus = +N;
        int minus = -N;

        System.out.println("Unary Plus: " + plus);
        System.out.println("Unary Minus: " + minus);
    }
}




  
