// struct Trie for N alphabets
const int N=26;
struct Trie {
    Trie* next[N];
    int len=0;

    Trie() {
        memset(next, 0, sizeof(next));
    }
/*
    ~Trie() {
    //    cout<<"Destructor\n";
        for (int i=0; i<N; ++i) {
            if (next[i] !=NULL) {
                delete next[i];
                next[i]=NULL;
            }
        }
    }
*/
    void insert(const string& word) {
        Trie* Node=this;
        for(char c: word){
            int i=c-'a';
            if(Node->next[i]==NULL)
                Node->next[i]=new Trie();
            Node=Node->next[i];
            Node->len++;
        }
    }
};
class Solution {
public:
    Trie trie;
    inline int score(const string& s){
        Trie* Node=&trie;
        int cnt=0;
        for(char c: s){
            int i=c-'a';
            Node=Node->next[i];
            cnt+=Node->len;
        }
        return cnt;
    }
    vector<int> sumPrefixScores(vector<string>& words) {
        int n=words.size();
        for(string& s: words) trie.insert(s);
        vector<int> ans(n);
        for(int i=0; i<n; i++) 
            ans[i]=score(words[i]);
        return ans;
    }
};


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
