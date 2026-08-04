class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        vector<int> result;
        for (int i = 1; i < nums.size(); i++) {
            for (int j = nums[i - 1] + 1; j < nums[i]; j++) {
                result.push_back(j);
            }
        }
        return result;
    }
};