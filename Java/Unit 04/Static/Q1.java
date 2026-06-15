Single File Programming Question
Problem Statement



Priya wants to calculate the number of days between two given dates while considering leap years.



Write a Java program that:

Reads two dates in the format YYYY-MM-DD
Uses an anonymous inner class implementing the DaysCalculator interface
Calculates the number of days between the two dates


Note: Use Java’s LocalDate and ChronoUnit.DAYS.between() for date calculation.



Formula

Days Difference:

days = ChronoUnit.DAYS.between(startDate, endDate)



Input format :
First line: start date (YYYY-MM-DD)

Second line: end date (YYYY-MM-DD)

Output format :
Print:

Number of days between the two dates is: X



Refer to the sample output for the formatting specifications.

Code constraints :
Dates are valid

2000 ≤ Year ≤ 2024

01 ≤ Month ≤ 12

01 ≤ Date ≤ 31

Sample test cases :
Input 1 :
2023-01-01
2023-01-02
Output 1 :
Number of days between the two dates is: 1
Input 2 :
2023-01-01
2024-01-02
Output 2 :
Number of days between the two dates is: 366
Input 3 :
2000-02-28
2000-03-01
Output 3 :
Number of days between the two dates is: 2




import java.util.Scanner;

// Interface
interface DaysCalculator {
    int calculateDays(int[] date1, int[] date2);
}

// Implementation using Anonymous Inner Class
class DaysCalculatorImpl {

    public static DaysCalculator createCalculator() {

        return new DaysCalculator() {

            @Override
            public int calculateDays(int[] date1, int[] date2) {

                // Using fully qualified names (no import needed)
                java.time.LocalDate startDate =
                        java.time.LocalDate.of(date1[0], date1[1], date1[2]);

                java.time.LocalDate endDate =
                        java.time.LocalDate.of(date2[0], date2[1], date2[2]);

                long days =
                        java.time.temporal.ChronoUnit.DAYS.between(startDate, endDate);

                return (int) days;
            }
        };
    }
}

// Main class
class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // Read input in YYYY-MM-DD format
        String[] date1 = scanner.nextLine().split("-");
        String[] date2 = scanner.nextLine().split("-");

        // Convert to int array
        int[] date1Int = {
                Integer.parseInt(date1[0]),
                Integer.parseInt(date1[1]),
                Integer.parseInt(date1[2])
        };

        int[] date2Int = {
                Integer.parseInt(date2[0]),
                Integer.parseInt(date2[1]),
                Integer.parseInt(date2[2])
        };

        // Create calculator using anonymous class
        DaysCalculator calculator = DaysCalculatorImpl.createCalculator();

        int days = calculator.calculateDays(date1Int, date2Int);

        // Output
        System.out.println("Number of days between the two dates is: " + days);

        scanner.close();
    }
}
