Single File Programming Question
Problem Statement



Imagine Tim is developing a user authentication system for a secure application. 



As part of the security checks, users need to enter two passphrases and the system VowelCountMatching class must verify if two entered passphrases have the same number of vowels. Provide the result as 'Access Granted' if true, or 'Access Denied' otherwise, along with the count of Vowels using the equals() method.



Tim needs your assistance in completing the system. Help him by writing the code.

Input format :
The input consists of two strings, each entered on a separate line, representing the two passphrases provided by the user.

Output format :
The first line of output prints “Access Granted” if both passphrases contain the same number of vowels; otherwise, it prints “Access Denied”.

The second line prints “First String: <count>”, where <count> is the number of vowels in the first passphrase.

The third line prints “Second String: <count>”, where <count> is the number of vowels in the second passphrase.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ length of the input strings ≤ 100 characters

Sample test cases :
Input 1 :
Username
Password
Output 1 :
Access Denied
First String: 4
Second String: 2
Input 2 :
AEIOU
aeiou
Output 2 :
Access Granted
First String: 5
Second String: 5

Whitelist
Set 1:
equals

import java.util.Scanner;

// Class to match vowel counts
class VowelCountMatching {

    String text;

    // Constructor
    VowelCountMatching(String text) {
        this.text = text;
    }

    // Method to count vowels in a string
    int countVowels(String str) {

        int count = 0;
        str = str.toLowerCase();

        for (int i = 0; i < str.length(); i++) {

            char ch = str.charAt(i);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }

        return count;
    }

    // Override equals method to compare vowel counts
    @Override
    public boolean equals(Object obj) {

        if (!(obj instanceof VowelCountMatching)) {
            return false;
        }

        VowelCountMatching other = (VowelCountMatching) obj;

        int count1 = countVowels(this.text);
        int count2 = countVowels(other.text);

        return count1 == count2;
    }
}

// Main class
public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String firstString = scanner.nextLine();
        String secondString = scanner.nextLine();

        VowelCountMatching object1 = new VowelCountMatching(firstString);
        VowelCountMatching object2 = new VowelCountMatching(secondString);

        boolean result = object1.equals(object2);

        System.out.println(result ? "Access Granted" : "Access Denied");
        System.out.println("First String: " + object1.countVowels(firstString));
        System.out.println("Second String: " + object2.countVowels(secondString));

        scanner.close();
    }
}
