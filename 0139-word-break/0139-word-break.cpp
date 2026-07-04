class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> result(wordDict.begin(), wordDict.end());
        unordered_map<int, bool> memo; 
        return solve(s, 0, result, memo);
    }
    bool solve(string& s, int start, unordered_set<string>& result,
               unordered_map<int, bool>& memo) {
        if (start == s.size()) return true;
        if (memo.count(start)) return memo[start];
        for (int end = start + 1; end <= s.size(); end++) {
            string word = s.substr(start, end - start);
            if (result.count(word) && solve(s, end, result, memo)) {
                return memo[start] = true;
            }
        }
        return memo[start] = false;
    }
};