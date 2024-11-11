//Make array elements unique

class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int ans = 0;
        for (int i = 1; i < arr.size(); i++) {
            // If the current element already exists in the map
                if (arr[i] <= arr[i - 1]) {
                int increment = arr[i - 1] + 1 - arr[i];
                arr[i] += increment;  
                ans += increment;   
            }
        }
        
        return ans;
        
    }
};
