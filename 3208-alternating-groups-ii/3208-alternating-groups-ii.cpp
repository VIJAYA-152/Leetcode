class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        if (k > n) return 0; // Edge case: k cannot be larger than array size
        
        int count = 0;

        // Function to check if a k-length window is alternating
        auto isAlternating = [&](int start) {
            for (int i = 1; i < k; i++) {
                if (colors[(start + i) % n] == colors[(start + i - 1) % n]) {
                    return false;
                }
            }
            return true;
        };

        // Step 1: Check the first window
        if (isAlternating(0)) count++;

        // Step 2: Slide the window across the circular array
        for (int i = 1; i < n; i++) {
            if (isAlternating(i)) count++;
        }

        return count;
    }
};
