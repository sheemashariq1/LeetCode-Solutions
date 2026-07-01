class Solution {
public:
  int majority(vector<int>& nums, int l, int h) {
        if (l == h) return nums[l];  // base case
        int mid = l + (h - l) / 2;
        int left = majority(nums, l, mid);
        int right = majority(nums, mid + 1, h);
        if (left == right) return left;
        int leftCount = 0, rightCount = 0;
        for (int i = l; i <= h; i++) {
            if (nums[i] == left) leftCount++;
            if (nums[i] == right) rightCount++;
        }
        return leftCount > rightCount ? left : right;
    }
    int majorityElement(vector<int>& nums) {
        return majority(nums, 0, nums.size() - 1);
    }
};