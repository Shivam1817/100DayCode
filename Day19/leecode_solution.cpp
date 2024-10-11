//1942. The Number of the Smallest Unoccupied Chair

class Solution {
public:
    int smallestChair(vector<vector<int>>& t, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = t.size();
        
        for (int i = 0; i < n; i++) {
            t[i].push_back(i);
        }
        
        sort(t.begin(), t.end(), [](const auto &a, const auto &b) {
            return a[0] < b[0];
        });
        
        priority_queue<int, vector<int>, greater<int>> ac;
        
        for (int i = 0; i < n; ++i) {
            ac.push(i);
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        for (int i = 0; i < n; i++) {
            int at = t[i][0];
            int lt = t[i][1];
            int fi = t[i][2];
            
            while (!pq.empty() && pq.top().first <= at) {
                ac.push(pq.top().second); 
                pq.pop();  
            }
            
            int ch = ac.top();
            ac.pop();
            
            if (fi == k) {
                return ch;
            }
            
            pq.push({lt, ch});
        }
        
        return -1;
 
    }
};
