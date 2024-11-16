//Move All Zeroes to End

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int j = 0;
        for(int i = 0 ; i < n; i++){
            if(arr[i] != 0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};
