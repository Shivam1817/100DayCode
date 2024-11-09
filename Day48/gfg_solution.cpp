//Minimum sum

class Solution {
  public:
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0;
        int i = num1.size() - 1, j = num2.size() - 1;
    
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
    
            carry = sum / 10;
            result += (sum % 10) + '0';
        }
    
        reverse(result.begin(), result.end());
        int start = 0;
        while (start < result.size() - 1 && result[start] == '0') start++;
        return result.substr(start);
    }
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        string num1 = "";
        string num2 = "";
        for(int i = 0; i < arr.size() ; i++){
            if(i%2 == 0)num1 += to_string(arr[i]);
            else num2 += to_string(arr[i]);
        }
        return addStrings(num1,num2);
    }
};
