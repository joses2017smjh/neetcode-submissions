class MinStack {
public:
    stack<int> mn;
    stack<int> minst;

    MinStack() {
        
    }
    
    void push(int val) {
        mn.push(val);
        if(minst.empty()){
            minst.push(val);
        }else{
            minst.push(min(minst.top(), val));
        }
    }
    
    void pop() {
        mn.pop();
        minst.pop(); 
    }
    
    int top() {
        return mn.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
