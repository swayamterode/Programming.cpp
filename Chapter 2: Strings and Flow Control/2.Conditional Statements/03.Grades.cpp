// Problem Description
// Write a program to calculates the grade of a student based on the marks entered by user in each subject. Program prints the grade based on this logic.

// If the average of marks is >= 80 then prints Grade ‘A’

// If the average is <80 and >=60 then prints Grade ‘B’

// If the average is <60 and >=40 then prints Grade ‘C’

// else prints Grade ‘D’

// Example 1:

// Input: s = [40,80,80,40,60,60]
// Output: B

class Solution
{
public:
    char grades(vector<double> &marks)
    {
        if (marks.empty())
        {
            return '-1';
        }

        double sum = 0;
        for (const double &mark : marks)
        {
            sum += mark;
        }

        double average = sum / marks.size();

        if (average >= 80)
        {
            return 'A';
        }
        else if (average >= 60)
        {
            return 'B';
        }
        else if (average >= 40)
        {
            return 'C';
        }
        else
        {
            return 'D';
        }
    }
};