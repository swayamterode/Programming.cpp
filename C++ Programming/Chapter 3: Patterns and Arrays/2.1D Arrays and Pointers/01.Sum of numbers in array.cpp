class Solution
{
public:
    int sumNumbers(vector<int> &arr)
    {
        int ans = 0;
        for (auto &x : arr)
            ans += x;
        return ans;
    }
};