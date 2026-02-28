Single File Programming Question
Problem Statement



Elon is developing a text-processing module for a messaging application. Users often input
  messages that contain repeated characters, either consecutively or at different positions, 
  due to typing errors or keyboard glitches.



Write a program that processes the given message and removes all duplicate characters 
  while preserving the order of their first occurrence. The program should use the StringBuilder
  class for efficient string manipulation and must treat uppercase and lowercase characters as distinct.

Input format :
The input consists of a string, representing the message.

Output format :
The output displays a string representing the message without repeated characters.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

The string contains both uppercase and lowercase with at most 50 characters.

characters are case-sensitive.

Sample test cases :
Input 1 :
aabBbaAa
Output 1 :
abBA
Input 2 :
abcd
Output 2 :
abcd




  import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < input.length(); i++) {
            char current = input.charAt(i);

            // Check if character already exists in result
            if (result.indexOf(String.valueOf(current)) == -1) {
                result.append(current);
            }
        }

        System.out.println(result);

        sc.close();
    }
}
