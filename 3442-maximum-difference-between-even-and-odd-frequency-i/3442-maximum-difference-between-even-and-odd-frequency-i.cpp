class Solution {
public:
    int maxDifference(string s) {
        map<char,int>mp;
        //int n=s.lenth();
        vector<int>a,b;
        int maxi=INT_MIN;
        
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second %2==0)
            a.push_back(it.second);
            else
            b.push_back(it.second);
        }
        int diff=0;
       for(auto it:a){
        for(auto i:b){
            diff=i-it;
            maxi=max(maxi,diff);
        }
       }
      return maxi;
    }
};