class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>sorted(m+n);
        int left=0,right=0;
        int index=0;
        while(left<m && right<n){
            if(nums1[left]>=nums2[right]){
            sorted[index]=nums2[right];
            
            index++;
            right++;
            }
            else if(nums1[left]<=nums2[right]){ 
            sorted[index]=nums1[left];
           
            index++;
             left++;}
        }
        while(left<m){
            sorted[index++]=nums1[left++];
        }
        while(right<n){
            sorted[index++]=nums2[right++];
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=sorted[i];
        }
         
        
    }
};

 