//921. Minimum Add to Make Parentheses Valid

class Solution {
public:
    int minAddToMakeValid(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        stack<int> st;
        st.push(s[0]);
        for(int i = 1;i < s.size(); i++){
            if(!st.empty() && st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
