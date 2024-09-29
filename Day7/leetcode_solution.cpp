class AllOne {
public:
    set<pair<int,string>>st;
    unordered_map<string,int> count;
    AllOne() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        count.clear();
    }
    
    void inc(string key) {
        int n = count[key];
        count[key]++;
        st.erase({n,key});
        st.insert({n+1,key});
    }
    
    void dec(string key) {
        int n = count[key];
        count[key]--;
        st.erase({n,key});
        if(count[key] > 0)st.insert({n-1,key});
        else count.erase(key);
    }
    
    string getMaxKey() {
        if(!st.empty()) return st.rbegin()->second;
        return "";
    }
    
    string getMinKey() {
        if(!st.empty()) return st.begin()->second;
        return "";
    }
};
