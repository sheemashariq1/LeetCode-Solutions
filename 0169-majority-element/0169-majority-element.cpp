class Solution {
public:
 int majority(vector<int>& nums, vector<int>::iterator left, vector<int>::iterator right) {
        if (next(left) == right) {
            return *left;
        }
        auto mid = left + distance(left, right) / 2;
        int leftMajority = majority(nums, left, mid);
        int rightMajority = majority(nums, mid, right);
        if (leftMajority == rightMajority) {
            return leftMajority;
        }
        int leftCount = count(left, right, leftMajority);
        int rightCount = count(left, right, rightMajority);

        return (leftCount > rightCount) ? leftMajority : rightMajority;
    }
    int majorityElement(vector<int>& nums) {
          return majority(nums, nums.begin(), nums.end());
    }
};