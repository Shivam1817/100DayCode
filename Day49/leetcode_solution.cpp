//3097. Shortest Subarray With OR at Least K II

class Solution {
public:

    void add(vector<int>& v, int num) {
        for (int i = 0; i < 32; i++) {
            int flag = (num >> i) & 1;
            if (flag) v[32 - i - 1]+=1;
        }
    }

    void sub(vector<int>& v, int num) {
        for (int i = 0; i < 32; i++) {
            int flag = (num >> i) & 1;
            if (flag) v[32 - i - 1]-=1;
        }
    }

    bool isGreaterOrEqual(const vector<int>& v, int k) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
           if(v[32 - 1 - i]) ans += pow(2,i);
            if (ans >= k) return true; 
        }
        return ans >= k;
    }

    int minimumSubarrayLength(vector<int>& nums, int k) {
        if (find(nums.begin(), nums.end(), k) != nums.end())
            return 1;
        
        int n = nums.size();
        int i = 0, r = 0; // left , right pointer
        int mini = INT_MAX;
        vector<int> binary(32, 0);

        while (r < n) {
            add(binary, nums[r]); // adding freq

            while (isGreaterOrEqual(binary, k) && i <= r)  // if num[i] is greater or equal enter in the loop and minimize the window
{
                mini = min(mini, r - i + 1); // take minimum value
                sub(binary, nums[i]);
                i++; // minimize window 
            }
            r++;
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};
