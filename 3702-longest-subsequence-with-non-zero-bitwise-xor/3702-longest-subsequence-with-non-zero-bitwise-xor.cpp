class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
           int xr = 0;
        
        for (int x : nums) {
            xr ^= x;
        }
        
        if (xr != 0)
            return nums.size();
        
        // Total XOR is 0
        for (int x : nums) {
            if (x != 0)
                return nums.size() - 1;
        }
        
        return 0;
    }
};