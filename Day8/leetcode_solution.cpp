class CustomStack { 
public:
    vector<int> st;
    int m;
    CustomStack(int maxSize) {
        m = maxSize;
    }
    
    void push(int x) {
        if(st.size() < m){
            st.push_back(x);
        }
    }
    
    int pop() {
        if(st.size() > 0){
            int x = st.back();
            st.pop_back();
            return x;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < min(k,(int)st.size()); i++){
            st[i] += val;
        }
    }
};
