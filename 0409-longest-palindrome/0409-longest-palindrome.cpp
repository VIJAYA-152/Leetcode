class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        map<char,int>mp;
        int length=0;
        bool ist=false;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            int count=i.second;
            if(count%2==0)
            length+=count;
            else{
            length+=count-1;
            ist=true;
            }
           
        }
         if(ist)
            length+=1;
        return length;

        
    }
};