//Split array in three equal sum subarrays

class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        long long sum = 0;
        for(auto& it:arr) sum += it;
        if(sum%3) return {-1,-1};
        int req = sum/3;
        vector<int> ans;
        int temp = 0;
        for(int i = 0 ; i< arr.size() ; i++){
            temp += arr[i];
            if(temp == req){
                if(ans.size()==0){
                    ans.push_back(0);
                    ans.push_back(i);
                }
                temp = 0;
            }
            else if(temp > req){
                return {-1,-1};
            }
        }
        return ans;
    }
};
