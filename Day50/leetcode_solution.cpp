//2601. Prime Subtraction Operation

class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        int maxelement = *max_element(nums.begin(),nums.end());
        //storing the prime number
        set<int> st;
        //making sieve vector
        vector<bool> sieve(maxelement+1,true);
        sieve[0] = sieve[1] = false;
        for(int i = 2 ; i <= maxelement ; i++){
            if(sieve[i]){
                st.insert(i);
                for (int j = i * i; j <= maxelement; j += i) {
                    sieve[j] = false;
                }
            }
        }
        int n = nums.size();
        for(int i = n-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1])continue;
            auto it = st.upper_bound(nums[i] - nums[i+1]);
            if(it == st.end()) return 0;
            nums[i]-= *it;
            if(nums[i]<=0)return 0;
        }
        return 1;
    }
};
