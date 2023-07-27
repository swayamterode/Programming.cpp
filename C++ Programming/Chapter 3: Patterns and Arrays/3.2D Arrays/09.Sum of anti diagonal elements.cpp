class Solution
{
public:
    int sumAntiDiagonal(vector<vector<int>> &arr)
    {
        int sum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            sum += arr[i][n - i - 1];
        }

        return sum;
    }
};