//Find All Triplets with Zero Sum

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>> ans;
        int n = arr.size();
        unordered_map<int,vector<int>> mp;
        for(int i = 0; i < n ; i++) mp[arr[i]].push_back(i);
         for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int num = -1*(arr[i]+arr[j]);
                if(mp.find(num) != mp.end()){
                    for(auto it: mp[num]){
                        if(it > j) ans.push_back({i, j, it});
                    }
                }
            }
        }
        return ans;
    }
};
