Single File Programming Question
Problem statement



Garner is a budding programmer who enjoys solving coding challenges. His current task is to
  count the number of vowels and consonants in a given string.



Create a program to count the number of vowels and consonants in the string provided by the 
  user, using the StringBuilder class for efficient string manipulation.

Input format :
The input consists of a string representing the text provided by the user.

Output format :
The first line of output prints "Number of vowels: " followed by an integer representing the number of vowels found in the input string.

The second line of output prints "Number of consonants: " followed by an integer representing the number of consonants found in the input string.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ Length of the input string ≤ 150 characters

The strings are case-sensitive ('A' and 'a' aren't same)

The input string can contain any printable characters.

Sample test cases :
Input 1 :
Hey programming is fun
Output 1 :
Number of vowels: 6
Number of consonants: 13
Input 2 :
Pride and Prejudice is written by Jane Austen. 
Output 2 :
Number of vowels: 15
Number of consonants: 23


  import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        StringBuilder sb = new StringBuilder(input);

        int vowels = 0;
        int consonants = 0;

        for (int i = 0; i < sb.length(); i++) {
            char ch = sb.charAt(i);

            // Check if character is a letter
            if (Character.isLetter(ch)) {

                // Check for vowels (both uppercase and lowercase)
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        System.out.println("Number of vowels: " + vowels);
        System.out.println("Number of consonants: " + consonants);

        sc.close();
    }
}
