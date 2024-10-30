//Pairs with difference k

class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        int hash[1000002] = {0};
        for(int i = 0 ; i <  arr.size() ; i++){
            hash[arr[i]]++;
        }
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            if(hash[arr[i]+k] != 0) ans += hash[arr[i]+k];
        }
        return ans;
    }
};
