class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    int min;
    
    MinStack(){
    }
    
    void push(int x) {
        if(stack.empty())
            min=x;
        else if(x<min)
            min=x;
        stack.push_back(x);
    }
    
    void pop() {
        if(stack.back()==min){
            stack.pop_back();
            min = *min_element(stack.begin(),stack.end());
        }
        else
            stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return min;   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */