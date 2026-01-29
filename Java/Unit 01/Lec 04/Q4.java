Single File Programming Question
Problem Statement



Sarah, a software developer, is working on a project to create a program that generates personalized welcome messages for users of a chat application. She wants to design a simple program where users can input their names, and the program will display a welcoming message for them. 



Your task is to help Sarah in the project.

Input format :
The input consists of a string representing the name of the users.

Output format :
The output prints "Welcome, X!" where X is the user input string.

 

Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

0 ≤ length of name ≤ 30

Sample test cases :
Input 1 :
Sarah
Output 1 :
Welcome, Sarah!
Input 2 :
Micheal
Output 2 :
Welcome, Micheal!

Code

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Welcome, " + name + "!");
    }
}
