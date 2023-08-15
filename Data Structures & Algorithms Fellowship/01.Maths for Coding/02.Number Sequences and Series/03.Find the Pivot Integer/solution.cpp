class Solution
{
public:
    int pivotInteger(int n)
    {
        int leftSum = 0;
        int rightSum = 0;

        // Calculate the sum of all elements
        // on the right side of x
        for (int i = 1; i <= n; i++)
        {
            rightSum += i;
        }

        // Find the pivot integer
        for (int i = 1; i <= n; i++)
        {
            rightSum -= i;
            if (leftSum == rightSum)
            {
                return i;
            }
            leftSum += i;
        }

        // If no pivot integer is found
        return -1;
    }
};