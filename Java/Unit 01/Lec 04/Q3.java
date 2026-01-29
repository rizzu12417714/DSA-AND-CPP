Single File Programming Question
Problem Statement



Sam, the esteemed captain of his sports team, desires to write a program that displays the name of his team. The program should prompt Sam for the team’s name and subsequently present it in a refined manner.



Can you assist Sam in this task?

Input format :
The input consists of a string, which can include letters, numbers, spaces and special characters.

Output format :
The output prints "Sam's team name is: " followed by the team name.



Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

The length of the team's name should be between 1 and 100 characters.

Sample test cases :
Input 1 :
Tigers
Output 1 :
Sam's team name is: Tigers
Input 2 :
The Winners 2024!
Output 2 :
Sam's team name is: The Winners 2024!


Code



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String teamName = sc.nextLine();
        System.out.println("Sam's team name is: " + teamName);
    }
}
