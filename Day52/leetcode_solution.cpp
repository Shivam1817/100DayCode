//2563. Count the Number of Fair Pairs

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long ans = 0;
        for(long long i = 0; i < nums.size() ;i++){
            auto up = upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i]);
            auto low = lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i]);
            ans += up-low;
        }
        return ans;
    }
};
