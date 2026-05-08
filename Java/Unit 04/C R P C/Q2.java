Single File Programming Question
Problem Statement



Sharmi is working on a project that involves analyzing experimental data. As part of her analysis,
  she needs to determine the length of the longest and smallest string from the given set of words.



Create a Java program that allows Sharmi to check and display the length of the longest and smallest words from the given array.



Note: Use lambda expressions

Input format :
The first line of input consists of an integer N, representing the size of the array.

The next N line consists of strings, representing the elements of the array.

Output format :
The first line of output displays an integer representing the length of the longest string.

The second line displays an integer representing the length of the shortest string.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 15

The string contains lowercase alphabets with at most 20 characters.

Sample test cases :
Input 1 :
5
red
blue
black
green
white
Output 1 :
5
3
Input 2 :
10
book
note
pencil
calender
school
bus
late
punishment
friends
enemy
Output 2 :
10
3



import java.util.Arrays;
import java.util.Scanner;

class WordLengthCalculator {

    public int findMaxLength(String[] words) {
        return Arrays.stream(words)
                .mapToInt(String::length)
                .max()
                .orElse(0);
    }

    public int findMinLength(String[] words) {
        return Arrays.stream(words)
                .mapToInt(String::length)
                .min()
                .orElse(0);
    }
}

class WordLengthAnalyzer {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine(); // consume newline

        String[] words = new String[n];

        for (int i = 0; i < n; i++) {
            words[i] = scanner.nextLine();
        }

        WordLengthCalculator calculator = new WordLengthCalculator();

        int maxLength = calculator.findMaxLength(words);
        int minLength = calculator.findMinLength(words);

        System.out.println(maxLength);
        System.out.println(minLength);

        scanner.close();
    }
}
