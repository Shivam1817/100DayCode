//Reverse an Array

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int st = 0, end = arr.size() - 1;
        while(st<= end){
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
    }
};
