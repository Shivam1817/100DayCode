//Minimum repeat to make substring

class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        string temp = s1;
        int ans = 1;
        while(s1.size()<s2.size()){
            s1 += temp;
            ans++;
        }
        if(s1.find(s2) != string::npos)return ans;
        else{
            s1 += temp;
            ans++;
        }
        if(s1.find(s2) != string::npos)return ans;
        return -1;
    }
};
