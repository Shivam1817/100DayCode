//2696. Minimum String Length After

class Solution {
public:
    int minLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        stack<int> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(!st.empty() && ((st.top() == 'A' && s[i] == 'B') || (s[i] == 'D' && st.top() == 'C'))){
                st.pop();

            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
