//Kadane's Algorithm

int maxSubarraySum(vector<int> &arr) {
        // code here...
        int ans = INT_MIN;
        int temp = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            temp += arr[i];
            ans = max(ans,temp);
            if (temp < 0) temp = 0;
        }
        return ans;
}
