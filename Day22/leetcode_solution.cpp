//2530. Maximal Score After Applying K Operations

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        priority_queue<long long>pq;
        long long ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
        }
        while(k){
            auto it = pq.top();
            pq.pop();
            ans += it;
            it = ceil(it/3.0);
            pq.push(it);
            k--;
        }
        return ans;
    }
};
