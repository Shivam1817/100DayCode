int minExtraChar(string s, vector<string>& dict) { 
    int n = s.length(); 
    vector<int> dp(n+1, 0); 
    for(int i = n-1; i>=0 ; i--) {
        dp[i] = dp[i+1] + 1;
        for(int j = 1; j <= n-i ; j++) {
            if(dict.find(s.substr(i,j)) != dict.end()) 
                dp[i] = min(dp[i],dp[i+j]);
        }
    }
    return dp[0]; 
}
