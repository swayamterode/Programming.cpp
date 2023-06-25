class Solution
{
public:
    string daysOfWeek(int num)
    {
        if (num < 1 || num > 7)
        {
            return "Invalid Input";
        }
        string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        return days[num - 1];
    }
};