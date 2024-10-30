//1671. Minimum Number of Removals to Make Mountain Array

class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        vector<int> lis(n, 1), lds(n, 1);

        // Compute LIS for each element
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    lis[i] = max(lis[i], lis[j] + 1);
                }
            }
        }

        // Compute LDS for each element
        for (int i = n - 1; i >= 0; --i) {
            for (int j = n - 1; j > i; --j) {
                if (nums[i] > nums[j]) {
                    lds[i] = max(lds[i], lds[j] + 1);
                }
            }
        }

        int maxMountain = 0;

        // Find the maximum mountain length
        for (int i = 1; i < n - 1; ++i) {
            if (lis[i] > 1 && lds[i] > 1) { // Peak must be part of increasing and decreasing subsequence
                maxMountain = max(maxMountain, lis[i] + lds[i] - 1);
            }
        }

        // Minimum removals to form the mountain array
        return n - maxMountain;
    }
};
