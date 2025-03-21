class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1) return it.first;
        }
        return 0;
    }
};