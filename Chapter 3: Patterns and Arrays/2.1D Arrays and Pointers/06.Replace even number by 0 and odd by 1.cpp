class Solution
{
public:
    vector<int> modifyArray(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
                arr[i] = 0;
            else
                arr[i] = 1;
        }
        return arr;
    }
};