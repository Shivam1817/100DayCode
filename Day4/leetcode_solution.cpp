class MyCalendar {
public:
    vector<pair<int,int>> booking;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        for(auto& pair:booking){
            int book_start = pair.first;
            int book_end = pair.second;
            if(start < book_end && end > book_start) return false;
        }
        booking.push_back({start,end});
        return true;
    }
};
