//Remove duplicates in array

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        int hash[101] = {0};
        vector<int> ans;
        for(int i = 0; i < arr.size() ; i++){
            if(hash[arr[i]] != 1){
                hash[arr[i]] = 1;
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
