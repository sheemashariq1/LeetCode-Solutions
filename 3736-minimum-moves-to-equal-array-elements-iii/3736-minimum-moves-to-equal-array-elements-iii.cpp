class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=nums[0];
        for(int x:nums){
            maxi=max(maxi,x);
        }
        int res=0;
        for(int x:nums){
            res+=maxi-x;
        }
        return res;
    }
};