//Sub-arrays with equal number of occurences


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        unordered_map<int,int>mp;
        int one = 0;
        int two = 0;
        mp[0] = 1;
        int cnt = 0;
        for(auto it:arr){
            if(it == x) one++;
            if(it == y) two++;
            cnt += mp[one-two];
            mp[one-two]++;
        }
        return cnt;
    }
};
