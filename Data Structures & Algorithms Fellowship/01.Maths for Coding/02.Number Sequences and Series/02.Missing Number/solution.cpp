class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2; // Sum of numbers from 0 to n

        int arraySum = 0;
        for (int num : nums)
        {
            arraySum += num;
        }

        int missingNumber = totalSum - arraySum;
        return missingNumber;
    }
};