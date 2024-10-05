//Not a subset sum

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        int cnt = 1;
        for(auto i:arr){
            if(cnt < i) return cnt;
            cnt += i;
        }
        return cnt;
    }
};
