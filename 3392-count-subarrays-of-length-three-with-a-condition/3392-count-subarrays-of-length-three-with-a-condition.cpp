class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if ((j - i + 1) == 3) {
                    if (2*(nums[i] + nums[j]) == nums[i + 1]) {
                        c++;
                    }
                }
            }
        }
        return c;
    }
};
