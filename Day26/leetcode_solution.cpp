//2044. Count Number of Maximum Bitwise-OR Subsets

class Solution {
public:
    void backtracking(vector<int>& nums, int index,int curror, int maxi,int& cnt){
        if(curror == maxi) cnt++;
        for(int i = index; i < nums.size() ; i++) backtracking(nums,i+1,curror|nums[i],maxi,cnt);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int maxi = 0;
        for(int i = 0 ; i  < nums.size(); i++){
            maxi = maxi | nums[i];
        }
        int cnt = 0;
        backtracking(nums,0,0,maxi,cnt);
        return cnt;
    }
};
