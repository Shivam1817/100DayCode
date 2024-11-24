//1975. Maximum Matrix Sum

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int minabsval = INT_MAX;
        int neg = 0;
        long long ans = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i = 0;i < n;i++){
            for(int j = 0 ; j < m ; j++){
                int val = matrix[i][j];
                ans += abs(val);
                minabsval = min(minabsval, abs(val));
                if(val < 0) neg++;
            }
        }
        if(neg%2 != 0){
            ans -= 2*minabsval;
        }
        return ans;
    }
};
