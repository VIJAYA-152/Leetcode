class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
           int num=nums1[i];
           int greater=-1;
           bool found=false;
           for(int j=0;j<nums2.size();j++){
             if (nums2[j] == num) {
                    found = true; 
                }
               else if(found && nums2[j]>num){
                greater=nums2[j];
                break;
               }
           }
        ans.push_back(greater);
        } 
        return ans;
    }
};