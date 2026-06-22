class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            int minCol = 0;
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] < matrix[i][minCol])
                    minCol = j;
            }
         int num = matrix[i][minCol];
        bool lucky = true;
            for (int k = 0; k < m; k++) {
                if (matrix[k][minCol] > num) {
                    lucky = false;
                    break;
                }
            }
            if (lucky)
                result.push_back(num);
        }
        return result;
    }
};