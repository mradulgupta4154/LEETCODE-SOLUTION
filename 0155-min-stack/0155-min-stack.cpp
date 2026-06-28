class MinStack {
public:
    stack<int> s ;
    stack<int> ss;
    MinStack() {
       
    }
    void push(int value) {
        s.push(value); 
        if(ss.empty() or value<=ss.top()) ss.push(value); 
    }
    void pop() {
        if(s.empty()) return ;
        if(s.top()==ss.top()) ss.pop();
        s.pop();   
    }
    int top() {
        return s.top();
    }
    int getMin() {
        return ss.top();
        
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