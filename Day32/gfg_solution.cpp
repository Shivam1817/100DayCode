//Modify the Array

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        for(int i = 0; i < n-1; i++){
            if(arr[i] == arr[i+1]){
                arr[i] = 2*arr[i+1];
                arr[i+1] = 0;
            }
        }
        int j = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                arr[j] = arr[i];
                j++;
            }
        }
        for(int i = j ; i < n ; i++){
            arr[i] = 0;
        }
        return arr;
    }
};
