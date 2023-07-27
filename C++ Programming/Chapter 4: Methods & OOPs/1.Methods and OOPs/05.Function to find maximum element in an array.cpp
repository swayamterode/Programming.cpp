class Solution
{
public:
    int findMax(vector<int> &arr)
    {
        return *max_element(arr.begin(), arr.end());
    }
};