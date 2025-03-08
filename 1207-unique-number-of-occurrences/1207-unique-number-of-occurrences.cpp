class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        vector<int>a;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
             a.push_back(it.second);
        }
        unordered_set<int> s(a.begin(), a.end());
        return s.size() == a.size(); 
         
    }
};