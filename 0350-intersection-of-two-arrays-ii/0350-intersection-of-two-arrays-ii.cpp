class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> st;
        for(int i=0;i<nums1.size();i++){
            st[nums1[i]]++;
        }
       for (int i = 0; i < nums2.size(); i++) {
            if (st[nums2[i]] > 0) {
                result.push_back(nums2[i]);
                st[nums2[i]]--;
            }
        }
        return result;
    }
};