class MyStack {
public:

    queue<int> st;
    MyStack() {
        
    }
    
    void push(int x) {
        int n=st.size();
        st.push(x);

        for(int i=0;i<n;i++){
            st.push(st.front());
            st.pop();
        }
    }
    
    int pop() {
        if(empty())return -1;
        
        int n=st.front();
        st.pop();
        return n;
        
    }
    
    int top() {
      
        return st.front();
    }
    
    bool empty() {
        return st.size()==0;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */