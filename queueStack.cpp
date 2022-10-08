class MyQueue {

//only two stacks s1 and s2
//MyQueue() 
//Move the first stack to the second stack
//add the new element to the first stack
//push back the elements from the second stack to the first one
//if(s2.top()=="MyQueue") ????
//else if(s2.top()=="push") call the push function
//else if(s2.top()=="peak") call the peak function
//else if(s2.top()=="pop") call the pop function
//else if(s2.top()=="empty") call the empty function
//push(), pushes an element to the back of the queue
//push x to the back of the queue
//pop(), pop element from front and returns it
//saves the outer most element to a temporary variable temp
//pops the element
//returns temp
//peek(), returns the element at the front of the queue
//checks the top element
//saves it in a temporary variable temp returns temp
//boolean empty returnd true if queue is empty
//if s1.empty()==1 return true
//else return false

public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
       
    }
    
    void push(int x) {
         while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);        
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int temp=0;

        temp=s1.top();
        s1.pop();

        return temp;
    }
    
    int peek() {
        int temp2;

        temp2=s1.top();

        return temp2;
    }
    
    bool empty() {
        if(s1.empty()==1)
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
