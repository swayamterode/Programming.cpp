class Solution
{
public:
    int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return gcd(b, a % b);
    }
    int findGCD(vector<int> &nums)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int x = nums[i];
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        return gcd(mini, maxi);
    }
};

// my sol

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        return __gcd(mini, maxi);
    }
};