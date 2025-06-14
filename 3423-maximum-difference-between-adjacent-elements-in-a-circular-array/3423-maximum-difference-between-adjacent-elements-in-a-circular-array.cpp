class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            int diff=0;
            int j = (i + 1) % n;
                diff=abs(nums[i]-nums[j]);
                maxi=max(maxi,diff);
            }
           return maxi;
        }
       
      
    
};