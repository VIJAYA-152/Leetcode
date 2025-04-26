class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(auto it:nums){
           st.insert(it);
        }
        if(st.size()<n) return true;
        else
        return false;
    }
};