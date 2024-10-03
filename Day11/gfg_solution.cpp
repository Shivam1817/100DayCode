//Majority Vote
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        int ans1 = -1 , ans2 = -1;
        //most number of candidate
        for(auto i:nums){
            if(i == ans1){
                cnt1++;
            }
            else if(i == ans2){
                cnt2++;
            }
            else if(cnt1 == 0){
                ans1 = i;
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                ans2 = i;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        //let find the cnt
        cnt1 = 0 ,  cnt2 = 0;
        for(auto i : nums){
            if(i == ans1) cnt1++;
            else if(i == ans2) cnt2++;
        }
        if(cnt1 <= n/3) ans1 = -1;
        if(cnt2 <= n/3) ans2 = -1;
        if(ans1 == -1 && ans2 == -1) return {-1};
        if(ans1 == -1 && ans2 != -1) return {ans2};
        if(ans1 != -1 && ans2 == -1) return {ans1};
        return {ans1,ans2};
    }
};
