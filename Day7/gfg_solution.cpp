class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int ans = 0;
        for(int i = 0 ; i  < arr.size() ;i++){
            if(arr[i]%k != 0) ans += arr[i]/k + 1;
            else ans += arr[i]/k;
        }
        return ans;
    }
};
