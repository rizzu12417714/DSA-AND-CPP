Single File Programming Question
Problem Statement



Maria, a software developer, is working on a project to perform arithmetic operations on four integers. She wants to create a simple program that takes four integers as input in which all the inputs are either positive or negative integers and calculates the result based on the formula: (a + b - c * d / a) % b. However, she has a specific requirement for the output format.

Input format :
The input consists of four lines:

The first line contains an integer a which can be either a positive or negative integer.
The second line contains an integer b which can be either a positive or negative integer.
The third line contains an integer c which can be either a positive or negative integer.
The fourth line contains an integer d which can be either a positive or negative integer.
Output format :
The output displays the result of the arithmetic operation in the following format: "(a + b - c * d / a) % b = [result]"

Here, [result] should be replaced with the calculated value(integer).



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

The integers a,b,c, and d were either positive or negative integers.

-100 ≤ a, b, c, d ≤ 100

Sample test cases :
Input 1 :
5
2
3
4
Output 1 :
(a + b - c * d / a) % b = 1
Input 2 :
10
7
8
2
Output 2 :
(a + b - c * d / a) % b = 2
Input 3 :
-15
3
9
6
Output 3 :
(a + b - c * d / a) % b = 0




import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();

        int result = (a + b - c * d / a) % b;

        System.out.print("(a + b - c * d / a) % b = " + result);

        sc.close();
    }
}





  
