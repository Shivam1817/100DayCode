//1405. Longest Happy String

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string ans = "";
        priority_queue<pair<int,char>> pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});
        while(!pq.empty()){
            auto [cnt1 , ch1] = pq.top();
            pq.pop();
            if(ans.size() > 1 && ans.back() == ch1 && ans[ans.size()-2] == ch1){
                if(pq.empty()) break;
                auto[cnt2 , ch2] = pq.top();
                pq.pop();
                ans += ch2;
                cnt2--;
                if(cnt2 > 0) pq.push({cnt2,ch2});
                pq.push({cnt1,ch1});
            }else{
                ans += ch1;
                cnt1--;
                if(cnt1>0) pq.push({cnt1,ch1});
            }
        }
        return ans; 
    }
};
