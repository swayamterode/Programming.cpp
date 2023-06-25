class Solution
{
public:
    void trianglePattern(int n)
    {
        int space = n - 1;
        int stars = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= space; j++)
            {
                std::cout << " ";
            }
            for (int j = 1; j <= stars; j++)
            {
                std::cout << "*";
            }

            std::cout << std::endl;
            space--;
            stars += 2;
        }
    }
};