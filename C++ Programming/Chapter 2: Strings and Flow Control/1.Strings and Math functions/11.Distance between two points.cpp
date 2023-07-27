// Problem Description
// Write a program to calculate the distance between two points.Enter (x,y) cordinates of two points as input and display distance betweent two points

// Example 1:

// Input: x1 = 1, y1 = 2, x2 = 1, y2 = 2
// Output: 0.00000

class Solution
{
public:
    double DistanceBwPoint(double x1, double y1, double x2, double y2)
    {
        return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    }
};