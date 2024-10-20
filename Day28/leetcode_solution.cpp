//1106. Parsing A Boolean Expression

class Solution {
public:
    bool parseBoolExpr(string expression) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        stack<char> st;
        for(auto ch:expression){
            if(ch == ',' || ch == '(') continue;
            if(ch == '|' || ch == '&' || ch == 'f' || ch == 't' || ch == '!'){
                st.push(ch);
            }
            else if(ch == ')'){
                bool tt = false , ff = false;
                while(st.top() != '!' && st.top() != '&' && st.top() != '|'){
                    char top = st.top();
                    st.pop();
                    if(top == 'f') ff = true;
                    if(top == 't') tt = true;
                }
                char top = st.top();
                st.pop();
                if(top == '!') {
                    st.push(tt?'f':'t');
                }
                else if(top == '&'){
                    st.push(ff?'f':'t');
                }
                else{
                    st.push(tt?'t':'f');
                }
            }
        }
        return st.top() == 't';
    }
};
