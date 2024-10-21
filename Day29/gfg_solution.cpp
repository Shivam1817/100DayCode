//Split the Array

class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int ans = 0;
        for(auto i:arr) ans = ans^i;
        if(ans == 0) return (1<<(arr.size()-1))-1;
        return 0;
    }
};
