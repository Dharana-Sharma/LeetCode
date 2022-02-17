class MyQueue {
public:
public:
    MyQueue() {

    }
    stack<int> ip, op;

    void push(int x) {
        ip.push(x);
    }

    int pop() {
        int res = 0;
        if(!op.empty()){
            res = op.top();
            op.pop();
        }
        else{
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
            res = op.top();
            op.pop();
        }
        return res;
    }

    int peek() {
        int res = 0;
        if(!op.empty()){
            res = op.top();
        }
        else{
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
            res = op.top();
        }
        return res;
    }

    bool empty() {
        return op.empty() && ip.empty();
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