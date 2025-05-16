class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>a;
        if(words.size()==1){
            for(auto it:words){
                a.push_back(it);
                return a;
                break;
            }
        }
        set<char>st;
        int n=groups.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i!=j)
                a.push_back(words[i]);
                a.push_back(words[j]);
            }
        }
        for(auto it:a){
            st.insert(it);
        }
        return a;
    }
};