//2914. Minimum Number of Changes to Make Binary String Beautiful

class Solution {
public:
    int minChanges(string s) {
        int ans = 0;
        int n = s.size();
        for(int i = 0 ; i < n-1 ; i+=2){
            if(s[i] != s[i+1]) ans++;
        }
        return ans;
    }
};
