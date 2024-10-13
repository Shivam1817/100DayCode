//632. Smallest Range Covering Elements from K Lists

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<pair<int,int>> v;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j : nums[i]){
                v.push_back({j,i});
            }
        }
        sort(v.begin(),v.end());
        int i = 0 , k = 0;
        vector<int> ans;
        unordered_map<int,int> count;
        for(size_t j = 0 ; j < v.size() ; ++j){
            if(!count[v[j].second]++) ++k;
            if(k == nums.size()){
                while(count[v[i].second] > 1) --count[v[i++].second];
                if(ans.empty() || ans[1] - ans[0] > v[j].first - v[i].first){
                    ans = vector<int>{v[i].first,v[j].first};
                }
            }
        }
        return ans;
    }
};
