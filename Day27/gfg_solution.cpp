//Nearest multiple of 10

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n = str.size();
        char last = str[n-1];
        char last2 = str[n-2];
        if(last <= '5') {
            str[n-1] = '0';
        }
        else {
            str[n-1] = '0';
            int carry = 1;
            int i = n-2;
            while(i >= 0 && carry > 0){
                if(str[i] == '9'){
                    str[i] = '0';
                    carry = 1;
                }
                else{
                    str[i] += 1;
                    carry = 0;
                }
                i--;
            }
            if(carry == 1) str = '1' + str;
        }
        return str;
    }
};
