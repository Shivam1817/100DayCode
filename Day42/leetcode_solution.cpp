//796. Rotate String

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n = s.size();
        while(n--){
            if(s == goal) return true;
            else{
                s += s[0];
                s.erase(0,1);
                if(s == goal) return true;
            }
        }
        return false;
    }
};
