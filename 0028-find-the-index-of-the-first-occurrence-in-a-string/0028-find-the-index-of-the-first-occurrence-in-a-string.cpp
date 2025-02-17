class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(n<m) return -1;
       return haystack.find(needle);
    }
};