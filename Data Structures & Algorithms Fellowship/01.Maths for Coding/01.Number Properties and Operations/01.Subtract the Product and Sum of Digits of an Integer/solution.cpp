class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        long long int num = n;
        long long int sum = 0;
        long long int product = 1;
        while (n != 0)
        {
            int digit = n % 10;
            n /= 10;
            product *= digit;
        }
        while (num != 0)
        {
            int digit = num % 10;
            num /= 10;
            sum += digit;
        }
        return product - sum;
    }
};