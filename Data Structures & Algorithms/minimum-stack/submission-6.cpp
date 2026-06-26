class MinStack {
public:
    stack<int>minSt;
    stack<int>maxSt;
    MinStack() {
    
    }
    
    void push(int val) {
        maxSt.push(val);
        if(minSt.empty()) minSt.push(val);
        else minSt.push( min(val,(int)minSt.top()) );
    }
    
    void pop() {
        if( !maxSt.empty()) maxSt.pop();
        if( !minSt.empty()) minSt.pop();
    }
    
    int top() {
        return maxSt.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
