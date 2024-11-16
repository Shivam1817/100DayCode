//3254. Find the Power of K-Size Subarrays I

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1,0);
        for(int i = 0; i < n-k+1 ; i++){
            for(int j = i ; j < i+k-1  ; j++){
                if(nums[j] != nums[j+1]-1){
                    ans[i] = -1;
                }
            }
            if(ans[i] != -1) ans[i] = nums[i+k-1];
        }
        return ans;
    }
};
