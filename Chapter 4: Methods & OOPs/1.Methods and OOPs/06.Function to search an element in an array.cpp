class Solution
{
public:
    bool findElement(vector<int> &arr, int x)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
                return true;
        }
        return false;
    }
};