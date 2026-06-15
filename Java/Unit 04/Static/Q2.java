Single File Programming Question
Problem Statement



Alex, a project manager, needs to ensure that all deadlines entered into the system are valid and determine if they fall on a weekend or a weekday. You have been tasked with writing a utility class that checks whether a given date (in dd mm yyyy format) falls on a weekend or a weekday. Alex will enter the project deadline in the format dd mm yyyy, and your program should output whether the deadline is on a Weekend or Weekday.

Input format :
The first line of input contains a single line representing the date in dd mm yyyy format.

Output format :
The first line of output prints

"<Date> is a Weekend" if the date is a Saturday or Sunday. (or)
"<Date> is a Weekday" if the date is any day from Monday to Friday.


Refer to the sample output for formatting specifications.

Code constraints :
The input date will always be a valid date.

The input will always be in the dd mm yyyy format.

2000 ≤ Year ≤ 2024

Sample test cases :
Input 1 :
06 05 2004
Output 1 :
06 05 2004 is a Weekday
Input 2 :
06 01 2024
Output 2 :
06 01 2024 is a Weekend




import java.util.Scanner;
import java.time.LocalDate;

// Utility class
class DateValidator {

    public static String getDayType(String dateInput) {

        // Split input "dd mm yyyy"
        String[] parts = dateInput.split(" ");

        int dd = Integer.parseInt(parts[0]);
        int mm = Integer.parseInt(parts[1]);
        int yyyy = Integer.parseInt(parts[2]);

        // Create LocalDate (yyyy, mm, dd)
        LocalDate date = LocalDate.of(yyyy, mm, dd);

        // Get day of week
        java.time.DayOfWeek day = date.getDayOfWeek();

        // Check if weekend
        if (day == java.time.DayOfWeek.SATURDAY ||
            day == java.time.DayOfWeek.SUNDAY) {
            return "Weekend";
        } else {
            return "Weekday";
        }
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // Input: dd mm yyyy
        String dateInput = scanner.nextLine();

        // Get result
        String result = DateValidator.getDayType(dateInput);

        // Output
        System.out.println(dateInput + " is a " + result);

        scanner.close();
    }
}
