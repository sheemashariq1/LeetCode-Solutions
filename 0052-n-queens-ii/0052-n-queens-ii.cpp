class Solution {
public:
 void solve(int col, int n, int &count, vector<int> &leftRow, 
               vector<int> &lower, vector<int> &upper) {
        if (col == n) {
            count++;
            return;
        }
        for (int row = 0; row < n; row++) {
            if (leftRow[row] == 0 && 
                lower[row + col] == 0 && 
                upper[n - 1 + col - row] == 0) {
                leftRow[row] = 1;
                lower[row + col] = 1;
                upper[n - 1 + col - row] = 1;
                solve(col + 1, n, count, leftRow, lower, upper);
                leftRow[row] = 0;
                lower[row + col] = 0;
                upper[n - 1 + col - row] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        int count = 0;
        vector<int> leftRow(n, 0);
        vector<int> lower(2 * n - 1, 0);
        vector<int> upper(2 * n - 1, 0);
        solve(0, n, count, leftRow, lower, upper);
        return count;
    }
};