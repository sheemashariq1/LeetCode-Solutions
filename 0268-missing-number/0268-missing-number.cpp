class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       unordered_set<int> mp;
       for(int i=0;i<n;i++)
       mp.insert(nums[i]);
       for(int i = 0; i <= n; i++) {
        if(mp.find(i) == mp.end()) 
                return i;
       }
       return -1;
    }
};