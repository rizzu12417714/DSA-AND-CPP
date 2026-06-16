Single File Programming Question
Problem Statement



Buck is developing a program to validate phone numbers. He wants to ensure that the phone numbers entered by users are in the correct format. Buck's program should handle various cases, including situations where the input contains non-numeric characters or the phone number is not exactly 10 digits.



Check if the input contains only numeric digits.
If the input is non-numeric, throw an InputMismatchException with a descriptive error message "Error: Input mismatch. Please enter a valid 10-digit phone number."
Check if the length of the phone number is exactly 10 digits.
If not, throw an IllegalArgumentException with a message like "Error: Invalid phone number: Must be a 10-digit number."
If the input passes both validations, print "Valid" to indicate that the phone number is valid.
Use the finally block to close the Scanner to prevent resource leaks.
Input format :
The input consists of a string value S, representing the phone number.

Output format :
If valid:

Valid



If non-numeric:

Error: Input mismatch. Please enter a valid 10-digit phone number.



If length is not 10:

Error: Invalid phone number: Must be a 10-digit number.





Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ Length of String ≤ 20



Sample test cases :
Input 1 :
7456984562
Output 1 :
Valid
Input 2 :
1234abcd56
Output 2 :
Error: Input mismatch. Please enter a valid 10-digit phone number.
Input 3 :
98765432
Output 3 :
Error: Invalid phone number: Must be a 10-digit number.
Input 4 :
abcdefghij
Output 4 :
Error: Input mismatch. Please enter a valid 10-digit phone number.
Whitelist
Set 1:
try
catch





import java.util.InputMismatchException;
import java.util.Scanner;

// Logic class
class PhoneNumberValidatorLogic {

    public static void validate(String phone) {

        // Check if input contains only digits
        for (char ch : phone.toCharArray()) {
            if (!Character.isDigit(ch)) {
                throw new InputMismatchException(
                        "Error: Input mismatch. Please enter a valid 10-digit phone number.");
            }
        }

        // Check length
        if (phone.length() != 10) {
            throw new IllegalArgumentException(
                    "Error: Invalid phone number: Must be a 10-digit number.");
        }

        // If valid
        System.out.println("Valid");
    }
}

// Handler class
class PhoneNumberValidatorHandler {

    public void handleValidation() {

        Scanner scanner = new Scanner(System.in);

        try {
            String input = scanner.nextLine();

            PhoneNumberValidatorLogic.validate(input);

        } catch (InputMismatchException e) {
            System.out.println(e.getMessage());

        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());

        } finally {
            // Always executed
            scanner.close();
        }
    }
}

// Main class (footer)
class PhoneNumberValidator {
    public static void main(String[] args) {

        PhoneNumberValidatorHandler validatorHandler =
                new PhoneNumberValidatorHandler();

        validatorHandler.handleValidation();
    }
}
