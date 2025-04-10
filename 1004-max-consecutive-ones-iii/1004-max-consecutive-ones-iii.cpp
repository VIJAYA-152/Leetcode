class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,z=0,maxi=0,len=0;
        while(r<nums.size()){
            if(nums[r]==0) z++;
            while(z>k){
             if(nums[l]==0) z--;
             l++;
            }
            if(z<=k){
                len=r-l+1;
                maxi=max(maxi,len);
            }
            r++;
        }
        return maxi;
    }
};