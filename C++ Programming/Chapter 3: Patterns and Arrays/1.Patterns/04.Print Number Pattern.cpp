class Solution
{
public:
    void TimesTable(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                std::cout << i * j << " ";
            }
            std::cout << std::endl;
        }
    }
};