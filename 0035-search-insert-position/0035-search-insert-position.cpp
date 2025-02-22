class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();

        for(int i=0;i<n;i++){
             if (target <= nums[0])  // If target is smaller than the first element
            return 0;
            if(target==nums[i]) return i;
            else
             if (i < n - 1 && nums[i] < target && nums[i + 1] > target) 
                return i + 1;
             
        }
        return n;
    }
};