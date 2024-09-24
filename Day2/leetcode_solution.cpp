int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<int,int> prefix;
        for(auto& it: arr1){
            int num = it;
            while(num > 0){
                prefix[num]++;
                num /= 10;
            }
        }
        int maxi = INT_MIN;
        for(auto& it: arr2){
            int num = it;
            int len = log10(num)+1; //counting number of digits in num
            while(num>0){
                if(prefix.find(num) != prefix.end()){
                    break;
                }
                num /= 10;
                len--;
            }
            maxi = max(maxi,len);
        }
        return maxi;
    }
