class Solution {
public:
 bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {

                if (board[row][col] != '.') continue; 
                for (char num = '1'; num <= '9'; num++) {
                    bool valid = true;

                    for (int i = 0; i < 9; i++) {
                        if (board[row][i] == num) valid = false;
                        if (board[i][col] == num) valid = false;
                        if (board[3*(row/3) + i/3][3*(col/3) + i%3] == num) valid = false;
                    }

                    if (!valid) continue; 
                    board[row][col] = num;       

                    if (solve(board)) return true; 

                    board[row][col] = '.';       
                }
                return false; 
            }
        }
        return true; 
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};