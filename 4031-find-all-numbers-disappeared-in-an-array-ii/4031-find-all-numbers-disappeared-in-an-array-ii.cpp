class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        long curr =lower;
        for(int num:nums){
            if(num<curr)
            continue;
            if(num>upper)
            break;
            if(num>curr){
                result.push_back({(int)curr,num-1});
            }
            curr=(long) num+1;
        }
            if(curr<=upper){
                result.push_back({(int)curr,upper});
            }
            return result;
        }
};