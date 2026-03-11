Single File Programming Question
Problem Statement:



Emily, the HR representative at "PerformancePro," is tasked with evaluating the health of employees during their annual
  performance evaluations. PerformancePro has both regular employees and athletes.



For athletes, Emily needs to calculate:

Body Mass Index (BMI), and
The additional calories burned during their exercise routines.
For regular employees, only the BMI needs to be calculated.



Write a program using inheritance with a parent class Person that calculates the BMI and a child class Athlete that
  extends the Person class and calculates both the BMI and the additional calories burned during exercises.



Formula:

BMI= weight/(height*height)

Input format :
For the Ordinary Person:

The first line of input contains a string representing the name of the ordinary person.

The second line contains an integer representing the age of the ordinary person in years.

The third line contains a floating-point number representing the height of the ordinary person in meters.

The fourth line contains an integer representing the weight of the ordinary person in kilograms.

For the Athlete:

The fifth line of input contains a string representing the name of the athlete.

The sixth line contains an integer representing the age of the athlete in years.

The seventh line contains a floating-point number representing the height of the athlete in meters.

The eighth line contains an integer representing the weight of the athlete in kilograms.

The ninth line contains an integer representing the number of exercises per day the athlete performs.

The tenth line contains an integer representing the calories burned per exercise by the athlete.

Output format :
The output should display the information of the ordinary and the athlete in the following format:

Information for the regular person:

Name: <name>

Age: <int age> years

Height: <float height> meters

Weight: <float weight> kilograms

BMI: <float BMI>



Information for the athlete:

Name: <name>

Age: <int age> years

Height: <float height> meters

Weight: <float weight> kilograms

BMI: <float BMI>

Exercises per day: <int count>

Calories burned per exercise: <float calories> calories

Total Calories Burned: <float calories> calories



Refer to the sample test cases for formatting Specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ name length ≤ 50

1 ≤ age ≤ 100

0.5 ≤ height ≤ 2.5

10.0 ≤ weight ≤ 300.0

1 ≤ exercisesPerDay ≤ 20

10.0 ≤ caloriesBurnedPerExercise ≤ 1000.0 calories

Sample test cases :
Input 1 :
John Doe
30
1.75
75
Alice Smith
25
1.80
70
5
400
Output 1 :
Information for the regular person:
Name: John Doe
Age: 30 years
Height: 1.75 meters
Weight: 75.00 kilograms
BMI: 24.49

Information for the athlete:
Name: Alice Smith
Age: 25 years
Height: 1.80 meters
Weight: 70.00 kilograms
BMI: 21.60
Exercises per day: 5
Calories burned per exercise: 400.00 calories
Total Calories Burned: 2000.00 calories
Input 2 :
John
25
1.75
70.0
Mike
22
1.80
75.0
5
50.0
Output 2 :
Information for the regular person:
Name: John
Age: 25 years
Height: 1.75 meters
Weight: 70.00 kilograms
BMI: 22.86

Information for the athlete:
Name: Mike
Age: 22 years
Height: 1.80 meters
Weight: 75.00 kilograms
BMI: 23.15
Exercises per day: 5
Calories burned per exercise: 50.00 calories
Total Calories Burned: 250.00 calories




import java.util.Scanner;

class Person {
    String name;
    int age;
    double height;
    double weight;

    Person(String name, int age, double height, double weight) {
        this.name = name;
        this.age = age;
        this.height = height;
        this.weight = weight;
    }

    double calculateBMI() {
        return weight / (height * height);
    }
}

class Athlete extends Person {
    int exercisesPerDay;
    double caloriesPerExercise;

    Athlete(String name, int age, double height, double weight, int exercisesPerDay, double caloriesPerExercise) {
        super(name, age, height, weight);
        this.exercisesPerDay = exercisesPerDay;
        this.caloriesPerExercise = caloriesPerExercise;
    }

    double totalCaloriesBurned() {
        return exercisesPerDay * caloriesPerExercise;
    }
}

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String pName = sc.nextLine();
        int pAge = sc.nextInt();
        double pHeight = sc.nextDouble();
        double pWeight = sc.nextDouble();
        sc.nextLine();

        String aName = sc.nextLine();
        int aAge = sc.nextInt();
        double aHeight = sc.nextDouble();
        double aWeight = sc.nextDouble();
        int exercises = sc.nextInt();
        double calories = sc.nextDouble();

        Person person = new Person(pName, pAge, pHeight, pWeight);
        Athlete athlete = new Athlete(aName, aAge, aHeight, aWeight, exercises, calories);

        System.out.println("Information for the regular person:");
        System.out.println("Name: " + person.name);
        System.out.println("Age: " + person.age + " years");
        System.out.printf("Height: %.2f meters\n", person.height);
        System.out.printf("Weight: %.2f kilograms\n", person.weight);
        System.out.printf("BMI: %.2f\n\n", person.calculateBMI());

        System.out.println("Information for the athlete:");
        System.out.println("Name: " + athlete.name);
        System.out.println("Age: " + athlete.age + " years");
        System.out.printf("Height: %.2f meters\n", athlete.height);
        System.out.printf("Weight: %.2f kilograms\n", athlete.weight);
        System.out.printf("BMI: %.2f\n", athlete.calculateBMI());
        System.out.println("Exercises per day: " + athlete.exercisesPerDay);
        System.out.printf("Calories burned per exercise: %.2f calories\n", athlete.caloriesPerExercise);
        System.out.printf("Total Calories Burned: %.2f calories\n", athlete.totalCaloriesBurned());
    }
}
