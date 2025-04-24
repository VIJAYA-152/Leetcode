class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st;
        int count=0;
        int n=nums.size();
        for(auto it:nums){
            st.insert(it);
        }
        int a=st.size();
        for(int i=0;i<n;i++){
            set<int>st2;
            for(int j=i;j<n;j++){
                 st2.insert(nums[j]);
                 if(st2.size()==a)
                 count++;
            }
        }
        return count;
    }
};