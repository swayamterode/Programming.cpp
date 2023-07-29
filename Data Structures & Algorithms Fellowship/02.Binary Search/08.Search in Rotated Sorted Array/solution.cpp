class Solution
{
public:
    // Function to search for an element in a rotated sorted array
    int search(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;

        // Binary search loop
        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            // If the middle element is greater than or equal to the first element
            // and the target is less than the first element, it means the target
            // lies in the second part of the rotated array. Move 's' to the right.
            if (nums[mid] >= nums[0] && target < nums[0])
            {
                s = mid + 1;
            }
            // If the middle element is less than the first element
            // and the target is greater than or equal to the first element,
            // it means the target lies in the first part of the rotated array.
            // Move 'e' to the left.
            else if (nums[mid] < nums[0] && target >= nums[0])
            {
                e = mid - 1;
            }
            else
            {
                // If the target is equal to the middle element, return the index.
                if (target == nums[mid])
                {
                    return mid;
                }
                // If the target is greater than the middle element,
                // it lies in the right half. Move 's' to the right.
                else if (nums[mid] < target)
                {
                    s = mid + 1;
                }
                // If the target is less than the middle element,
                // it lies in the left half. Move 'e' to the left.
                else
                {
                    e = mid - 1;
                }
            }
        }

        // If the target is not found in the array, return -1.
        return -1;
    }
};
