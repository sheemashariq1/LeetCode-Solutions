class Solution {
public:
    bool check(vector<int>& nums, int k) {
        int n = nums.size();
        int prev_max = 0;
        for (int l = 0; l < n; l += k) {
            int block_min = nums[l];
            int block_max = nums[l];
            int drops = 0;
            for (int j = 0; j < k; j++) {
                int current = l + j;
                int next = l + (j + 1) % k;
                block_min = min(block_min, nums[current]);
                block_max = max(block_max, nums[current]);
                if (nums[current] > nums[next]) {
                    drops++;
                }
            }
            if (drops > 1 || prev_max > block_min) {
                return false;
            }
            prev_max = block_max;
        }
        return true;
    }
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) {
                continue;
            }
            if (check(nums, k)) {
                res += k;
            }
        }
        return res;
    }
};