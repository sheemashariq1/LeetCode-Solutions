
class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> divisors;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {
                    divisors.push_back(n / i);
                }} }
        int res = 0;
        for (int k : divisors) {
            bool ok = true;
            int prevMax = 0;
            for (int i = 0; i < n; i += k) {
                int dec = 0;
                int decIdx = -1;

                // Count decreasing adjacent pairs
                for (int j = 0; j < k - 1; j++) {
                    if (nums[i + j] > nums[i + j + 1]) {
                        dec++;
                        decIdx = j;
                    }
                }
                int blockMin, blockMax;
                if (dec == 0) {
                    blockMin = nums[i];
                    blockMax = nums[i + k - 1];
                }
                else if (dec == 1) {
                    // cyclic rotation sort
                    if (nums[i + k - 1] > nums[i]) {
                        ok = false;
                        break;
                    }

                    blockMin = nums[i + decIdx + 1];
                    blockMax = nums[i + decIdx];
                }
                else{
                    ok = false;
                    break;}
                if (i > 0 && blockMin < prevMax) {
                    ok = false;
                    break;
                }
                prevMax = blockMax;
            }
            if (ok) {
                res += k;}}
        return res;
    }
};
