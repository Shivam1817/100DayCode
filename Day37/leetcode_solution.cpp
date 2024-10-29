//2684. Maximum Number of Moves in a Grid

class Solution {
public:
    int solver(vector<vector<int>>& grid,int n,int m,vector<vector<int>>&dp,int i, int j){
        if(j == m-1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
            if(j+1 < m)if(grid[i][j+1] > grid[i][j]) ans = max(ans,1 + solver(grid,n,m,dp,i,j+1));
            if(i-1 >= 0 && j+1 < m)if(grid[i-1][j+1] > grid[i][j]) ans = max(ans,1 + solver(grid,n,m,dp,i-1,j+1));
            if(i+1 < n && j+1 < m)if(grid[i+1][j+1] > grid[i][j]) ans = max(ans,1 + solver(grid,n,m,dp,i+1,j+1));
        return dp[i][j] = ans;
    }
    int maxMoves(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int maxMoves = 0;
        for (int i = 0; i < n; i++) {
            maxMoves = max(maxMoves, solver(grid, n, m, dp, i, 0));
        }
        return maxMoves;
    }
};
