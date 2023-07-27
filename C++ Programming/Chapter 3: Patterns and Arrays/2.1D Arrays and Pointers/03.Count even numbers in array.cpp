class Solution
{
public:
    int countEvens(vector<int> &arr)
    {
        int c = 0;
        for (auto &x : arr)
        {
            if (x % 2 == 0)
                c++;
        }
        return c;
    }
};