class Solution {
public:
    int minimumPushes(string word) {
         int total_pushes = 0;
        int len = word.length();
        for (int i = 0; i < len; i++) {
            total_pushes += (i / 8) + 1;
        }
        return total_pushes;
    }
};
