//Stock Buy and Sell – Max one Transaction Allowed

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int ans = 0;
        int buy = prices[0];
        int sell = 0;
        for(int i = 1; i < prices.size();i++){
            if(prices[i] > buy){
                sell = prices[i];
                ans = max(ans,sell-buy);
            }
            else if(prices[i] < buy){
                buy = prices[i];
            }
        }
        return ans;
    }
};
