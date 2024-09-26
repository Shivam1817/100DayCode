class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int cnt=0;
        int ans = 0;
        for(int i = 1 ; i < arr.size();i++){
            if(arr[i-1] < arr[i]){
                cnt++;
            }
            else{
                cnt = 0;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
