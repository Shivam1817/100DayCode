//Find the number of islands
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i, int j,vector<vector<char>>& grid,vector<vector<int>>& dir){
        if(i<0 || i>= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j]-'0' == 0) return;
        
        grid[i][j]='0';
        for(int k=0;k< dir.size();k++){
            int x=i+dir[k][0];
            int y=j+dir[k][1];
            dfs(x,y,grid,dir);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        vector<vector<int>> dir = {{-1,0},{-1,1},{-1,-1},{0,1},{0,-1},{1,1},{1,-1},{1,0}};
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] - '0' == 1){
                    dfs(i,j,grid,dir);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
