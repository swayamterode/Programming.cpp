class Solution
{
public:
    vector<int> fibonacci(int n)
    {
        vector<int> sequence;

        if (n <= 0)
            return sequence;

        sequence.push_back(0);

        if (n == 1)
            return sequence;

        sequence.push_back(1);

        for (int i = 2; i < n; i++)
        {
            int next = sequence[i - 1] + sequence[i - 2];
            sequence.push_back(next);
        }

        return sequence;
    }
};