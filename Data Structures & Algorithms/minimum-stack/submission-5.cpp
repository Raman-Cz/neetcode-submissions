class MinStack {
public:
    stack<int>minSt;
    stack<int>maxSt;
    int minval ;
    MinStack() {
        minval = INT_MAX;
    }
    
    void push(int val) {
        maxSt.push(val);
        minval = min(minval,val);
        minSt.push(minval);
    }
    
    void pop() {
        if( !maxSt.empty()) maxSt.pop();
        if( !minSt.empty()){
            minSt.pop();
            if(!minSt.empty()) minval = minSt.top();
            else minval = INT_MAX;
        }
    }
    
    int top() {
        return maxSt.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
