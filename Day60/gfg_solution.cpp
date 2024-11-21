//Stock Buy and Sell – Multiple Transaction Allowed

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(prices[i] > prices[i-1]){
                ans += prices[i] - prices[i-1];
            }
        }
        return ans;
    }
};
