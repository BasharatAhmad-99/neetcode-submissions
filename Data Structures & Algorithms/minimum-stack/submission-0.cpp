class MinStack {
    stack<int>  min;
    stack<int> sta;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        sta.push(val);
        if(min.empty()){
            min.push(val);
            return;
        }
        else{
            if(val<=min.top()){
                min.push(val);
                return;
            }
        }
    }
    
    void pop() {
        if(sta.empty()){
            return;
        }
        if(sta.top()==min.top()){
            min.pop();
        }
        sta.pop();
        return;
    }
    
    int top() {
        return sta.top();
    }
    
    int getMin() {
        return min.top();
    }
};
