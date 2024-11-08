//1829. Maximum XOR for Each Query

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> ans;
        //total xor
        int XOR = nums[0];
        for(int i = 1 ; i < n ; i++) XOR ^= nums[i];

        //find the mask and set all bits equal to 1
        int mask = (1<<maximumBit)-1;
        for(int i = 0 ; i < n ; i++){
            int k = XOR^mask;
            ans.push_back(k);
            XOR ^= nums[n-1-i];
        }
        return ans;
    }
};
