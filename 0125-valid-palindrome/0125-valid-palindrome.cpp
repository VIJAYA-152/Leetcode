 

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;  // Skip non-alphanumeric characters
            }
            while (left < right && !isalnum(s[right])) {
                right--;  // Skip non-alphanumeric characters
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;  // Mismatch found
            }

            left++;
            right--;
        }

        return true;  // If loop completes, it's a palindrome
    }
};
 