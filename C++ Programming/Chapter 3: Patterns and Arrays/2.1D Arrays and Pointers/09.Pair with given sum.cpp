class Solution
{
public:
    vector<int> findPairWithGivenSum(vector<int> &arr, int targetSum)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 1; j < arr.size(); j++)
            {
                if (arr[i] + arr[j] == targetSum)
                    return {arr[i], arr[j]};
            }
        }
        return {-1};
    }
};