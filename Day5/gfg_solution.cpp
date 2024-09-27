class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        int n = arr.size();
        vector<int> ans;
        deque<pair<int, int>> de; 
    
        for (int i = 0; i < n; i++) {
            // Remove elements that are out of the current window
            if (!de.empty() && de.front().second <= i - k)
                de.pop_front();
            
            // Remove elements from the back while they are smaller than the current element
            while (!de.empty() && arr[i] >= de.back().first)
                de.pop_back();
            
            // Add the current element to the deque
            de.push_back({arr[i], i});
            
            // Start adding maximums to the answer once the first window is complete
            if (i + 1 >= k)
                ans.push_back(de.front().first); // The front of the deque is the largest element
                
        }
        return ans;
    }
};
