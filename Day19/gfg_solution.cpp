//Reorganize The Array

class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int> ans(n,-1);
        map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        for(int i = 0 ; i < n ; i++){
            if(mp.find(i) != mp.end()) ans[i] = i;
        }
        return ans;
    }
};
