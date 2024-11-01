//Swap and Maximize

class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long ans = 0;
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        for(int i = 0 , j =0; i < n ; i = i+2, j++){
            arr[i] = temp[j];
        }
        for(int i = 1, j = n-1 ; i < n ; i = i+2, j--){
            arr[i] = temp[j];
        }
        for(int i = 0; i < n-1 ; i++){
            ans += abs(arr[i]-arr[i+1]);
        }
        ans += abs(arr[0]-arr[n-1]);
        return ans;
    }
};
