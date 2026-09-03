class Solution {
public:
    bool wordPattern(string pattern, string s) {
          stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word)
            words.push_back(word);

        if (pattern.size() != words.size())
            return false;

        map<char, string> m;
        map<string, char> used;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];

            if (m.count(ch) && m[ch] != words[i])
                return false;

            if (used.count(words[i]) && used[words[i]] != ch)
                return false;

            m[ch] = words[i];
            used[words[i]] = ch;
        }

        return true;
    }
};