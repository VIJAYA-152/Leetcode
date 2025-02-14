class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int n=nums.size();
         
        int current=nums[0];
        for(int i=0;i<n;i++){
            current=max(nums[i],nums[i]+current);
            maxi=max(current,maxi);
        }
        return maxi;
    }
};