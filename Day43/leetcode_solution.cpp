//3163. String Compression III

class Solution {
public:
    string compressedString(string word) {
        int cnt = 1;
        string str = "";
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i] == word[i+1]) cnt++;
           else {
                while (cnt > 9) {
                    str += "9" + string(1, word[i]);
                    cnt -= 9;
                }
                str += to_string(cnt) + word[i];
                cnt = 1;
            }
        }
        return str;
    }
};
