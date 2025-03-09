class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>a,b;
        for(char ch:word1){
            mp1[ch]++;
        }
        for(char ch:word2){
            mp2[ch]++;
        }
         if (mp1.size() != mp2.size()) return false;
        for (auto it : mp1) {
            if (mp2.find(it.first) == mp2.end()) return false;
        }
        for(auto it:mp1){
            a.push_back(it.second);
        }
        for(auto it:mp2){
            b.push_back(it.second);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;


    }
};