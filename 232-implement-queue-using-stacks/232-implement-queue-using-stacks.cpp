class MyQueue {
public:
    stack<int> s,o;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(!s.empty())
        {
            o.push(s.top());
            s.pop();
        }
        int res=o.top();
        o.pop();
        while(!o.empty())
        {
            s.push(o.top());
            o.pop();
        }
        return res;
    }
    
    int peek() {
       while(!s.empty())
        {
            o.push(s.top());
            s.pop();
        }
        int res=o.top();
        while(!o.empty())
        {
            s.push(o.top());
            o.pop();
        }
        return res;
    }
    
    bool empty() {
        if(s.empty()) return true;
        else return false;
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