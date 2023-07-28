class Solution
{
public:
    int bubbleSort(vector<int> &A)
    {
        int count = 0;
        int n = A.size();
        bool swapped = true;
        while (swapped != false)
        {
            swapped = false;
            count = count + 1;
            for (int i = 0; i < n - 1; i++)
            {
                if (A[i] > A[i + 1])
                {
                    swapped = true;
                    swap(A[i], A[i + 1]);
                }
            }
        }
        return count;
    }
};