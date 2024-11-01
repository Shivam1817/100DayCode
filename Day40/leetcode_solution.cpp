//1957. Delete Characters to Make Fancy String

class Solution {
public:
    string makeFancyString(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int cnt = 1;
        int n = s.size();
        string ans = "";
        ans.push_back(s[0]);
        if(s.size()<3) return s;
        for(int i = 1; i < n ; i++){
            if(s[i] == ans.back()){
                cnt++;
                if(cnt<3) ans.push_back(s[i]);
            }
            else{
                cnt = 1;
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
