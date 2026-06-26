class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    int count = 0;
    for (string word : words) {
        int found = 1;
        for (char c : word) {
            if (allowed.find(c) == string::npos) { 
                found = 0;
            }
        }
        if (found == 1) {
            count++;
        }
    }
    return count;
    }
};