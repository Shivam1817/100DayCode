class Solution {
  public:
    int solver(int k,vector<int>& arr,int ind,vector<int>& dp){
        int n = arr.size();
        if(ind >= n-1) return 0;
        if(dp[ind] != -1) return dp[ind];
        int cost = INT_MAX;
        for(int i = 1 ; i <= k ; i++){
            if(ind+i < n){
                int jump_cost = solver(k,arr,ind+i,dp) + abs(arr[ind+i]-arr[ind]);
                cost = min(cost, jump_cost);
            }
        }    
        return dp[ind] = cost;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int> dp(n+1,-1);
        return solver(k,arr,0,dp);;
    }
};
