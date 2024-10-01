class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<int> mp(k,0);
        for(int i = 0 ; i < arr.size() ; i++){
            mp[(arr[i]%k + k)%k]++;
        }
        if(mp[0]&1) return false;

        for(int i = 1 ; i < k/2+1 ; i++){
            if(mp[i] != mp[k-i]) return false;
        }
        return true;
    }
};
