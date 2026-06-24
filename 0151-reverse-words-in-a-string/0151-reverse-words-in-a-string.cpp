class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string word = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word = s[i] + word;
            }
            else if (!word.empty()) {
                if (!result.empty()) result += " ";
                result += word;
                word = "";
            }
        }
            if (!word.empty()) {
            if (!result.empty()) result += " ";
            result += word;
        }
        return result;
    }
};