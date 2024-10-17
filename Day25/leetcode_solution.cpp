//670. Maximum Swap

class Solution {
public:
    int maximumSwap(int num) {
        string st = to_string(num);
        int n = st.size();
        priority_queue<pair<char,int>> pq;
        int cnt = 1;
        for(int i = 0 ; i < n ; i++) pq.push({st[i],i});
        for(int j = 0; j < n; j++)
        {
            while(! pq.empty() && pq.top().second < j) pq.pop();
            if(pq.top().first > st[j]){
                swap(st[j], st[pq.top().second]);
                break;
            }            
        }
        return stoi(st);
    }
};
