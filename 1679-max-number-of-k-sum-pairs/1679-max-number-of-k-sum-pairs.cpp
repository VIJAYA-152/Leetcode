 
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // Sort the array
        int left = 0, right = nums.size() - 1;
        int count = 0;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == k) {
                count++;
                left++;   // Move left pointer
                right--;  // Move right pointer
            } else if (sum < k) {
                left++;   // Increase sum
            } else {
                right--;  // Decrease sum
            }
        }
        return count;
    }
};
