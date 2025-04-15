class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n=nums.size();
        long long maxi=0,c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<0 && nums[j]<0 && nums[k]<0) return 0;
                    c=(nums[i] - nums[j]) * nums[k];
                    maxi=max(maxi,c);
                }
            }
        }
        return maxi;
    }
};