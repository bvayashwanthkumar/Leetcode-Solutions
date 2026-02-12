class StockSpanner {
public:
    vector<int> st;
    StockSpanner() {
       

    }
    
    int next(int price) {
        if(st.size()==0){
            st.push_back(price);
            return 1;
        }
        int ct=0;
        for(int i=st.size()-1;i>=0;i--){
            if(st[i]<=price) ct++;
            else break;
        }
        st.push_back(price);
        return ++ct;



    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */