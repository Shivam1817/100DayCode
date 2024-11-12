//2070. Most Beautiful Item for Each Query
class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<pair<int,int>> q;
        for(int i = 0 ; i  < queries.size() ; i++){
            q.push_back({queries[i],i});
        }
        sort(q.begin(),q.end());
        vector<int> ans(queries.size(),0);
        int maxbeauty = 0;
        int j = 0;
        for(auto &it:q){
            auto query = it.first;
            auto ind = it.second;
            while(j < items.size() && items[j][0] <= query){
                maxbeauty = max(maxbeauty,items[j][1]);
                j++;
            }
            ans[ind] = maxbeauty;
        }
        return ans;
    }
};
