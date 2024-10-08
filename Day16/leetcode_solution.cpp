//1963. Minimum Number of Swaps to Make the String Balanced

class Solution {
public:
    int minSwaps(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int backet = 0;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '[') backet++;
            else if(backet>0) backet--;
        }
        return (backet+1)/2;
    }
};
