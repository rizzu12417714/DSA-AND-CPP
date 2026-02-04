
Single File Programming Question
Problem Statement



Zara and Mike are comparing their savings to decide their next move. If Zara's savings are greater than Mike's, they plan to calculate the difference; otherwise, they'll add both savings together. She wants to write a program to compute the result of this comparison and multiply it by 2, considering operator precedence.



Help them in the programming task.

Input format :
The input consists of two space-separated integers a and b, representing Zara's and Mike's savings.

Output format :
The output prints an integer representing the calculated result.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ a, b ≤ 1000

Sample test cases :
Input 1 :
100 250
Output 1 :
700
Input 2 :
20 15
Output 2 :
10



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int result = (a > b) ? (a - b) * 2 : (a + b) * 2;

        System.out.println(result);
    }
}



