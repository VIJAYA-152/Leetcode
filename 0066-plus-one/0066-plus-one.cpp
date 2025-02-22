class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // Traverse from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;  // Increment and return if no carry
                return digits;
            }
            digits[i] = 0;  // Set to 0 if there's a carry
        }
        // If all digits were 9, add 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
