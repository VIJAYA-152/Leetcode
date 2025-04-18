class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(char c:t){
            if(mp[c]<=0)
            return false;
            mp[c]--;
        }
        return true;
    }
};