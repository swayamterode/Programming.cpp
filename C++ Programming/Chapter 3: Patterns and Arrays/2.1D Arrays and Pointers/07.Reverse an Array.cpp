class Solution
{
public:
    vector<int> reverseArray(vector<int> &arr)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
};