class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x : nums)
            mp[x]++;
        int degree = 0;
        for (auto p : mp) 
            degree = max(degree, p.second);
        int ans=nums.size();
        for (auto p : mp) {
            if (p.second == degree) {
        int x = p.first;
        int first = -1;
        int last = -1;
        for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == x) {
                    if (first == -1)
                            first = i;
            last = i;
                    }
                }
            ans = min(ans, last - first + 1);
            }
        }
        return ans;
    }
};