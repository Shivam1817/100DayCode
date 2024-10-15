//Two Swaps

class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int n = arr.size();
        int cnt = 2;
        for(int i = 0; i < n && cnt > 0; i++) {
            while(arr[i] != i + 1) {
                swap(arr[i], arr[arr[i] - 1]); 
                cnt--;
                if(cnt == 0) break; 
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] != i + 1) return false;
        }
    
        if(cnt == 0)return true;
    }
};
