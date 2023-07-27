class Solution
{
public:
    int findDiagonalSum(vector<vector<int>> &arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[0].size(); j++)
            {
                if (i == j)
                    sum += arr[i][j];
            }
        }
        return sum;
    }
};