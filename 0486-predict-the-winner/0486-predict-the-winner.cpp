class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return true;
        vector<int> result(nums);
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                result[j] = max(nums[i] - result[j], nums[j] - result[j - 1]);
            }
        }
        return result[n - 1] >= 0;
    }
};