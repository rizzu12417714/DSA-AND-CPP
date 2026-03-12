Single File Programming Question
Problem Statement



Eric operates a taxi service and charges passengers based on the distance traveled and the waiting time. The total fare is calculated using a base fare, cost per mile, and cost per minute of wait time.



Implement this calculation using an abstract class `FareCalculator` and an interface `FareDetails`. The abstract class should define an abstract method `calculateFare`, while the interface should declare constants for base fare, cost per mile, and cost per minute.



Formula: 

Total Fare = base fare + (distance * cost per mile) + (waiting time * cost per minute)



Eric's Standard Fee Structure:

Base fare = 3.50
Cost per mile = 2.50
Cost per minute = 0.20
Input format :
The first line of the input consists of a double value representing the distance traveled in miles.

The second line consists of an integer representing the waiting time in minutes (a non-negative value).

Output format :
The output prints "Total Fare: " followed by a double value representing the total fare, rounded to two decimal places.



Refer to the sample output formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

0.0 ≤ distance travelled ≤ 50.0

1 ≤ waiting time ≤ 60

Sample test cases :
Input 1 :
7.36
6
Output 1 :
Total Fare: 23.10
Input 2 :
13.25
5
Output 2 :
Total Fare: 37.63
Whitelist
Set 1:
abstract
interface
implements


import java.util.*;

// Interface jo constant values (rates) hold karti hai
interface FareDetails {
    double BASE_FARE = 3.50;
    double COST_PER_MILE = 2.50;
    double COST_PER_MINUTE = 0.20;
}

// Abstract class jo method structure define karti hai
abstract class FareCalculator {
    public abstract double calculateFare(double distance, int waitingTime);
}

// Concrete class jo abstract class ko extend aur interface ko implement karti hai
class TaxiFareCalculator extends FareCalculator implements FareDetails {
    
    @Override
    public double calculateFare(double distance, int waitingTime) {
        // Formula: Total Fare = base fare + (distance * cost per mile) + (waiting time * cost per minute)
        double fare = BASE_FARE + (distance * COST_PER_MILE) + (waitingTime * COST_PER_MINUTE);
        return fare;
    }
}

// Footer Snippet (Platform dwara pehle se diya gaya hai)
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Distance aur Waiting time input lena
        double distance = sc.nextDouble();
        int waitingTime = sc.nextInt();
        
        // TaxiFareCalculator ka object banana
        FareCalculator calculator = new TaxiFareCalculator();
        double totalFare = calculator.calculateFare(distance, waitingTime);
        
        // Output ko 2 decimal places tak format karna
        System.out.printf("Total Fare: %.2f", totalFare);
    }
}
