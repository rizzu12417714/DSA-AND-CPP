Single File Programming Question
Problem Statement



John wants to monitor the growth of a plant over several days.



A class GrowthLogger contains a non-static inner class PlantGrowth that records the plant’s height each day.



Given:

Initial height x
Daily growth rate y
Number of days d
Print the plant height after each day.



Formula

For Each Day:

﻿height = height + dailyGrowth



Input format :
First line: double x (initial height in inches)

Second line: double y (daily growth rate in inches)

Third line: integer d (number of days)

Output format :
Print d lines:

Day n: height inches

Each height must be rounded to two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
0.0 ≤ x ≤ 10.0

0.0 ≤ y ≤ 10.0

1 ≤ d ≤ 15



Sample test cases :
Input 1 :
0.0
1.0
7
Output 1 :
Day 1: 1.00 inches
Day 2: 2.00 inches
Day 3: 3.00 inches
Day 4: 4.00 inches
Day 5: 5.00 inches
Day 6: 6.00 inches
Day 7: 7.00 inches
Input 2 :
10.0
0.5
10
Output 2 :
Day 1: 10.50 inches
Day 2: 11.00 inches
Day 3: 11.50 inches
Day 4: 12.00 inches
Day 5: 12.50 inches
Day 6: 13.00 inches
Day 7: 13.50 inches
Day 8: 14.00 inches
Day 9: 14.50 inches
Day 10: 15.00 inches



import java.util.Scanner;

// Outer class
class GrowthLogger {

    double initialHeight;

    // Constructor
    public GrowthLogger(double initialHeight) {
        this.initialHeight = initialHeight;
    }

    // Non-static inner class
    class PlantGrowth {

        double height;

        public PlantGrowth(double height) {
            this.height = height;
        }

        // Method to calculate daily growth
        public double[] calculateGrowth(int days, double dailyGrowth) {

            double[] result = new double[days];

            for (int i = 0; i < days; i++) {
                height = height + dailyGrowth;
                result[i] = height;
            }

            return result;
        }
    }

    // Method called from main
    public double[] startMonitoring(int days, double dailyGrowth) {

        PlantGrowth plant = new PlantGrowth(initialHeight);

        return plant.calculateGrowth(days, dailyGrowth);
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double initialHeight = scanner.nextDouble();
        double dailyGrowth = scanner.nextDouble();
        int days = scanner.nextInt();

        GrowthLogger growthLogger = new GrowthLogger(initialHeight);

        double[] growthLogs = growthLogger.startMonitoring(days, dailyGrowth);

        for (int i = 0; i < days; i++) {
            System.out.println("Day " + (i + 1) + ": " +
                    String.format("%.2f", growthLogs[i]) + " inches");
        }

        scanner.close();
    }
}
