class Solution {
public:
 int backtrack(int x, int y, int remaining, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == -1) {
            return 0;
        }
        if (grid[x][y] == 2) {
            return remaining == 0 ? 1 : 0;
        }
        int originalValue = grid[x][y];
        grid[x][y] = -1;
        int paths = 0;
        paths += backtrack(x + 1, y, remaining - 1, grid);
        paths += backtrack(x - 1, y, remaining - 1, grid); 
        paths += backtrack(x, y + 1, remaining - 1, grid); 
        paths += backtrack(x, y - 1, remaining - 1, grid); 
        grid[x][y] = originalValue;
        return paths;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int startX = 0, startY = 0;
        int emptySquares = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    startX = i;
                    startY = j;
                    emptySquares++; 
                } else if (grid[i][j] == 0) {
                    emptySquares++; 
                }
            }
        }
        return backtrack(startX, startY, emptySquares, grid);
    }

};