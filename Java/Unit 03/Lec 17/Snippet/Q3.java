Single File Programming Question
Problem Statement



Shreya is a student who needs to calculate her exam percentage. Her regular percentage is calculated using the formula (obtained marks / total marks) * 100. However, as a scholarship student, she receives an additional 5% bonus on her calculated percentage. 



Write a program that uses an overridden method calculatePercentage to compute both her regular and scholarship percentages.



Regular Percentage = (obtained / total) * 100

Scholarship Percentage = Regular Percentage + 5

Input format :
The first line of input consists of an integer n, which represents the total marks in the exam.

The second line consists of an integer m, which represents the marks obtained by the student.

Output format :
The first line of output prints “Student Percentage: <percentage>%”, where the percentage is rounded to two decimal places.

The second line of output prints “Scholarship Student Percentage: <percentage>%”, where the percentage is rounded to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 1200

1 ≤ m < n

Sample test cases :
Input 1 :
500
450
Output 1 :
Student Percentage: 90.00%
Scholarship Student Percentage: 95.00%
Input 2 :
600
300
Output 2 :
Student Percentage: 50.00%
Scholarship Student Percentage: 55.00%




import java.util.Scanner;

// Base class
class Student {

    // Method to calculate regular percentage
    double calculatePercentage(int totalMarks, int obtainedMarks) {
        return ((double) obtainedMarks / totalMarks) * 100;
    }
}

// Derived class
class ScholarshipStudent extends Student {

    // Overriding method to add scholarship bonus
    @Override
    double calculatePercentage(int totalMarks, int obtainedMarks) {

        // Calculate regular percentage
        double percentage = ((double) obtainedMarks / totalMarks) * 100;

        // Add 5% bonus
        return percentage + 5;
    }
}

// Main class
public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        Student student = new Student();
        ScholarshipStudent scholarshipStudent = new ScholarshipStudent();

        int totalMarks = scanner.nextInt();
        int obtainedMarks = scanner.nextInt();

        double studentPercentage =
                student.calculatePercentage(totalMarks, obtainedMarks);

        double scholarshipStudentPercentage =
                scholarshipStudent.calculatePercentage(totalMarks, obtainedMarks);

        System.out.printf("Student Percentage: %.2f%%%n", studentPercentage);
        System.out.printf("Scholarship Student Percentage: %.2f%%%n", scholarshipStudentPercentage);

        scanner.close();
    }
}
