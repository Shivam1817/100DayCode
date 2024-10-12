//Two Smallests in Every Subarray

class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        // code here
        int sum = INT_MIN;
        int n = arr.size();
        if(n<=1) return -1;
        for(int i = 0; i < n-1 ; i++) sum = max(sum , arr[i]+arr[i+1]);
        return sum;
    }
};
