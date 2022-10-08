class MinStack {
//create 2 stacks
//st1 and minstack
//push() function
//push value to the stack
//if st1 is empty, push value to stack and 
//push value to the minstack
//if st1 is not empty
//and minstack.top() >= val,
//push val to minstack
//else continue
//pop() function
//if the pop value is equal to the minstack top element
//pop both the st1 and the minstack value
//else pop only the st1 element
//top()
//return the top function
//get min() function
//return the top value of the minstack 
public:

stack<int> st1;
stack<int> minSt;


    MinStack() {

    }
    
    void push(int val) {
        if((st1.empty()) || (!st1.empty() && minSt.top()>=val))
        {
            st1.push(val);
            minSt.push(val);
        }else
        {
            st1.push(val);
        }
    }
    
    void pop() {
        if((st1.top()==minSt.top()) && !st1.empty())
        {
            st1.pop();
            minSt.pop();
        }else
        {
            st1.pop();
        }        
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        if(!minSt.empty())
        {
            return minSt.top();
        }
        else
        {
            return 0;
        }
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
