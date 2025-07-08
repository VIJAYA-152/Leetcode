class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        int maxi=-1;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.first==it.second){
                maxi=max(maxi,it.second);
            }
        }
        return maxi;
    }
};