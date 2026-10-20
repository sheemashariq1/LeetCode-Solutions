class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> lmax(n + 1, 0);
        vector<int> rmin(n + 1, 100001);
        vector<int> dec(n, 0);
      
        for (int i = 0; i < n; i++)
            lmax[i + 1] = max(lmax[i], nums[i]);
        for (int i = n - 1; i >= 0; i--)
            rmin[i] = min(rmin[i + 1], nums[i]);
        for (int i = 1; i < n; i++)
            dec[i] = dec[i - 1] + (nums[i - 1] > nums[i]);
        int res = 0;
        for (int k = 1; k <= n / k; k++) {
            if (n % k != 0)
            continue;
            int other = n / k;
            for (int t = 0; t < 2; t++) {
                int len = (t == 0 ? k : other);
                if (t == 1 && k == other)
                continue;
                bool ok = true;
                for (int start = 0; start < n; start += len) {
                    int end = start + len - 1;
                    int count = dec[end] - dec[start];
                    if (nums[end] > nums[start])
                        count++;
                    if (count > 1 || lmax[start] > rmin[start]) {
                        ok = false;
                        break;}
                }
                if (ok)
                    res += len;}}
        return res;
    }
};