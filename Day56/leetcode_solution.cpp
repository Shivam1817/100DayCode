//862. Shortest Subarray with Sum at Least K

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long> prefix(n+1,0);
       
        for(int i = 0 ; i < n ; i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
        int ans = INT_MAX;
        deque<int> dp;
        for(int i = 0; i <= n ; i++){
            while(!dp.empty() && prefix[i] - prefix[dp.front()] >= k){
                ans = min(ans,i-dp.front());
                dp.pop_front();
            }
            while(!dp.empty() && prefix[i] <= prefix[dp.back()]){
                dp.pop_back();
            }
            dp.push_back(i);
        }
        
        
        return ans == INT_MAX?-1:ans;
    }
};
