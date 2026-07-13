class MinStack {
public:
    stack<int> mins;
    stack<int> st;

    MinStack() {
        
    }
    
    void push(int value) {
        if(mins.empty()){
            st.push(value);
            mins.push(value);
        }
        else{
            st.push(value);
            mins.push(min(mins.top(),value));
        }
    }
    
    void pop() {
        st.pop();
        mins.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */