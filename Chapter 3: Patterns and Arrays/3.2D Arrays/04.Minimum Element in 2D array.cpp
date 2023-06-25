class Solution
{
public:
    int minimum(vector<vector<int>> &arr)
    {
        int ans = INT_MAX;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[0].size(); j++)
            {
                ans = min(ans, arr[i][j]);
            }
        }
        return ans;
    }
};