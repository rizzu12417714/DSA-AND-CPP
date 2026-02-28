Single File Programming Question
Problem Statement



Sophia is building a text-processing application that analyzes user-inputted sentences. 
  She needs to determine the number of words in each sentence entered by the user. 



Write a program for Sophia that takes a full sentence as input, splits it into 
  individual words, and outputs the total word count. 

Input format :
The input consists of a string, representing a sentence.

Output format :
The output prints an integer representing the number of words in the input sentence.



Refer to the sample output for formatting specifications.

Code constraints :
The given testcases fall under the following constraints:

The input sentence may include letters (both lowercase and uppercase), spaces, and common punctuation marks.

Sample test cases :
Input 1 :
The quick brown fox
Output 1 :
4
Input 2 :
Count the number of words in the program!
Output 2 :
8




  import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Read full sentence
        String sentence = sc.nextLine().trim();

        int wordCount = 0;

        if (!sentence.isEmpty()) {
            // Split sentence by one or more spaces
            String[] words = sentence.split("\\s+");
            wordCount = words.length;
        }

        // Print word count
        System.out.println(wordCount);

        sc.close();
    }
}
