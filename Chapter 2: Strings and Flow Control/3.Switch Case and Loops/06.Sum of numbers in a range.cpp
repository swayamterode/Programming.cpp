class Solution
{
public:
    int sum_of_numbers_in_range(vector<int> &interval)
    {
        int res = 0;
        int start = interval[0];
        int end = interval[1];
        for (int i = start; i <= end; i++)
        {
            res += i;
        }
        return res;
    }
};