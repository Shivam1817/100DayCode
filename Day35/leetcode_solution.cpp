//1277. Count Square Submatrices with All Ones

class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int m = mat.size() , n = mat[0].size();
        int cnt = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i>0 && j > 0 && mat[i][j]){
                    mat[i][j] = max(mat[i][j] , 1+min({mat[i-1][j],mat[i][j-1],mat[i-1][j-1]}));
                }
                cnt += mat[i][j];
            }
        }
        return cnt;
    }
};
