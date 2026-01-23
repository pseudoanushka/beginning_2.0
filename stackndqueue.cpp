class MyQueue {
       stack <int> instack;
       stack <int> outstack;
           void transfer() {
        while (!instack.empty()) {
            outstack.push(instack.top());
            instack.pop();
        }
    }
public:
    MyQueue() {

    }
    
    void push(int x) {
        instack.push(x);
    }
    

    int pop() {
        if (outstack.empty()) {
            transfer();
        }
        int val = outstack.top();
        outstack.pop();
        return val;
    }
        int peek() {
        if (outstack.empty()) {
            transfer();
        }
        return outstack.top();
    }
    bool empty() {
        return instack.empty() && outstack.empty();
    }
};
