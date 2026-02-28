Single File Programming Question
Problem Statement



Meet Jancy, a diligent student learning to master programming. She is working on a
  project that requires her to process text data. Today, she needs to convert a given string to lowercase to
  ensure consistent and uniform text.



Write a program that takes an input string and converts it to lowercase to help out Jancy. 

Input format :
The input consists of a single line of string.

Output format :
The output prints a string representing the input string converted to all lowercase letters.



Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

The input string will consist of at most 1000 characters.

The string may contain letters (uppercase and lowercase), digits and special symbols.

Sample test cases :
Input 1 :
HeLLo WoRLd!
Output 1 :
hello world!
Input 2 :
It's a BeAutiful DAY
Output 2 :
it's a beautiful day




  import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        // Read full line input
        String input = sc.nextLine();
        
        // Convert to lowercase
        String result = input.toLowerCase();
        
        // Print result
        System.out.println(result);
        
        sc.close();
    }
}
