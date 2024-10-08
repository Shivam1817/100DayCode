//Largest Pair Sum

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int pair1 = INT_MIN;
        int pair2 = INT_MIN;
        for(int i = 0; i < arr.size();i++){
            if(arr[i] > pair1){
                pair2 = pair1;
                pair1 = arr[i];
            }
            else if(arr[i] > pair2) pair2 = arr[i];
        }
        return pair1+pair2;
    }
};
