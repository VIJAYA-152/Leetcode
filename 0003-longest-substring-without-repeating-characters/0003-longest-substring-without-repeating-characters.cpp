 

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int n=s.length();
       if(n==0) return 0;
        int maxi=INT_MIN;
         for(int i=0;i<n;i++){
           int hash[256]={0};
            int len=0;
            for(int j=i;j<n;j++){
             
                if(hash[s[j]]==1)
                break;
                len=j-i+1;
                maxi=max(maxi,len);
                hash[s[j]]=1;
              }
         }
         return maxi;
    }
};
