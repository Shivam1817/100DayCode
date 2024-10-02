//Rotate and delete

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        if(n==1) return arr[0];
        if(n&1) n+=3;
        int in = (n+3)/4;
        return arr[in];
    }
};
