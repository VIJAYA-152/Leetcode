
class Solution {
public:
    int ans(vector<int>& nums, int k) {
        if(k<0) return 0;
        int n=nums.size();
        int l=0,r=0,c=0,sum=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            c=c+(r-l+1);
            r++;
            
        }
        return c;
    }
     int numberOfSubarrays(vector<int>& nums, int k){
        return ans(nums,k)-ans(nums,k-1);
     }
};