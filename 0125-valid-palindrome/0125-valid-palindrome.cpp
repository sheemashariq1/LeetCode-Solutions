class Solution {
public:
    bool isPalindrome(string s) {
       string clr = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                clr += tolower(ch);
            }
        }
        string rev = clr;
        reverse(rev.begin(), rev.end());
        return clr == rev;
    }
};