class Solution {
public:
int m, n;

    void solve(vector<vector<int>>& image, int i, int j, int oldcolor, int newcolor) {
        if (i < 0 || i >= m || j < 0 || j >= n || image[i][j] != oldcolor)
            return;
        image[i][j] = newcolor;  
        solve(image, i+1, j, oldcolor, newcolor); 
        solve(image, i-1, j, oldcolor, newcolor);  
        solve(image, i, j+1, oldcolor, newcolor);  
        solve(image, i, j-1, oldcolor, newcolor);  
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        int oldColor = image[sr][sc];

        if (oldColor != color)  
            solve(image, sr, sc, oldColor, color);
        return image;
    }
};