class Solution
{
public:
    int max(vector<vector<int>> &args)
    {
        int maxElement = args[0][0];

        for (const auto &row : args)
        {
            for (int num : row)
            {
                if (num > maxElement)
                {
                    maxElement = num;
                }
            }
        }

        return maxElement;
    }
};