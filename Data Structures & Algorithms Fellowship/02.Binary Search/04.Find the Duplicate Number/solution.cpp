class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // tortoise method
        int slow = nums[0];
        int fast = nums[0];

        do
        {
            slow = nums[slow];       // 1x speed
            fast = nums[nums[fast]]; // 2x speed
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow]; // 1x speed
            fast = nums[fast]; // 1x speed
        }
        return slow; // you can also return fast ✅
    }
};