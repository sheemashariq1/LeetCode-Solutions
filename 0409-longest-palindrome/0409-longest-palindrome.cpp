class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0}; 
    for (char ch : s) {
        freq[ch]++;
    }

    int length = 0;
    int oddCount = 0;   
    for (int i = 0; i < 128; i++) {
        length += freq[i];          
        if (freq[i] % 2 == 1) {
            oddCount++;
            length--;             
        }
    }
    return oddCount > 0 ? length + 1 : length;
    }
};