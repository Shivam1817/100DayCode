//Subarray range with given sum

class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int sum = 0, ans = 0;
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0 ; i< n ; i++){
            sum += arr[i];
            if(sum== tar) ans++;
            if(mp.find(sum-tar) != mp.end()){
                ans += mp[sum-tar];
            }
            mp[sum]++;
        }
        return ans;
    }
};
