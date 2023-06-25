class Solution
{
public:
    int sumOfElements(vector<vector<int>> &arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[0].size(); j++)
            {
                sum += arr[i][j];
            }
        }
        return sum;
    }
};