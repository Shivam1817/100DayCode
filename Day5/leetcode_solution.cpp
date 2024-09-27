class MyCalendarTwo {
public:
    map<int,int>mp;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        mp[start]++;
        mp[end]--;
        int ongoingevent = 0;
        for(auto i: mp){
            ongoingevent += i.second;
            if(ongoingevent > 2){
                mp[start]--;
                mp[end]++;
                return false;
            }
        }
        return true;
    }
};
