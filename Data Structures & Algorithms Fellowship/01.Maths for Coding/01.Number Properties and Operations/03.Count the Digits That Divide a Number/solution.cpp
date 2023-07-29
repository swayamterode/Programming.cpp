class Solution
{
public:
    int countDigits(int num)
    {
        int count = 0;
        int number = num;
        while (num != 0)
        {
            int rem = num % 10;
            num /= 10;
            if (number % rem == 0)
                count++;
        }
        return count;
    }
};