class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0; 
        int i = 0;     
        while (i < chars.size()) {
            char currentChar = chars[i];  
            int count = 0;
            while (i < chars.size() && chars[i] == currentChar) {
                count++;
                i++;
            } 
            chars[write++] = currentChar;
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        return write; 
    }
};