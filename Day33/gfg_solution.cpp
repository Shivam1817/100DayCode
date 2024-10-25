//Alternative Sorting

class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int i = 0 , j = arr.size()-1;
        while(i <= j){
            ans.push_back(arr[j]);
            if(i==j) break;
            ans.push_back(arr[i]);
            j--;
            i++;
        }
        return ans;
    }
};
