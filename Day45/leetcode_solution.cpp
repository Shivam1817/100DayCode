//3011. Find if Array Can Be Sorted

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int> ans;
        vector<pair<int,int>>t;
        for(auto it:nums){
            int bits = __builtin_popcount(it);
            if(!t.empty() && t.back().second == bits) t.push_back({it,bits});
            else{
                sort(t.begin(),t.end());
                for(auto p:t){
                    ans.push_back(p.first);
                }
                t.clear();
                t.push_back({it,bits});
            }
        }
        sort(t.begin(),t.end());
        for(auto p:t) ans.push_back(p.first);
        return is_sorted(ans.begin(),ans.end());
    }
};
