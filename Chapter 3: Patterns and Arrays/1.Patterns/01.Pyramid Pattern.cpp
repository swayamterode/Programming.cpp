class Solution
{
public:
    void printPyramid(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            int arr[i];
            for (int j = 0; j < i; j++)
            {
                arr[j] = i;
            }
            for (int j = 0; j < i; j++)
            {
                cout << arr[j];
            }
            cout << endl;
        }
    }
};