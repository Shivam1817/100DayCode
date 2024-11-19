//2461. Maximum Sum of Distinct Subarrays With Length K

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        long long sum = 0, ans  = 0;
        int n = nums.size();
        int j = 0;
        for(int i = 0; i < n ; i++){
            while(st.count(nums[i]) || st.size() == k){
                sum -= nums[j];
                st.erase(nums[j]);
                j++;
            }
            sum += nums[i];
            st.insert(nums[i]);
            if(st.size() == k) ans = max(ans,sum);
        }
        return ans;
    }
};
