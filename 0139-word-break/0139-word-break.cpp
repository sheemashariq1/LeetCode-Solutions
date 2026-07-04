class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        int maxLength = 0;
        for (const string& word : wordDict) {
            maxLength = max(maxLength, (int)word.length());
        }
        int n = s.length();
        vector<bool> dp(n + 1, false);
        dp[0] = true; 
        
        for (int i = 1; i <= n; ++i) {
            for (int j = i - 1; j >= max(0, i - maxLength); --j) {
                if (dp[j] && wordSet.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break; 
                }
            }
        }
        return dp[n];
    }
};