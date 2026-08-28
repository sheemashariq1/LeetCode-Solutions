class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int x = abs(nums[i]);
            nums[x - 1] = -abs(nums[x - 1]);
        }

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result;
}
};