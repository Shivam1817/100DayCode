//Max distance between same elements

class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int maxi = 0;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < arr.size() ; i++){
            if(mp.count(arr[i])) maxi = max(maxi,i-mp[arr[i]]);
            else mp[arr[i]] = i;
        }
        return maxi;
    }
};
