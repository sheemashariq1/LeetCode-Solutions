class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0;
        int write = 0;
        int n = chars.size();
        
        while (read < n) {
            char current_char = chars[read];
            int count = 0;
            while (read < n && chars[read] == current_char) {
                read++;
                count++;
            }
            chars[write++] = current_char;
            if (count > 1) {
                std::string count_str = std::to_string(count);
                for (char digit : count_str) {
                    chars[write++] = digit;
                }
            }
        }
        return write;
    }
};