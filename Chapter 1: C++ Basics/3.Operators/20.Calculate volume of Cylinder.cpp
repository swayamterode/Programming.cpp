class Solution
{
public:
    double calculateCylinderVolume(double radius, double height)
    {
        // pi * r^2 * h
        double pi = 3.14159265359;
        return pi * (radius * radius) * height;
    }
};