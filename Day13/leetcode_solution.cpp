//567. Permutation in String

class Solution {
public:
    bool check(int a[26], int b[26]){
        for(int i = 0 ; i < 26 ; i++){
            if(a[i] != b[i]) return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int count1[26] = {0} , count2[26] = {0};
        for(auto i:s1){
            count1[i-'a']++;
        }
        int i = 0;
        int window = s1.size();
        while(i<window && i<s2.size()){
            count2[s2[i]-'a']++;
            i++;
        }
        if(check(count1,count2)) return 1;
        while(i<s2.size()){
            count2[s2[i]-'a']++;
            count2[s2[i-window]-'a']--;
            i++;
            if(check(count1,count2)) return 1;
        }
        return 0;
    }
};
