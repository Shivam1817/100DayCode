//2406. Divide Intervals Into Minimum Number of Groups

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i =0 ; i < intervals.size();i++){
            int st=intervals[i][0],end=intervals[i][1];
            if(pq.size()>0  && st>pq.top()){
                pq.pop();
                pq.push(end);
            }else{
                pq.push(end);
            }
        }
        return pq.size();
    }
};
