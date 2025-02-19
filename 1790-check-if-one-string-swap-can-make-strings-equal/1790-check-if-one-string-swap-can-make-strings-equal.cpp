class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        int n=s1.length();
        int m=s2.length();
        if(m!=n) return false;
        vector<int>a;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])
            a.push_back(i);
        }
        if(a.size()!=2) return false;
        swap(s1[a[0]], s1[a[1]]);
        return s1==s2;
    }
};