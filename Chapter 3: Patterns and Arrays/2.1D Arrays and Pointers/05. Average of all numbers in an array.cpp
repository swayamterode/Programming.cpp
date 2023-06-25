class Solution
{
public:
    double findAverage(vector<int> &arr)
    {
        double count = 0;
        double sum = 0;
        for (auto &x : arr)
        {
            count++;
            sum += x;
        }
        return sum / count;
    }
};