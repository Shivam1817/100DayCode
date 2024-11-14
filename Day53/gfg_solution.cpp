//Nearly sorted

void nearlySorted(vector<int>& arr, int k) {
        // code
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i < arr.size() ; i++){
            pq.push(arr[i]);
        }
        int j = 0;
        while(!pq.empty()){
            auto it = pq.top();
            arr[j++] = it;
            pq.pop();
        }
}
