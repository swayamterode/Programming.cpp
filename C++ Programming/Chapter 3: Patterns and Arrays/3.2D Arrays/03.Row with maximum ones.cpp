class Solution
{
public:
    int maximumOnesRow(vector<vector<int>> &arr, int r, int c)
    {
        int maxOnesRow = 0;
        int maxOnesCount = 0;

        for (int i = 0; i < r; i++)
        {
            int currentOnesCount = 0;

            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] == 1)
                {
                    currentOnesCount++;
                }
            }

            if (currentOnesCount > maxOnesCount)
            {
                maxOnesCount = currentOnesCount; // Update the maximum count
                maxOnesRow = i;                  // Update the row with maximum ones
            }
        }

        return maxOnesRow;
    }
};