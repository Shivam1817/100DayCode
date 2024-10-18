//Single Number
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        for(int i = 0; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second%2) return it.first;
        }
        return -1;
    }
};
