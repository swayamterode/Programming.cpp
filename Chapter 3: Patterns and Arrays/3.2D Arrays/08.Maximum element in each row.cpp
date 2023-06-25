class Solution
{
public:
    vector<int> findRowMaxima(vector<vector<int>> &arr)
    {
        vector<int> rowMaxima;

        for (const auto &row : arr)
        {
            int maxElement = row[0]; // Assume the first element of the row as the maximum

            for (int num : row)
            {
                if (num > maxElement)
                {
                    maxElement = num; // Update the maximum element if a larger element is found
                }
            }

            rowMaxima.push_back(maxElement); // Add the maximum element to the result array
        }

        return rowMaxima;
    }
};