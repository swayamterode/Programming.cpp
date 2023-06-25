class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int target)
    {
        for (const auto &row : arr)
        {
            for (const auto &element : row)
            {
                if (element == target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};