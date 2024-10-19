//1545. Find Kth Bit in Nth Binary String
class Solution {
public:
    string invert(string s1){
        for(auto& i:s1){
            if(i == '1') i = '0';
            else i = '1';
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
    char findKthBit(int n, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string s1;
        s1.push_back('0');
        if(n==1) return '0';
        int temp = n;
        while(temp>1){
            string s2 = "";
            s2 = s1+'1'+invert(s1);
            s1 = s2;
            temp--;
        }
        cout<<s1<<endl;
        return s1[k-1];
    }
};
