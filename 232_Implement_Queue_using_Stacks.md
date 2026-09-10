# [Topic/Pattern]: Implement Queue using Stacks (LeetCode 232)

## Code

```cpp
class MyQueue {
    stack<int> in_st, out_st;
    
    void transfer() {
        if (out_st.empty()) {
            while (!in_st.empty()) {
                out_st.push(in_st.top());
                in_st.pop();
            }
        }
    }
public:
    MyQueue() {}
    
    void push(int x) {
        in_st.push(x);
    }
    
    int pop() {
        transfer();
        int val = out_st.top();
        out_st.pop();
        return val;
    }
    
    int peek() {
        transfer();
        return out_st.top();
    }
    
    bool empty() {
        return in_st.empty() && out_st.empty();
    }
};
```
