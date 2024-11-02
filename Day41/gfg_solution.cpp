//Kth distance

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        for(int i = 0 ; i < arr.size() ; i++){
            for(int j = i+1 ; j <= i+k && j < arr.size() ; j++){
                if(arr[i] == arr[j]) return true;
            }
        }
        return false;
    }
};
