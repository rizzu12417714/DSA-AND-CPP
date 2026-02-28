Single File Programming Question
Problem Statement



"PerfectMatch" is a matrimony site that helps people find their life partners. Users can create profiles with three attributes: Age, Height, and Education Level. To enhance the user experience, the site wants to implement a compatibility score calculation function. The compatibility score will help users assess how well they match with potential partners based on their profiles.



The compatibility score is calculated by comparing the attributes of the two profiles, and for each matching attribute, the score increases by 10 points. If any of the attributes do not match, the score remains unchanged.



Write a program that implements a function to calculate the compatibility score between two profiles. 

Input format :
The first line of input consists of the attributes for Profile 1: age, height, and education level (separated by spaces).

The second line of input consists of the attributes for Profile 2: age, height, and education level (separated by spaces).

Output format :
The output displays the compatibility Score between the two profiles.

Refer to the problem statement on how the compatibility score is calculated.

Sample test cases :
Input 1 :
25 5 8
25 5 8
Output 1 :
Compatibility Score: 30
Input 2 :
30 6 7
25 8 4
Output 2 :
Compatibility Score: 0
Input 3 :
25 180 9
25 177 9
Output 3 :
Compatibility Score: 20
Input 4 :
25 180 9
27 177 9
Output 4 :
Compatibility Score: 10



#include <iostream>
using namespace std;

template <size_t N>
int calculateCompatibilityScore(const int (&profile1)[N], const int (&profile2)[N]) {
    int compatibilityScore = 0;

    for (size_t i = 0; i < N; ++i) {
        if (profile1[i] == profile2[i]) {
            compatibilityScore += 10;
        }
    }

    return compatibilityScore;
}

int main() {
    int profile1[3];
    int profile2[3];

    cin >> profile1[0] >> profile1[1] >> profile1[2];
    cin >> profile2[0] >> profile2[1] >> profile2[2];

    int compatibilityScore = calculateCompatibilityScore(profile1, profile2);
    cout << "Compatibility Score: " << compatibilityScore;

    return 0;
}
