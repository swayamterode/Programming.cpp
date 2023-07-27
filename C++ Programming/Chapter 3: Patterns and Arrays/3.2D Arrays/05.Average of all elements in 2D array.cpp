class Solution
{
public:
    double findAverage(vector<vector<int>> &arr)
    {
        double ans = 0;
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[0].size(); j++)
            {
                count++;
                ans += arr[i][j];
            }
        }
        return ans / count;
    }
};