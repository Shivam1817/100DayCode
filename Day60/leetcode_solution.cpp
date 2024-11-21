//2257. Count Unguarded Cells in the Grid

class Solution {
public:
    void dfs(int row, int col,vector<vector<int>>& grid,int m,int n, int nrow, int ncol){
        while(true){
            row += nrow;
            col += ncol;
            if(row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == 1 || grid[row][col] == 0){
                break;
            }
            if (grid[row][col] == -1) {
                grid[row][col] = 2;
            }
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m,vector<int>(n,-1));
        for(auto& it:guards){
            auto i = it[0];
            auto j = it[1];
            grid[i][j] = 0;
        }
        for(auto& it:walls){
            auto i = it[0];
            auto j = it[1];
            grid[i][j] = 1;
        }
        for(auto& it:guards){
            auto i = it[0];
            auto j = it[1];
            dfs(i, j, grid, m, n, -1, 0); 
            dfs(i, j, grid, m, n, 1, 0);
            dfs(i, j, grid, m, n, 0, -1);
            dfs(i, j, grid, m, n, 0, 1);
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == -1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
