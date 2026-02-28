Single File Programming Question
Problem Statement:



Elisa, a language processing specialist, is working on a project that requires 
  converting strings to character arrays. To assist her in this task, you are tasked 
  with creating a program that converts a given string to a character array.This program will 
  help Elisa efficiently manipulate and analyze text data by converting it into a more versatile format.

Input format :
The input contains a string representing the string to be converted as a character array.

Output format :
The output prints the characters of the given string in the form of a character array.

Each character is separated by a comma and a space.
The array is enclosed within square brackets [ ].
Spaces in the input string should be preserved and displayed as empty spaces between commas.


Refer to the sample output for format specifications

Code constraints :
The input string should not be empty.

The input string may contain alphanumeric characters (uppercase and lowercase), spaces and special characters.

The input string's length can be up to 105 characters.

Sample test cases :
Input 1 :
Hello
Output 1 :
[H, e, l, l, o]
Input 2 :
The quick brown fox jumps over the lazy dog.
Output 2 :
[T, h, e,  , q, u, i, c, k,  , b, r, o, w, n,  , f, o, x,  , j, u, m, p, s,  , o, v, e, r,  , t, h, e,  , l, a, z, y,  , d, o, g, .]
Input 3 :
123ABC!@#
Output 3 :
[1, 2, 3, A, B, C, !, @, #]





  import java.util.Scanner;
import java.util.Arrays;

public class Main {
    // You are using Java
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Read full input line
        String input = sc.nextLine();

        // Convert string to character array
        char[] characters = input.toCharArray();

        // Print in required format
        System.out.print("[");

        for (int i = 0; i < characters.length; i++) {
            System.out.print(characters[i]);

            if (i != characters.length - 1) {
                System.out.print(", ");
            }
        }

        System.out.print("]");

        sc.close();
    }
}
