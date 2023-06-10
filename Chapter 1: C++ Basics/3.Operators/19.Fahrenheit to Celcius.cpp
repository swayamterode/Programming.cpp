class Solution
{
public:
    double convertFahrenheitToCelsius(double tempF)
    {
        double a = 32.00000;
        return (tempF - a) * 5 / 9;
    }
};