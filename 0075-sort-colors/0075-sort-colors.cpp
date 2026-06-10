class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;

        for (int x : nums) {
            if (x == 0) count0++;
            else if (x == 1) count1++;
            else count2++;
        }

        int i = 0;

        for (int j = 0; j < count0; j++)
            nums[i++] = 0;

        for (int j = 0; j < count1; j++)
            nums[i++] = 1;

        for (int j = 0; j < count2; j++)
            nums[i++] = 2;
    }
};