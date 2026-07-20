class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> mygrid = grid; 
        
        while (k > 0) {
            vector<vector<int>> temp = mygrid;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (j + 1 < n) {
                        mygrid[i][j + 1] = temp[i][j];
                    } else if (i + 1 < m) {
                        mygrid[i + 1][0] = temp[i][j];
                    } else {
                        mygrid[0][0] = temp[i][j];
                    }
                }
            }
            k--;
        }
        return mygrid; 
    }
};
