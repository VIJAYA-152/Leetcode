class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>1)
             return it.first;
        }
        return -1;
    }
};