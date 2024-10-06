//1813. Sentence Similarity III

class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<string> v1,v2;
        stringstream s(s1);
        string w;
        while(s>>w){
            v1.push_back(w);
        }
        stringstream ss(s2);
        string ww;
        while(ss>>ww){
            v2.push_back(ww);
        }
        if(v1.size() > v2.size()) swap(v1,v2);
        int n = v1.size() , m = v2.size();
        int st =0 , en = 0;
        while(st < n && v1[st] == v2[st]) st++;
        while(en < n && v1[n-en-1] == v2[m-en-1])en++;
        if(st+en >= n) return 1;
        return 0;
    }
};
