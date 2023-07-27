class Solution
{
public:
    void StarPattern(int n)
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }
};