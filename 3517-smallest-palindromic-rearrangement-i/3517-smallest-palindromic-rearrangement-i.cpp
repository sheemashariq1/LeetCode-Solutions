class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int half_len = n / 2;
        string left = s.substr(0, half_len);
        sort(left.begin(), left.end());
        string right = left;
        reverse(right.begin(), right.end());
        if (n % 2 != 0) {
            return left + s[n / 2] + right;
        } else {
            return left + right;
        }
    }
};