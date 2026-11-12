class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1;
        int maxLength = 1;
        for (int pos = 0; pos < nums.size() - 1; pos++) {
            if (nums[pos + 1] > nums[pos]) {
                inc++;
                dec = 1;  
            } else if (nums[pos + 1] < nums[pos]) {
                dec++;
                inc = 1;  
            } else {
                inc = 1;
                dec = 1;}
            maxLength = max(maxLength, max(inc, dec));}
           return maxLength;
    }
};