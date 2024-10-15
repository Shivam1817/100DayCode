//2938. Separate Black and White Balls

class Solution {
public:
    long long minimumSteps(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        long long ans = 0;
        long long cntzero = 0;
        
        for(auto i:s){
            if(i == '0') ans += cntzero;
            else cntzero++;
        }
        return ans;
    }
};
