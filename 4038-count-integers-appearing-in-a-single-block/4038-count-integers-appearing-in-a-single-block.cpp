class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
            unordered_set<int> seen;
        unordered_set<int> bad;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i]) && nums[i] != nums[i - 1]) {
                bad.insert(nums[i]);
            }
            seen.insert(nums[i]);
        }
        return seen.size() - bad.size();
    }
};