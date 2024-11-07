//2275. Largest Combination With Bitwise AND Greater Than Zero

class Solution {
public:
    int largestCombination(vector<int>& candi) {
        int n = candi.size();
        int ans = 0;
        for(int i = 0 ; i < 32 ; i++){
            int cnt = 0;
            for(auto& it:candi){
                if(it & (1<<i)) cnt++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
