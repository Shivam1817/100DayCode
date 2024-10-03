//1590. Make Sum Divisible by P
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int sum = 0;
        int cnt = 0;
        for(auto i:nums){
            sum = (sum+i)%p;
        }
        int rem = sum%p;
        if(rem == 0) return 0;
        unordered_map<int,int> presums;
        presums[0] = -1;
        long subsum = 0;
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            subsum += nums[i];
            long curr = subsum%p;
            int target = ((curr-rem)%p+p)%p;
            if(presums.contains(target)){
                ans = min(ans,i-presums[target]);
            }
            presums[curr] = i;
        }
        return (ans == INT_MAX || ans == nums.size()) ? -1 : ans;
    }
};
