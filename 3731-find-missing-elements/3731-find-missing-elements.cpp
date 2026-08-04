class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
    int mn = nums[0], mx = nums[0];
        unordered_set<int> st;
        for (int x : nums) {
            st.insert(x);
            mn = min(mn, x);
            mx = max(mx, x);
        }
        vector<int> result;

        for (int i = mn; i <= mx; i++) {
            if (!st.count(i))
                result.push_back(i);
        }
        return result;
    }
};