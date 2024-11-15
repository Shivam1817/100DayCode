//Second Largest

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        sort(arr.begin(),arr.end());
        int ans = -1;
        for(int i = arr.size()-2 ; i >= 0 ; i--){
            if(arr[i] < arr[i+1]){
                ans = arr[i];
                break;
            }
        }
        return ans;
    }
};
