// brute force

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Optimal Approach

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, vector<int> &nums2)
    {
        // Your code goes here
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans(n1 + n2);
        int i = 0, j = 0, k = 0;

        // Traverse both array
        while (i < n1 && j < n2)
        {
            // Check if current element of first
            // array is smaller than current element
            // of second array. If yes, store first
            // array element and increment first array
            // index. Otherwise do same with second array
            if (nums1[i] < nums2[j])
                ans[k++] = nums1[i++];
            else
                ans[k++] = nums2[j++];
        }

        // Store remaining elements of first array
        while (i < n1)
            ans[k++] = nums1[i++];

        // Store remaining elements of second array
        while (j < n2)
            ans[k++] = nums2[j++];

        return ans;
    }
};