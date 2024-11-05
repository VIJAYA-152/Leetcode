class Solution {
public:
    int minChanges(string s) {
        int n = s.length();
        int c = 0, d = 0;

        // Count occurrences of '1' and '0'
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                c++;
            else
                d++;
        }

        // If the string is entirely '1's or '0's, no changes are needed
        if (c > 0 && d == 0)
            return 0;
        else if (c == 0 && d > 0)
            return 0;

        // Otherwise, return the minimum count of '1's or '0's for minimum changes
        return min(c, d);
    }
};
