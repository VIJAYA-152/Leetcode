class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        long long ans = 0;
        int left=0;
        int count_maxi = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] == maxi)
                count_maxi++;
            while (count_maxi >= k) {
                ans += n - right;
                if (nums[left] == maxi)
                    count_maxi--;
                left++;
            }
        }
        return ans;
    }
};
