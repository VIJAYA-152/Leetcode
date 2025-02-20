class Solution {
public:
    string reverseWords(string s) {
        string temp = "";             // Temporary string to store a word
        stack<string> st;             // Stack to store words in reverse order
        
        // Step 1: Traverse the string and push words onto the stack
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == ' ') {           // Check if the character is a space
                if (temp != "") {      // If temp is not empty, push the word onto the stack
                    st.push(temp);
                    temp = "";         // Reset temp for the next word
                }
            } else {
                temp += ch;            // Accumulate characters into temp
            }
        }

        // Step 2: Push the last word onto the stack (if any)
        if (temp != "") {
            st.push(temp);
        }

        // Step 3: Pop words from the stack to form the result string
        string ans = "";
        while (!st.empty()) {
            ans += st.top();           // Append the top word from the stack
            st.pop();
            if (!st.empty()) {
                ans += " ";            // Add a space if there are more words left
            }
        }

        return ans;                    // Return the final reversed string
    }
};