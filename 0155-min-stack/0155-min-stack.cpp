class MinStack {
public:
    
    stack<pair<int,int>>stk;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(!stk.empty() && stk.top().second<val){
            stk.push({val,stk.top().second});
        }
        else{
            stk.push({val,val});
        }
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */