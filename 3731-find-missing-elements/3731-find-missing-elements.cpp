class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     vector<int>result;
        sort(nums.begin(),nums.end());
        int start=nums[0];
        int end=nums.back();
        set<int>st(nums.begin(),nums.end());
        for(int i=start+1;i<=end-1;i++){
            if(st.count(i)==0)
            result.push_back(i);
        }
        return result;
    }
};